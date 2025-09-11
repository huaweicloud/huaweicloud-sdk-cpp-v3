

#include "huaweicloud/dbss/v1/model/GeneralRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




GeneralRequest::GeneralRequest()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    regenerate_ = 0;
    regenerateIsSet_ = false;
    timeIsSet_ = false;
}

GeneralRequest::~GeneralRequest() = default;

void GeneralRequest::validate()
{
}

web::json::value GeneralRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(regenerateIsSet_) {
        val[utility::conversions::to_string_t("regenerate")] = ModelBase::toJson(regenerate_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool GeneralRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regenerate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regenerate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegenerate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            Duration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::string GeneralRequest::getDbId() const
{
    return dbId_;
}

void GeneralRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool GeneralRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void GeneralRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

int32_t GeneralRequest::getRegenerate() const
{
    return regenerate_;
}

void GeneralRequest::setRegenerate(int32_t value)
{
    regenerate_ = value;
    regenerateIsSet_ = true;
}

bool GeneralRequest::regenerateIsSet() const
{
    return regenerateIsSet_;
}

void GeneralRequest::unsetregenerate()
{
    regenerateIsSet_ = false;
}

Duration GeneralRequest::getTime() const
{
    return time_;
}

void GeneralRequest::setTime(const Duration& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool GeneralRequest::timeIsSet() const
{
    return timeIsSet_;
}

void GeneralRequest::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


