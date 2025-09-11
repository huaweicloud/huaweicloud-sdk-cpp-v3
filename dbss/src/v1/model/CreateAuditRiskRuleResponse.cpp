

#include "huaweicloud/dbss/v1/model/CreateAuditRiskRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditRiskRuleResponse::CreateAuditRiskRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

CreateAuditRiskRuleResponse::~CreateAuditRiskRuleResponse() = default;

void CreateAuditRiskRuleResponse::validate()
{
}

web::json::value CreateAuditRiskRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateAuditRiskRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateAuditRiskRuleResponse::getStatus() const
{
    return status_;
}

void CreateAuditRiskRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAuditRiskRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAuditRiskRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


