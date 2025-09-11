

#include "huaweicloud/dbss/v1/model/SetAuditSqlRuleSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditSqlRuleSwitchResponse::SetAuditSqlRuleSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetAuditSqlRuleSwitchResponse::~SetAuditSqlRuleSwitchResponse() = default;

void SetAuditSqlRuleSwitchResponse::validate()
{
}

web::json::value SetAuditSqlRuleSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAuditSqlRuleSwitchResponse::fromJson(const web::json::value& val)
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


std::string SetAuditSqlRuleSwitchResponse::getStatus() const
{
    return status_;
}

void SetAuditSqlRuleSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAuditSqlRuleSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAuditSqlRuleSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


