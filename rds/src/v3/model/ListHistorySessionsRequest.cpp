

#include "huaweicloud/rds/v3/model/ListHistorySessionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistorySessionsRequest::ListHistorySessionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    pid_ = "";
    pidIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListHistorySessionsRequest::~ListHistorySessionsRequest() = default;

void ListHistorySessionsRequest::validate()
{
}

web::json::value ListHistorySessionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListHistorySessionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListHistorySessionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListHistorySessionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListHistorySessionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListHistorySessionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListHistorySessionsRequest::getPid() const
{
    return pid_;
}

void ListHistorySessionsRequest::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool ListHistorySessionsRequest::pidIsSet() const
{
    return pidIsSet_;
}

void ListHistorySessionsRequest::unsetpid()
{
    pidIsSet_ = false;
}

std::string ListHistorySessionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHistorySessionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHistorySessionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHistorySessionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListHistorySessionsRequest::getUserName() const
{
    return userName_;
}

void ListHistorySessionsRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListHistorySessionsRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListHistorySessionsRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListHistorySessionsRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListHistorySessionsRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListHistorySessionsRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListHistorySessionsRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

int64_t ListHistorySessionsRequest::getStartTime() const
{
    return startTime_;
}

void ListHistorySessionsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListHistorySessionsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListHistorySessionsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListHistorySessionsRequest::getEndTime() const
{
    return endTime_;
}

void ListHistorySessionsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListHistorySessionsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListHistorySessionsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListHistorySessionsRequest::getOffset() const
{
    return offset_;
}

void ListHistorySessionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHistorySessionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHistorySessionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHistorySessionsRequest::getLimit() const
{
    return limit_;
}

void ListHistorySessionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHistorySessionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHistorySessionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


