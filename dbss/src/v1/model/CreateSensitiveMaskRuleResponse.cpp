

#include "huaweicloud/dbss/v1/model/CreateSensitiveMaskRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateSensitiveMaskRuleResponse::CreateSensitiveMaskRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

CreateSensitiveMaskRuleResponse::~CreateSensitiveMaskRuleResponse() = default;

void CreateSensitiveMaskRuleResponse::validate()
{
}

web::json::value CreateSensitiveMaskRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateSensitiveMaskRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateSensitiveMaskRuleResponse::getStatus() const
{
    return status_;
}

void CreateSensitiveMaskRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateSensitiveMaskRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateSensitiveMaskRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


