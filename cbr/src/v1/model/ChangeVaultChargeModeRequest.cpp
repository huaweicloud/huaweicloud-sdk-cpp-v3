

#include "huaweicloud/cbr/v1/model/ChangeVaultChargeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ChangeVaultChargeModeRequest::ChangeVaultChargeModeRequest()
{
    bodyIsSet_ = false;
}

ChangeVaultChargeModeRequest::~ChangeVaultChargeModeRequest() = default;

void ChangeVaultChargeModeRequest::validate()
{
}

web::json::value ChangeVaultChargeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeVaultChargeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeToPeriod refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ChangeToPeriod ChangeVaultChargeModeRequest::getBody() const
{
    return body_;
}

void ChangeVaultChargeModeRequest::setBody(const ChangeToPeriod& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeVaultChargeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeVaultChargeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


