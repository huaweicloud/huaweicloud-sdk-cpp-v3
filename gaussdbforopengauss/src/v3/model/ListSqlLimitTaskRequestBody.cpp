

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlLimitTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlLimitTaskRequestBody::ListSqlLimitTaskRequestBody()
{
    taskScope_ = "";
    taskScopeIsSet_ = false;
    limitType_ = "";
    limitTypeIsSet_ = false;
    limitTypeValue_ = "";
    limitTypeValueIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    nodeIdsIsSet_ = false;
}

ListSqlLimitTaskRequestBody::~ListSqlLimitTaskRequestBody() = default;

void ListSqlLimitTaskRequestBody::validate()
{
}

web::json::value ListSqlLimitTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }

    return val;
}
bool ListSqlLimitTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
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


std::string ListSqlLimitTaskRequestBody::getTaskScope() const
{
    return taskScope_;
}

void ListSqlLimitTaskRequestBody::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void ListSqlLimitTaskRequestBody::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string ListSqlLimitTaskRequestBody::getLimitType() const
{
    return limitType_;
}

void ListSqlLimitTaskRequestBody::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string ListSqlLimitTaskRequestBody::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void ListSqlLimitTaskRequestBody::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string ListSqlLimitTaskRequestBody::getTaskName() const
{
    return taskName_;
}

void ListSqlLimitTaskRequestBody::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ListSqlLimitTaskRequestBody::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ListSqlLimitTaskRequestBody::getRuleName() const
{
    return ruleName_;
}

void ListSqlLimitTaskRequestBody::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t ListSqlLimitTaskRequestBody::getOffset() const
{
    return offset_;
}

void ListSqlLimitTaskRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSqlLimitTaskRequestBody::getLimit() const
{
    return limit_;
}

void ListSqlLimitTaskRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSqlLimitTaskRequestBody::getSqlId() const
{
    return sqlId_;
}

void ListSqlLimitTaskRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::vector<std::string>& ListSqlLimitTaskRequestBody::getNodeIds()
{
    return nodeIds_;
}

void ListSqlLimitTaskRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool ListSqlLimitTaskRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void ListSqlLimitTaskRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

}
}
}
}
}


