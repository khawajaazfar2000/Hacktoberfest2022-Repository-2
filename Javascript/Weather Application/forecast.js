// import * as nullchecker from "/util.js"
//* updates about weather
let weatherForecast={
    api_Key: "50909ffea1644d4e8cf103401221807",
    fetchForecastWeather:function(city_ft){
      fetch("https://api.weatherapi.com/v1/forecast.json?key=" + this.api_Key +  " &q=" + city_ft + "&days=7&aqi=no&alerts=no").then((response) => response.json()).then((data) => this.displayWeatherForecast(data));
    },
    displayWeatherForecast:function(data){
      if (data.location === undefined) {
        alert("Enter a valid city name !");
      }
      else{
        
  for(let x=1;x<3;x++){
    const {date}=data.forecast.forecastday[x];
    const {avgtemp_c}=data.forecast.forecastday[x].day;
    const {text}=data.forecast.forecastday[x].day.condition;
    const {daily_chance_of_rain}=data.forecast.forecastday[x].day;
    document.querySelector(`#day${x}`).textContent=date;
    document.querySelector(`#temp${x}`).textContent=avgtemp_c+"c";
    document.querySelector(`#desc${x}`).textContent=text;
    document.querySelector(`#rain${x}`).textContent=  daily_chance_of_rain+'%';
  }
   
    
      }
    }
    };
    function getCityName() {
        let city_ft = document.querySelector("#search-input-weathermap").value;
        //* city_Name = document.querySelector('#search-input').textContent; the next line works fine but this should work instead of that
        return city_ft;
      }
      function setEmptyBarToDefault(){
        document.querySelector('#search-input-weathermap').style.color='green';
        document.querySelector('#search-input-weathermap').placeholder='Search for city';
    }
    
    function setEmptyBarToError(){
        document.querySelector('#search-input-weathermap').style.color='red';
        document.querySelector('#search-input-weathermap').placeholder="Enter a valid city name, search box can't be empty !";
       setTimeout(setEmptyBarToDefault,5000);
    }
    //* Button event listener on forecast page
    document.querySelector("#search-btn-weathermap").addEventListener("onclick", function () {
    let city_ft = document.querySelector("#search-input-weathermap").value;
    if (getCityName().length==0) {
        setEmptyBarToError();
        }
        else{
          weatherForecast.fetchForecastWeather(getCityName());
        }
      });

    document.body.addEventListener("keyup", function (event) {
    if(event.key==="Enter")
    if (getCityName().length==0) {
      setEmptyBarToError();
      }
      else{
        weatherForecast.fetchForecastWeather(getCityName());
      }
    });
   