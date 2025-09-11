

#include "huaweicloud/dbss/v1/model/SetSensitiveMaskRuleSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSensitiveMaskRuleSwitchResponse::SetSensitiveMaskRuleSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetSensitiveMaskRuleSwitchResponse::~SetSensitiveMaskRuleSwitchResponse() = default;

void SetSensitiveMaskRuleSwitchResponse::validate()
{
}

web::json::value SetSensitiveMaskRuleSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetSensitiveMaskRuleSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetSensitiveMaskRuleSwitchResponse::getStatus() const
{
    return status_;
}

void SetSensitiveMaskRuleSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetSensitiveMaskRuleSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetSensitiveMaskRuleSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


