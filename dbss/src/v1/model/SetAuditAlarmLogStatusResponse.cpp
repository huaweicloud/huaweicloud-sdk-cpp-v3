

#include "huaweicloud/dbss/v1/model/SetAuditAlarmLogStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditAlarmLogStatusResponse::SetAuditAlarmLogStatusResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SetAuditAlarmLogStatusResponse::~SetAuditAlarmLogStatusResponse() = default;

void SetAuditAlarmLogStatusResponse::validate()
{
}

web::json::value SetAuditAlarmLogStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SetAuditAlarmLogStatusResponse::fromJson(const web::json::value& val)
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


std::string SetAuditAlarmLogStatusResponse::getResult() const
{
    return result_;
}

void SetAuditAlarmLogStatusResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetAuditAlarmLogStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetAuditAlarmLogStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


