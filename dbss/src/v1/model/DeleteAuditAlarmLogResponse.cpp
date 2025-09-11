

#include "huaweicloud/dbss/v1/model/DeleteAuditAlarmLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditAlarmLogResponse::DeleteAuditAlarmLogResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteAuditAlarmLogResponse::~DeleteAuditAlarmLogResponse() = default;

void DeleteAuditAlarmLogResponse::validate()
{
}

web::json::value DeleteAuditAlarmLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteAuditAlarmLogResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditAlarmLogResponse::getResult() const
{
    return result_;
}

void DeleteAuditAlarmLogResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAuditAlarmLogResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAuditAlarmLogResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


