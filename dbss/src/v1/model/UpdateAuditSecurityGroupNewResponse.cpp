

#include "huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditSecurityGroupNewResponse::UpdateAuditSecurityGroupNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateAuditSecurityGroupNewResponse::~UpdateAuditSecurityGroupNewResponse() = default;

void UpdateAuditSecurityGroupNewResponse::validate()
{
}

web::json::value UpdateAuditSecurityGroupNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateAuditSecurityGroupNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditSecurityGroupNewResponse::getResult() const
{
    return result_;
}

void UpdateAuditSecurityGroupNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAuditSecurityGroupNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAuditSecurityGroupNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


