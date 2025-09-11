

#include "huaweicloud/dbss/v1/model/DeleteSensitiveRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteSensitiveRulesResponse::DeleteSensitiveRulesResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteSensitiveRulesResponse::~DeleteSensitiveRulesResponse() = default;

void DeleteSensitiveRulesResponse::validate()
{
}

web::json::value DeleteSensitiveRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteSensitiveRulesResponse::fromJson(const web::json::value& val)
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


std::string DeleteSensitiveRulesResponse::getStatus() const
{
    return status_;
}

void DeleteSensitiveRulesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteSensitiveRulesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteSensitiveRulesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


