

#include "huaweicloud/dbss/v1/model/SwitchRiskRuleNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchRiskRuleNewResponse::SwitchRiskRuleNewResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SwitchRiskRuleNewResponse::~SwitchRiskRuleNewResponse() = default;

void SwitchRiskRuleNewResponse::validate()
{
}

web::json::value SwitchRiskRuleNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchRiskRuleNewResponse::fromJson(const web::json::value& val)
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


std::string SwitchRiskRuleNewResponse::getStatus() const
{
    return status_;
}

void SwitchRiskRuleNewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchRiskRuleNewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchRiskRuleNewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


