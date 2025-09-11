

#include "huaweicloud/dbss/v1/model/BatchSetAuditAlarmLogStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchSetAuditAlarmLogStatusResponse::BatchSetAuditAlarmLogStatusResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

BatchSetAuditAlarmLogStatusResponse::~BatchSetAuditAlarmLogStatusResponse() = default;

void BatchSetAuditAlarmLogStatusResponse::validate()
{
}

web::json::value BatchSetAuditAlarmLogStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool BatchSetAuditAlarmLogStatusResponse::fromJson(const web::json::value& val)
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


std::string BatchSetAuditAlarmLogStatusResponse::getResult() const
{
    return result_;
}

void BatchSetAuditAlarmLogStatusResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchSetAuditAlarmLogStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchSetAuditAlarmLogStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


