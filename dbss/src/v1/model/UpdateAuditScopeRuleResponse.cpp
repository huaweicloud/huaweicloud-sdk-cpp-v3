

#include "huaweicloud/dbss/v1/model/UpdateAuditScopeRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditScopeRuleResponse::UpdateAuditScopeRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateAuditScopeRuleResponse::~UpdateAuditScopeRuleResponse() = default;

void UpdateAuditScopeRuleResponse::validate()
{
}

web::json::value UpdateAuditScopeRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateAuditScopeRuleResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditScopeRuleResponse::getStatus() const
{
    return status_;
}

void UpdateAuditScopeRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAuditScopeRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAuditScopeRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


