

#include "huaweicloud/rds/v3/model/ShowAutoCesAlarmResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAutoCesAlarmResponse::ShowAutoCesAlarmResponse()
{
    entitiesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ShowAutoCesAlarmResponse::~ShowAutoCesAlarmResponse() = default;

void ShowAutoCesAlarmResponse::validate()
{
}

web::json::value ShowAutoCesAlarmResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowAutoCesAlarmResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoCesAlarmInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<AutoCesAlarmInfo>& ShowAutoCesAlarmResponse::getEntities()
{
    return entities_;
}

void ShowAutoCesAlarmResponse::setEntities(const std::vector<AutoCesAlarmInfo>& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool ShowAutoCesAlarmResponse::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void ShowAutoCesAlarmResponse::unsetentities()
{
    entitiesIsSet_ = false;
}

int32_t ShowAutoCesAlarmResponse::getCount() const
{
    return count_;
}

void ShowAutoCesAlarmResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowAutoCesAlarmResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowAutoCesAlarmResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


