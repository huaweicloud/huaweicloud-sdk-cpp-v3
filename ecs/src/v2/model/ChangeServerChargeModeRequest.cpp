

#include "huaweicloud/ecs/v2/model/ChangeServerChargeModeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerChargeModeRequest::ChangeServerChargeModeRequest()
{
    bodyIsSet_ = false;
}

ChangeServerChargeModeRequest::~ChangeServerChargeModeRequest() = default;

void ChangeServerChargeModeRequest::validate()
{
}

web::json::value ChangeServerChargeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ChangeServerChargeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeServerChargeModeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ChangeServerChargeModeRequestBody ChangeServerChargeModeRequest::getBody() const
{
    return body_;
}

void ChangeServerChargeModeRequest::setBody(const ChangeServerChargeModeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeServerChargeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeServerChargeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


