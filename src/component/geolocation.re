module Geolocation = {
  include ReactRe.Component.Stateful;
  type state = {lat: float, lng: float};
  type props = {message: string};
  let getInitialState _ /* props */ => {
    lat: 0.0,
    lng: 0.0
  };
  let name = "Geolocation";
  
  let componentDidMount {setState} => {
    let stateSetter {state} => {
      /* What is the current geolocation of the user? */
      {...state, lat: 1.1, lng: 1.1}
    };
    setState stateSetter;
    None
  };

  let render {props, state, updater} => {
    <div> (ReactRe.stringToElement props.message) </div>;
  }
};

include ReactRe.CreateComponent Geolocation;

let createElement ::message => wrapProps {message: message};
