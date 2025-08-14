

#include "huaweicloud/iotda/v5/model/RuleStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RuleStatus::RuleStatus()
{
    status_ = "";
    statusIsSet_ = false;
}

RuleStatus::~RuleStatus() = default;

void RuleStatus::validate()
{
}

web::json::value RuleStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RuleStatus::fromJson(const web::json::value& val)
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


std::string RuleStatus::getStatus() const
{
    return status_;
}

void RuleStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleStatus::statusIsSet() const
{
    return statusIsSet_;
}

void RuleStatus::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


