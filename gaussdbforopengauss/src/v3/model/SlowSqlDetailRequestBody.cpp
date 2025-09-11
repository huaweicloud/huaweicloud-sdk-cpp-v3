

#include "huaweicloud/gaussdbforopengauss/v3/model/SlowSqlDetailRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SlowSqlDetailRequestBody::SlowSqlDetailRequestBody()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    multiQueriesIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    nodeIdsIsSet_ = false;
}

SlowSqlDetailRequestBody::~SlowSqlDetailRequestBody() = default;

void SlowSqlDetailRequestBody::validate()
{
}

web::json::value SlowSqlDetailRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(multiQueriesIsSet_) {
        val[utility::conversions::to_string_t("multi_queries")] = ModelBase::toJson(multiQueries_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }

    return val;
}
bool SlowSqlDetailRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
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
    return ok;
}


int64_t SlowSqlDetailRequestBody::getStartTime() const
{
    return startTime_;
}

void SlowSqlDetailRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SlowSqlDetailRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SlowSqlDetailRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t SlowSqlDetailRequestBody::getEndTime() const
{
    return endTime_;
}

void SlowSqlDetailRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SlowSqlDetailRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SlowSqlDetailRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SlowSqlDetailRequestBody::getInstanceId() const
{
    return instanceId_;
}

void SlowSqlDetailRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SlowSqlDetailRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SlowSqlDetailRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<MultiQueryConditionOption>& SlowSqlDetailRequestBody::getMultiQueries()
{
    return multiQueries_;
}

void SlowSqlDetailRequestBody::setMultiQueries(const std::vector<MultiQueryConditionOption>& value)
{
    multiQueries_ = value;
    multiQueriesIsSet_ = true;
}

bool SlowSqlDetailRequestBody::multiQueriesIsSet() const
{
    return multiQueriesIsSet_;
}

void SlowSqlDetailRequestBody::unsetmultiQueries()
{
    multiQueriesIsSet_ = false;
}

std::string SlowSqlDetailRequestBody::getSqlId() const
{
    return sqlId_;
}

void SlowSqlDetailRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool SlowSqlDetailRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void SlowSqlDetailRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::vector<std::string>& SlowSqlDetailRequestBody::getNodeIds()
{
    return nodeIds_;
}

void SlowSqlDetailRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool SlowSqlDetailRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void SlowSqlDetailRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

}
}
}
}
}


