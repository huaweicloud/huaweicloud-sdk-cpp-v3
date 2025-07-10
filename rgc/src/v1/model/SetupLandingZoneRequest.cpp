

#include "huaweicloud/rgc/v1/model/SetupLandingZoneRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




SetupLandingZoneRequest::SetupLandingZoneRequest()
{
    bodyIsSet_ = false;
}

SetupLandingZoneRequest::~SetupLandingZoneRequest() = default;

void SetupLandingZoneRequest::validate()
{
}

web::json::value SetupLandingZoneRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetupLandingZoneRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetupLandingZoneReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetupLandingZoneReqBody SetupLandingZoneRequest::getBody() const
{
    return body_;
}

void SetupLandingZoneRequest::setBody(const SetupLandingZoneReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetupLandingZoneRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetupLandingZoneRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


