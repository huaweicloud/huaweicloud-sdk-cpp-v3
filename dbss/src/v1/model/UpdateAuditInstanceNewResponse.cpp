

#include "huaweicloud/dbss/v1/model/UpdateAuditInstanceNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditInstanceNewResponse::UpdateAuditInstanceNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateAuditInstanceNewResponse::~UpdateAuditInstanceNewResponse() = default;

void UpdateAuditInstanceNewResponse::validate()
{
}

web::json::value UpdateAuditInstanceNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateAuditInstanceNewResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditInstanceNewResponse::getResult() const
{
    return result_;
}

void UpdateAuditInstanceNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAuditInstanceNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAuditInstanceNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


