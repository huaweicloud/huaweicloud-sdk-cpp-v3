

#include "huaweicloud/gaussdb/v3/model/HistoricalSqlFilterRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HistoricalSqlFilterRule::HistoricalSqlFilterRule()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    pattern_ = "";
    patternIsSet_ = false;
    sqlType_ = "";
    sqlTypeIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    expireAt_ = 0L;
    expireAtIsSet_ = false;
    deleteAt_ = 0L;
    deleteAtIsSet_ = false;
}

HistoricalSqlFilterRule::~HistoricalSqlFilterRule() = default;

void HistoricalSqlFilterRule::validate()
{
}

web::json::value HistoricalSqlFilterRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(sqlTypeIsSet_) {
        val[utility::conversions::to_string_t("sql_type")] = ModelBase::toJson(sqlType_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(expireAtIsSet_) {
        val[utility::conversions::to_string_t("expire_at")] = ModelBase::toJson(expireAt_);
    }
    if(deleteAtIsSet_) {
        val[utility::conversions::to_string_t("delete_at")] = ModelBase::toJson(deleteAt_);
    }

    return val;
}
bool HistoricalSqlFilterRule::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteAt(refVal);
        }
    }
    return ok;
}


std::string HistoricalSqlFilterRule::getInstanceId() const
{
    return instanceId_;
}

void HistoricalSqlFilterRule::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool HistoricalSqlFilterRule::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void HistoricalSqlFilterRule::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string HistoricalSqlFilterRule::getNodeId() const
{
    return nodeId_;
}

void HistoricalSqlFilterRule::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool HistoricalSqlFilterRule::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void HistoricalSqlFilterRule::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string HistoricalSqlFilterRule::getPattern() const
{
    return pattern_;
}

void HistoricalSqlFilterRule::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool HistoricalSqlFilterRule::patternIsSet() const
{
    return patternIsSet_;
}

void HistoricalSqlFilterRule::unsetpattern()
{
    patternIsSet_ = false;
}

std::string HistoricalSqlFilterRule::getSqlType() const
{
    return sqlType_;
}

void HistoricalSqlFilterRule::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool HistoricalSqlFilterRule::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void HistoricalSqlFilterRule::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

int32_t HistoricalSqlFilterRule::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void HistoricalSqlFilterRule::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool HistoricalSqlFilterRule::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void HistoricalSqlFilterRule::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int64_t HistoricalSqlFilterRule::getCreateAt() const
{
    return createAt_;
}

void HistoricalSqlFilterRule::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool HistoricalSqlFilterRule::createAtIsSet() const
{
    return createAtIsSet_;
}

void HistoricalSqlFilterRule::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t HistoricalSqlFilterRule::getExpireAt() const
{
    return expireAt_;
}

void HistoricalSqlFilterRule::setExpireAt(int64_t value)
{
    expireAt_ = value;
    expireAtIsSet_ = true;
}

bool HistoricalSqlFilterRule::expireAtIsSet() const
{
    return expireAtIsSet_;
}

void HistoricalSqlFilterRule::unsetexpireAt()
{
    expireAtIsSet_ = false;
}

int64_t HistoricalSqlFilterRule::getDeleteAt() const
{
    return deleteAt_;
}

void HistoricalSqlFilterRule::setDeleteAt(int64_t value)
{
    deleteAt_ = value;
    deleteAtIsSet_ = true;
}

bool HistoricalSqlFilterRule::deleteAtIsSet() const
{
    return deleteAtIsSet_;
}

void HistoricalSqlFilterRule::unsetdeleteAt()
{
    deleteAtIsSet_ = false;
}

}
}
}
}
}


