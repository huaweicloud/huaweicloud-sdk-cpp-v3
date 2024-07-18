

#include "huaweicloud/evs/v2/model/ChangeVolumeChargeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ChangeVolumeChargeModeRequest::ChangeVolumeChargeModeRequest()
{
    bodyIsSet_ = false;
}

ChangeVolumeChargeModeRequest::~ChangeVolumeChargeModeRequest() = default;

void ChangeVolumeChargeModeRequest::validate()
{
}

web::json::value ChangeVolumeChargeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeVolumeChargeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeVolumeChargeModeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ChangeVolumeChargeModeRequestBody ChangeVolumeChargeModeRequest::getBody() const
{
    return body_;
}

void ChangeVolumeChargeModeRequest::setBody(const ChangeVolumeChargeModeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeVolumeChargeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeVolumeChargeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


