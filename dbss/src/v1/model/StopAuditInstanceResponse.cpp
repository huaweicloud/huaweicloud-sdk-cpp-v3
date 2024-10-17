

#include "huaweicloud/dbss/v1/model/StopAuditInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopAuditInstanceResponse::StopAuditInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StopAuditInstanceResponse::~StopAuditInstanceResponse() = default;

void StopAuditInstanceResponse::validate()
{
}

web::json::value StopAuditInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StopAuditInstanceResponse::fromJson(const web::json::value& val)
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


std::string StopAuditInstanceResponse::getResult() const
{
    return result_;
}

void StopAuditInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopAuditInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopAuditInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


