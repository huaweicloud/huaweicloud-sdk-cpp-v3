

#include "huaweicloud/evs/v2/model/ChangeVolumeChargeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ChangeVolumeChargeModeResponse::ChangeVolumeChargeModeResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ChangeVolumeChargeModeResponse::~ChangeVolumeChargeModeResponse() = default;

void ChangeVolumeChargeModeResponse::validate()
{
}

web::json::value ChangeVolumeChargeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeVolumeChargeModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeVolumeChargeModeResponse::getBody() const
{
    return body_;
}

void ChangeVolumeChargeModeResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeVolumeChargeModeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeVolumeChargeModeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


