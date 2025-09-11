

#include "huaweicloud/dbss/v1/model/UpdateSensitiveMaskRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateSensitiveMaskRuleResponse::UpdateSensitiveMaskRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateSensitiveMaskRuleResponse::~UpdateSensitiveMaskRuleResponse() = default;

void UpdateSensitiveMaskRuleResponse::validate()
{
}

web::json::value UpdateSensitiveMaskRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateSensitiveMaskRuleResponse::fromJson(const web::json::value& val)
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


std::string UpdateSensitiveMaskRuleResponse::getStatus() const
{
    return status_;
}

void UpdateSensitiveMaskRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateSensitiveMaskRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateSensitiveMaskRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


