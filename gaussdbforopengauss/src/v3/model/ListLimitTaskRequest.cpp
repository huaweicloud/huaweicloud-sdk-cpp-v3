

#include "huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListLimitTaskRequest::ListLimitTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskScope_ = "";
    taskScopeIsSet_ = false;
    limitType_ = "";
    limitTypeIsSet_ = false;
    limitTypeValue_ = "";
    limitTypeValueIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    sqlModel_ = "";
    sqlModelIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLimitTaskRequest::~ListLimitTaskRequest() = default;

void ListLimitTaskRequest::validate()
{
}

web::json::value ListLimitTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(taskScopeIsSet_) {
        val[utility::conversions::to_string_t("task_scope")] = ModelBase::toJson(taskScope_);
    }
    if(limitTypeIsSet_) {
        val[utility::conversions::to_string_t("limit_type")] = ModelBase::toJson(limitType_);
    }
    if(limitTypeValueIsSet_) {
        val[utility::conversions::to_string_t("limit_type_value")] = ModelBase::toJson(limitTypeValue_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(sqlModelIsSet_) {
        val[utility::conversions::to_string_t("sql_model")] = ModelBase::toJson(sqlModel_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
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
bool ListLimitTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_type_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_type_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitTypeValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string ListLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ListLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListLimitTaskRequest::getTaskScope() const
{
    return taskScope_;
}

void ListLimitTaskRequest::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool ListLimitTaskRequest::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void ListLimitTaskRequest::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string ListLimitTaskRequest::getLimitType() const
{
    return limitType_;
}

void ListLimitTaskRequest::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool ListLimitTaskRequest::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void ListLimitTaskRequest::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string ListLimitTaskRequest::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void ListLimitTaskRequest::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool ListLimitTaskRequest::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void ListLimitTaskRequest::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string ListLimitTaskRequest::getTaskName() const
{
    return taskName_;
}

void ListLimitTaskRequest::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ListLimitTaskRequest::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ListLimitTaskRequest::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ListLimitTaskRequest::getSqlModel() const
{
    return sqlModel_;
}

void ListLimitTaskRequest::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool ListLimitTaskRequest::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void ListLimitTaskRequest::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

std::string ListLimitTaskRequest::getRuleName() const
{
    return ruleName_;
}

void ListLimitTaskRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ListLimitTaskRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ListLimitTaskRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ListLimitTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListLimitTaskRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListLimitTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListLimitTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListLimitTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListLimitTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListLimitTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListLimitTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListLimitTaskRequest::getOffset() const
{
    return offset_;
}

void ListLimitTaskRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLimitTaskRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLimitTaskRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLimitTaskRequest::getLimit() const
{
    return limit_;
}

void ListLimitTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLimitTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLimitTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


