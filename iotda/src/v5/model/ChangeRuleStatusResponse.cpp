

#include "huaweicloud/iotda/v5/model/ChangeRuleStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ChangeRuleStatusResponse::ChangeRuleStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ChangeRuleStatusResponse::~ChangeRuleStatusResponse() = default;

void ChangeRuleStatusResponse::validate()
{
}

web::json::value ChangeRuleStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ChangeRuleStatusResponse::fromJson(const web::json::value& val)
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


std::string ChangeRuleStatusResponse::getStatus() const
{
    return status_;
}

void ChangeRuleStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangeRuleStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ChangeRuleStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


