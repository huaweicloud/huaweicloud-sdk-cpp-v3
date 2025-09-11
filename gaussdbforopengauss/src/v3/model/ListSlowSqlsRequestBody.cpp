

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSlowSqlsRequestBody::ListSlowSqlsRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeIdsIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    multiQueriesIsSet_ = false;
}

ListSlowSqlsRequestBody::~ListSlowSqlsRequestBody() = default;

void ListSlowSqlsRequestBody::validate()
{
}

web::json::value ListSlowSqlsRequestBody::toJson() const
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
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(multiQueriesIsSet_) {
        val[utility::conversions::to_string_t("multi_queries")] = ModelBase::toJson(multiQueries_);
    }

    return val;
}
bool ListSlowSqlsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
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


std::string ListSlowSqlsRequestBody::getInstanceId() const
{
    return instanceId_;
}

void ListSlowSqlsRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowSqlsRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowSqlsRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& ListSlowSqlsRequestBody::getNodeIds()
{
    return nodeIds_;
}

void ListSlowSqlsRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool ListSlowSqlsRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void ListSlowSqlsRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

int64_t ListSlowSqlsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListSlowSqlsRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSlowSqlsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSlowSqlsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListSlowSqlsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListSlowSqlsRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSlowSqlsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSlowSqlsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListSlowSqlsRequestBody::getSqlId() const
{
    return sqlId_;
}

void ListSlowSqlsRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListSlowSqlsRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListSlowSqlsRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

int32_t ListSlowSqlsRequestBody::getThreshold() const
{
    return threshold_;
}

void ListSlowSqlsRequestBody::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool ListSlowSqlsRequestBody::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void ListSlowSqlsRequestBody::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::vector<MultiQueryConditionOption>& ListSlowSqlsRequestBody::getMultiQueries()
{
    return multiQueries_;
}

void ListSlowSqlsRequestBody::setMultiQueries(const std::vector<MultiQueryConditionOption>& value)
{
    multiQueries_ = value;
    multiQueriesIsSet_ = true;
}

bool ListSlowSqlsRequestBody::multiQueriesIsSet() const
{
    return multiQueriesIsSet_;
}

void ListSlowSqlsRequestBody::unsetmultiQueries()
{
    multiQueriesIsSet_ = false;
}

}
}
}
}
}


