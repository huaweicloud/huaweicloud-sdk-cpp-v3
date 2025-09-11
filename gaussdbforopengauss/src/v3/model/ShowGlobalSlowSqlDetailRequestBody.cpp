

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowGlobalSlowSqlDetailRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowGlobalSlowSqlDetailRequestBody::ShowGlobalSlowSqlDetailRequestBody()
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
    componentType_ = "";
    componentTypeIsSet_ = false;
}

ShowGlobalSlowSqlDetailRequestBody::~ShowGlobalSlowSqlDetailRequestBody() = default;

void ShowGlobalSlowSqlDetailRequestBody::validate()
{
}

web::json::value ShowGlobalSlowSqlDetailRequestBody::toJson() const
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
    if(componentTypeIsSet_) {
        val[utility::conversions::to_string_t("component_type")] = ModelBase::toJson(componentType_);
    }

    return val;
}
bool ShowGlobalSlowSqlDetailRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("component_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentType(refVal);
        }
    }
    return ok;
}


std::string ShowGlobalSlowSqlDetailRequestBody::getInstanceId() const
{
    return instanceId_;
}

void ShowGlobalSlowSqlDetailRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowGlobalSlowSqlDetailRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& ShowGlobalSlowSqlDetailRequestBody::getNodeIds()
{
    return nodeIds_;
}

void ShowGlobalSlowSqlDetailRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void ShowGlobalSlowSqlDetailRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

int64_t ShowGlobalSlowSqlDetailRequestBody::getStartTime() const
{
    return startTime_;
}

void ShowGlobalSlowSqlDetailRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowGlobalSlowSqlDetailRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowGlobalSlowSqlDetailRequestBody::getEndTime() const
{
    return endTime_;
}

void ShowGlobalSlowSqlDetailRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowGlobalSlowSqlDetailRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowGlobalSlowSqlDetailRequestBody::getSqlId() const
{
    return sqlId_;
}

void ShowGlobalSlowSqlDetailRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ShowGlobalSlowSqlDetailRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ShowGlobalSlowSqlDetailRequestBody::getComponentType() const
{
    return componentType_;
}

void ShowGlobalSlowSqlDetailRequestBody::setComponentType(const std::string& value)
{
    componentType_ = value;
    componentTypeIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailRequestBody::componentTypeIsSet() const
{
    return componentTypeIsSet_;
}

void ShowGlobalSlowSqlDetailRequestBody::unsetcomponentType()
{
    componentTypeIsSet_ = false;
}

}
}
}
}
}


