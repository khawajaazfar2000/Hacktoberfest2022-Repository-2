import Maindivdata from "./Maindivdata";

function Centerdata(){
    return(
    <>
    <div className="row container-fluid mx-auto pt-5">
        <div className="col-12 col-sm-6 col-md-4 col-lg-4 col-xl-4 mx-auto">
        <Maindivdata img="https://cdn.shopify.com/s/files/1/2277/5269/files/bannerbb_e4608e43-fc9c-4067-a578-a2aae4a50073.jpg?v=1627894943"
        title="UNSTITICHED"/>   
        <a href="#"><h5 className="under" style={{textAlign:"center"}}>SHOP NOW</h5></a>    
        </div> 
        <div className="col-12 col-sm-4 col-md-4 col-lg-4 col-xl-4 mx-auto">
        <Maindivdata img="https://cdn.shopify.com/s/files/1/2277/5269/files/bannert.jpg?v=1627971591"
        title="SWISS VOILE"/>
        <a href="#" ><h5 className="under" style={{textAlign:"center"}}>SHOP NOW</h5></a>    
        </div> 
        <div className="col-12 col-sm-4 col-md-4 col-lg-4 col-xl-4 mx-auto">
        <Maindivdata img="https://cdn.shopify.com/s/files/1/2277/5269/files/ui_ba04f40a-a7c8-4c80-950a-38788bce2166.jpg?v=1627971632"
        title="FAUCHSIA LAWN"/>
        <a href="#" ><h5 className="under" style={{textAlign:"center"}}>SHOP NOW</h5></a>    
        </div> 
    </div>
    </>
    );
}
export default Centerdata;