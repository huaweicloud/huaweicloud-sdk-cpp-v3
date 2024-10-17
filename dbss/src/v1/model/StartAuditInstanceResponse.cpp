

#include "huaweicloud/dbss/v1/model/StartAuditInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartAuditInstanceResponse::StartAuditInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StartAuditInstanceResponse::~StartAuditInstanceResponse() = default;

void StartAuditInstanceResponse::validate()
{
}

web::json::value StartAuditInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StartAuditInstanceResponse::fromJson(const web::json::value& val)
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


std::string StartAuditInstanceResponse::getResult() const
{
    return result_;
}

void StartAuditInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StartAuditInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StartAuditInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


