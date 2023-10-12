

#include "huaweicloud/gaussdb/v3/model/UpdateAuditLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAuditLogResponse::UpdateAuditLogResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateAuditLogResponse::~UpdateAuditLogResponse() = default;

void UpdateAuditLogResponse::validate()
{
}

web::json::value UpdateAuditLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateAuditLogResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditLogResponse::getResult() const
{
    return result_;
}

void UpdateAuditLogResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAuditLogResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAuditLogResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


