// import * as nullchecker from "/util.js"
//* to get geo location co ordinates when needed
navigator.geolocation.getCurrentPosition((position)=>{
  let lat = position.coords.latitude;
  let long = position.coords.longitude;
  lat.toFixed(2);
  long.toFixed(2);
weather.get_Weather(lat+" "+long);

})


let weather = {
  api_Key: "50909ffea1644d4e8cf103401221807",
  get_Weather: function (city_Name) {
    fetch("https://api.weatherapi.com/v1/current.json?key=" + this.api_Key + "&q=" + city_Name +"&days=7" +
     "&aqi=no"+"&alert=yes").then((response) => response.json()).then((data) => this.displayWeather(data)); //closure
    // data variable holds the json
  },

  displayWeather: function (data) {
    if (data.location === undefined) {
      alert("Enter a valid city name !");
    } else {
      const { name } = data.location;
      const { text } = data.current.condition;
      const { temp_c } = data.current;
      const { wind_mph } = data.current;
      const { temp_f } = data.current;
      const { icon } = data.current.condition;
      const { humidity } = data.current;
      //  console.log(text, name, temp_c, wind_mph, temp_f, icon, humidity);
      document.querySelector(".city").textContent = "Weather in " + name;
      //* document.querySelector('#weather-icon').src = 'https://www.weatherapi.com/api-explorer.aspx#forecast' + icon;
      document.querySelector(".temp").textContent = temp_c + "°C 🌥";
      document.querySelector(".temp_fahrenheit").textContent = temp_f + "° Fahrenheit";
      document.querySelector(".desc").textContent = text;
      document.querySelector(".humidity").textContent = "Humidity : " + humidity + "% 💧";
      document.querySelector(".wind").textContent = "Wind: " + wind_mph + " Km/h 🌀";
      document.querySelector(".weather").classList.remove("weather-visibility");
      document.body.style.backgroundImage = "url('https://source.unsplash.com/1600x900/?" + name + "')";
    }
  },
  
  search: function (city_Name) {
    this.get_Weather(city_Name);
  },
};

function setHomeEmptyBarToDefault(){
    document.querySelector('#search-input').style.color='#cbb2d8';
    document.querySelector('#search-input').placeholder='Search city';
}

function setHomeEmptyBarToError(){
    document.querySelector('#search-input').style.color='red';
    document.querySelector('#search-input').placeholder="Enter a valid city name, search box can't be empty !";
    setTimeout(setHomeEmptyBarToDefault,5000);
}

function getCityName() {
     let city_Name = document.querySelector("#search-input").value;
     //* city_Name = document.querySelector('#search-input').textContent; the next line works fine but this should work instead of that
     return city_Name;
}

document.querySelector("#search-btn").addEventListener("click", function () {
 if(getCityName().length==0){
   setHomeEmptyBarToError();
 }
 else{
    weather.search(getCityName());
 }
});

document.body.addEventListener("keyup", function (event) {
  if (event.key === "Enter") {
    if(getCityName().length==0){
      setHomeEmptyBarToError();
    }
    else{
    weather.search(getCityName());
    }
  }
});

//* battery api

// navigator.getBattery().then((battery) => {
//     let BatteryState = function () {
//         updateChargeInfo();
//         updateLevelInfo();

//     }
//     BatteryState();

// });
// battery.addEventListener('chargingchange', 'levelchange', () => {
//     updateChargeInfo();
// });
// function updateChargeInfo() {
//     let charge = battery.charging
//     if (charge === true) {
//         document.querySelector('#battery-text').textContent = 'Plugged in⚡'
//     }
//     else {
//         battery.addEventListener('levelchange', () => {
//             updateLevelInfo();
//         });
//     }
// }

// function updateLevelInfo() {
//     document.querySelector('#battery-text').textContent = `${battery.level * 100}%`;
// }


