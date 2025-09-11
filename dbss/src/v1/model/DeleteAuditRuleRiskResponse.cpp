

#include "huaweicloud/dbss/v1/model/DeleteAuditRuleRiskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditRuleRiskResponse::DeleteAuditRuleRiskResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteAuditRuleRiskResponse::~DeleteAuditRuleRiskResponse() = default;

void DeleteAuditRuleRiskResponse::validate()
{
}

web::json::value DeleteAuditRuleRiskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteAuditRuleRiskResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditRuleRiskResponse::getStatus() const
{
    return status_;
}

void DeleteAuditRuleRiskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteAuditRuleRiskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteAuditRuleRiskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


