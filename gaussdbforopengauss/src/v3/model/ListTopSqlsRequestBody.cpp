

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopSqlsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopSqlsRequestBody::ListTopSqlsRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeIdsIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    startTimeUtc_ = "";
    startTimeUtcIsSet_ = false;
    endTimeUtc_ = "";
    endTimeUtcIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    sqlText_ = "";
    sqlTextIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    supportSystem_ = false;
    supportSystemIsSet_ = false;
    multiQueriesIsSet_ = false;
}

ListTopSqlsRequestBody::~ListTopSqlsRequestBody() = default;

void ListTopSqlsRequestBody::validate()
{
}

web::json::value ListTopSqlsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(startTimeUtcIsSet_) {
        val[utility::conversions::to_string_t("start_time_utc")] = ModelBase::toJson(startTimeUtc_);
    }
    if(endTimeUtcIsSet_) {
        val[utility::conversions::to_string_t("end_time_utc")] = ModelBase::toJson(endTimeUtc_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(supportSystemIsSet_) {
        val[utility::conversions::to_string_t("support_system")] = ModelBase::toJson(supportSystem_);
    }
    if(multiQueriesIsSet_) {
        val[utility::conversions::to_string_t("multi_queries")] = ModelBase::toJson(multiQueries_);
    }

    return val;
}
bool ListTopSqlsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time_utc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time_utc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeUtc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_utc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_utc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeUtc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_queries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_queries"));
        if(!fieldValue.is_null())
        {
            std::vector<MultiQueryConditionOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiQueries(refVal);
        }
    }
    return ok;
}


std::string ListTopSqlsRequestBody::getInstanceId() const
{
    return instanceId_;
}

void ListTopSqlsRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTopSqlsRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTopSqlsRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& ListTopSqlsRequestBody::getNodeIds()
{
    return nodeIds_;
}

void ListTopSqlsRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool ListTopSqlsRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void ListTopSqlsRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

int64_t ListTopSqlsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListTopSqlsRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTopSqlsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTopSqlsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListTopSqlsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListTopSqlsRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTopSqlsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTopSqlsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListTopSqlsRequestBody::getStartTimeUtc() const
{
    return startTimeUtc_;
}

void ListTopSqlsRequestBody::setStartTimeUtc(const std::string& value)
{
    startTimeUtc_ = value;
    startTimeUtcIsSet_ = true;
}

bool ListTopSqlsRequestBody::startTimeUtcIsSet() const
{
    return startTimeUtcIsSet_;
}

void ListTopSqlsRequestBody::unsetstartTimeUtc()
{
    startTimeUtcIsSet_ = false;
}

std::string ListTopSqlsRequestBody::getEndTimeUtc() const
{
    return endTimeUtc_;
}

void ListTopSqlsRequestBody::setEndTimeUtc(const std::string& value)
{
    endTimeUtc_ = value;
    endTimeUtcIsSet_ = true;
}

bool ListTopSqlsRequestBody::endTimeUtcIsSet() const
{
    return endTimeUtcIsSet_;
}

void ListTopSqlsRequestBody::unsetendTimeUtc()
{
    endTimeUtcIsSet_ = false;
}

std::string ListTopSqlsRequestBody::getUserName() const
{
    return userName_;
}

void ListTopSqlsRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListTopSqlsRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListTopSqlsRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListTopSqlsRequestBody::getSqlText() const
{
    return sqlText_;
}

void ListTopSqlsRequestBody::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool ListTopSqlsRequestBody::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void ListTopSqlsRequestBody::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string ListTopSqlsRequestBody::getSqlId() const
{
    return sqlId_;
}

void ListTopSqlsRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListTopSqlsRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListTopSqlsRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ListTopSqlsRequestBody::getDbName() const
{
    return dbName_;
}

void ListTopSqlsRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListTopSqlsRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListTopSqlsRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

bool ListTopSqlsRequestBody::isSupportSystem() const
{
    return supportSystem_;
}

void ListTopSqlsRequestBody::setSupportSystem(bool value)
{
    supportSystem_ = value;
    supportSystemIsSet_ = true;
}

bool ListTopSqlsRequestBody::supportSystemIsSet() const
{
    return supportSystemIsSet_;
}

void ListTopSqlsRequestBody::unsetsupportSystem()
{
    supportSystemIsSet_ = false;
}

std::vector<MultiQueryConditionOption>& ListTopSqlsRequestBody::getMultiQueries()
{
    return multiQueries_;
}

void ListTopSqlsRequestBody::setMultiQueries(const std::vector<MultiQueryConditionOption>& value)
{
    multiQueries_ = value;
    multiQueriesIsSet_ = true;
}

bool ListTopSqlsRequestBody::multiQueriesIsSet() const
{
    return multiQueriesIsSet_;
}

void ListTopSqlsRequestBody::unsetmultiQueries()
{
    multiQueriesIsSet_ = false;
}

}
}
}
}
}


