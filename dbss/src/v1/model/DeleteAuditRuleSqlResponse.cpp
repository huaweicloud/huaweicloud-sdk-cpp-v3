

#include "huaweicloud/dbss/v1/model/DeleteAuditRuleSqlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditRuleSqlResponse::DeleteAuditRuleSqlResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteAuditRuleSqlResponse::~DeleteAuditRuleSqlResponse() = default;

void DeleteAuditRuleSqlResponse::validate()
{
}

web::json::value DeleteAuditRuleSqlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteAuditRuleSqlResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditRuleSqlResponse::getStatus() const
{
    return status_;
}

void DeleteAuditRuleSqlResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAuditRuleSqlResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAuditRuleSqlResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


