

#include "huaweicloud/dbss/v1/model/CreateAuditScopeRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditScopeRuleResponse::CreateAuditScopeRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

CreateAuditScopeRuleResponse::~CreateAuditScopeRuleResponse() = default;

void CreateAuditScopeRuleResponse::validate()
{
}

web::json::value CreateAuditScopeRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateAuditScopeRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateAuditScopeRuleResponse::getStatus() const
{
    return status_;
}

void CreateAuditScopeRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAuditScopeRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAuditScopeRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


