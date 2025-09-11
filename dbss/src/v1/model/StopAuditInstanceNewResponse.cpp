

#include "huaweicloud/dbss/v1/model/StopAuditInstanceNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopAuditInstanceNewResponse::StopAuditInstanceNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StopAuditInstanceNewResponse::~StopAuditInstanceNewResponse() = default;

void StopAuditInstanceNewResponse::validate()
{
}

web::json::value StopAuditInstanceNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StopAuditInstanceNewResponse::fromJson(const web::json::value& val)
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


std::string StopAuditInstanceNewResponse::getResult() const
{
    return result_;
}

void StopAuditInstanceNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopAuditInstanceNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopAuditInstanceNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


