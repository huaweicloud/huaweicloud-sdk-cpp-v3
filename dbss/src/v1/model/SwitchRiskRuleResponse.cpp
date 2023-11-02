

#include "huaweicloud/dbss/v1/model/SwitchRiskRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchRiskRuleResponse::SwitchRiskRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SwitchRiskRuleResponse::~SwitchRiskRuleResponse() = default;

void SwitchRiskRuleResponse::validate()
{
}

web::json::value SwitchRiskRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchRiskRuleResponse::fromJson(const web::json::value& val)
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


std::string SwitchRiskRuleResponse::getStatus() const
{
    return status_;
}

void SwitchRiskRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchRiskRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchRiskRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


