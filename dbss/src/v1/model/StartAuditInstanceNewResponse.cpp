

#include "huaweicloud/dbss/v1/model/StartAuditInstanceNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartAuditInstanceNewResponse::StartAuditInstanceNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StartAuditInstanceNewResponse::~StartAuditInstanceNewResponse() = default;

void StartAuditInstanceNewResponse::validate()
{
}

web::json::value StartAuditInstanceNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StartAuditInstanceNewResponse::fromJson(const web::json::value& val)
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


std::string StartAuditInstanceNewResponse::getResult() const
{
    return result_;
}

void StartAuditInstanceNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StartAuditInstanceNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StartAuditInstanceNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


