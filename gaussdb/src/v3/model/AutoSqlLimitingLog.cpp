

#include "huaweicloud/gaussdb/v3/model/AutoSqlLimitingLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AutoSqlLimitingLog::AutoSqlLimitingLog()
{
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
}

AutoSqlLimitingLog::~AutoSqlLimitingLog() = default;

void AutoSqlLimitingLog::validate()
{
}

web::json::value AutoSqlLimitingLog::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool AutoSqlLimitingLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string AutoSqlLimitingLog::getNodeId() const
{
    return nodeId_;
}

void AutoSqlLimitingLog::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AutoSqlLimitingLog::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AutoSqlLimitingLog::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string AutoSqlLimitingLog::getPattern() const
{
    return pattern_;
}

void AutoSqlLimitingLog::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool AutoSqlLimitingLog::patternIsSet() const
{
    return patternIsSet_;
}

void AutoSqlLimitingLog::unsetpattern()
{
    patternIsSet_ = false;
}

std::string AutoSqlLimitingLog::getSqlType() const
{
    return sqlType_;
}

void AutoSqlLimitingLog::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool AutoSqlLimitingLog::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void AutoSqlLimitingLog::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

int32_t AutoSqlLimitingLog::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void AutoSqlLimitingLog::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool AutoSqlLimitingLog::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void AutoSqlLimitingLog::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int64_t AutoSqlLimitingLog::getCreateAt() const
{
    return createAt_;
}

void AutoSqlLimitingLog::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool AutoSqlLimitingLog::createAtIsSet() const
{
    return createAtIsSet_;
}

void AutoSqlLimitingLog::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t AutoSqlLimitingLog::getExpireAt() const
{
    return expireAt_;
}

void AutoSqlLimitingLog::setExpireAt(int64_t value)
{
    expireAt_ = value;
    expireAtIsSet_ = true;
}

bool AutoSqlLimitingLog::expireAtIsSet() const
{
    return expireAtIsSet_;
}

void AutoSqlLimitingLog::unsetexpireAt()
{
    expireAtIsSet_ = false;
}

}
}
}
}
}


