

#include "huaweicloud/dbss/v1/model/MarkAlarmLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




MarkAlarmLog::MarkAlarmLog()
{
    idsIsSet_ = false;
}

MarkAlarmLog::~MarkAlarmLog() = default;

void MarkAlarmLog::validate()
{
}

web::json::value MarkAlarmLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool MarkAlarmLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& MarkAlarmLog::getIds()
{
    return ids_;
}

void MarkAlarmLog::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool MarkAlarmLog::idsIsSet() const
{
    return idsIsSet_;
}

void MarkAlarmLog::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


