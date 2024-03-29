

#include "huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditSecurityGroupResponse::UpdateAuditSecurityGroupResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateAuditSecurityGroupResponse::~UpdateAuditSecurityGroupResponse() = default;

void UpdateAuditSecurityGroupResponse::validate()
{
}

web::json::value UpdateAuditSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateAuditSecurityGroupResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditSecurityGroupResponse::getResult() const
{
    return result_;
}

void UpdateAuditSecurityGroupResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAuditSecurityGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAuditSecurityGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


