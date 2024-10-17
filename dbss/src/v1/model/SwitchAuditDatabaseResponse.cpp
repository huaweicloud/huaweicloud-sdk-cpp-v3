

#include "huaweicloud/dbss/v1/model/SwitchAuditDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAuditDatabaseResponse::SwitchAuditDatabaseResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SwitchAuditDatabaseResponse::~SwitchAuditDatabaseResponse() = default;

void SwitchAuditDatabaseResponse::validate()
{
}

web::json::value SwitchAuditDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SwitchAuditDatabaseResponse::fromJson(const web::json::value& val)
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


std::string SwitchAuditDatabaseResponse::getResult() const
{
    return result_;
}

void SwitchAuditDatabaseResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SwitchAuditDatabaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SwitchAuditDatabaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


