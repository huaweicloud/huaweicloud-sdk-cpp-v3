

#include "huaweicloud/dbss/v1/model/SqlSessionStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SqlSessionStatisticsRequest::SqlSessionStatisticsRequest()
{
    dbIdIsSet_ = false;
    timeIsSet_ = false;
}

SqlSessionStatisticsRequest::~SqlSessionStatisticsRequest() = default;

void SqlSessionStatisticsRequest::validate()
{
}

web::json::value SqlSessionStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool SqlSessionStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
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


std::vector<std::string>& SqlSessionStatisticsRequest::getDbId()
{
    return dbId_;
}

void SqlSessionStatisticsRequest::setDbId(const std::vector<std::string>& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool SqlSessionStatisticsRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void SqlSessionStatisticsRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

Duration SqlSessionStatisticsRequest::getTime() const
{
    return time_;
}

void SqlSessionStatisticsRequest::setTime(const Duration& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool SqlSessionStatisticsRequest::timeIsSet() const
{
    return timeIsSet_;
}

void SqlSessionStatisticsRequest::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


