module Geolocation = {
  include ReactRe.Component;
  type props = {message: string};
  let name = "Geolocation";
  let handleClick _ _ => {
    Js.log "clicked!";
    None
  };
  let render {props, updater} =>
    <div onClick=(updater handleClick)> (ReactRe.stringToElement props.message) </div>;
};

include ReactRe.CreateComponent Geolocation;

let createElement ::message => wrapProps {message: message};
