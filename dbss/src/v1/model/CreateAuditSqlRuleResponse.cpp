

#include "huaweicloud/dbss/v1/model/CreateAuditSqlRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditSqlRuleResponse::CreateAuditSqlRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

CreateAuditSqlRuleResponse::~CreateAuditSqlRuleResponse() = default;

void CreateAuditSqlRuleResponse::validate()
{
}

web::json::value CreateAuditSqlRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateAuditSqlRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateAuditSqlRuleResponse::getStatus() const
{
    return status_;
}

void CreateAuditSqlRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAuditSqlRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAuditSqlRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


