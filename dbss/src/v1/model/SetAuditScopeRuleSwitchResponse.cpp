

#include "huaweicloud/dbss/v1/model/SetAuditScopeRuleSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditScopeRuleSwitchResponse::SetAuditScopeRuleSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetAuditScopeRuleSwitchResponse::~SetAuditScopeRuleSwitchResponse() = default;

void SetAuditScopeRuleSwitchResponse::validate()
{
}

web::json::value SetAuditScopeRuleSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAuditScopeRuleSwitchResponse::fromJson(const web::json::value& val)
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


std::string SetAuditScopeRuleSwitchResponse::getStatus() const
{
    return status_;
}

void SetAuditScopeRuleSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAuditScopeRuleSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAuditScopeRuleSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


