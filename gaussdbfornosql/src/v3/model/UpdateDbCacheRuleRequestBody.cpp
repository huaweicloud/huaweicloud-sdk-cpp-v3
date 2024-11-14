

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateDbCacheRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateDbCacheRuleRequestBody::UpdateDbCacheRuleRequestBody()
{
    dbcacheRuleId_ = "";
    dbcacheRuleIdIsSet_ = false;
    valueColumnsIsSet_ = false;
    ttl_ = "";
    ttlIsSet_ = false;
    valueSeparator_ = "";
    valueSeparatorIsSet_ = false;
}

UpdateDbCacheRuleRequestBody::~UpdateDbCacheRuleRequestBody() = default;

void UpdateDbCacheRuleRequestBody::validate()
{
}

web::json::value UpdateDbCacheRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbcacheRuleIdIsSet_) {
        val[utility::conversions::to_string_t("dbcache_rule_id")] = ModelBase::toJson(dbcacheRuleId_);
    }
    if(valueColumnsIsSet_) {
        val[utility::conversions::to_string_t("value_columns")] = ModelBase::toJson(valueColumns_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(valueSeparatorIsSet_) {
        val[utility::conversions::to_string_t("value_separator")] = ModelBase::toJson(valueSeparator_);
    }

    return val;
}
bool UpdateDbCacheRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dbcache_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbcache_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbcacheRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_columns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueColumns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_separator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_separator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueSeparator(refVal);
        }
    }
    return ok;
}


std::string UpdateDbCacheRuleRequestBody::getDbcacheRuleId() const
{
    return dbcacheRuleId_;
}

void UpdateDbCacheRuleRequestBody::setDbcacheRuleId(const std::string& value)
{
    dbcacheRuleId_ = value;
    dbcacheRuleIdIsSet_ = true;
}

bool UpdateDbCacheRuleRequestBody::dbcacheRuleIdIsSet() const
{
    return dbcacheRuleIdIsSet_;
}

void UpdateDbCacheRuleRequestBody::unsetdbcacheRuleId()
{
    dbcacheRuleIdIsSet_ = false;
}

std::vector<std::string>& UpdateDbCacheRuleRequestBody::getValueColumns()
{
    return valueColumns_;
}

void UpdateDbCacheRuleRequestBody::setValueColumns(const std::vector<std::string>& value)
{
    valueColumns_ = value;
    valueColumnsIsSet_ = true;
}

bool UpdateDbCacheRuleRequestBody::valueColumnsIsSet() const
{
    return valueColumnsIsSet_;
}

void UpdateDbCacheRuleRequestBody::unsetvalueColumns()
{
    valueColumnsIsSet_ = false;
}

std::string UpdateDbCacheRuleRequestBody::getTtl() const
{
    return ttl_;
}

void UpdateDbCacheRuleRequestBody::setTtl(const std::string& value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool UpdateDbCacheRuleRequestBody::ttlIsSet() const
{
    return ttlIsSet_;
}

void UpdateDbCacheRuleRequestBody::unsetttl()
{
    ttlIsSet_ = false;
}

std::string UpdateDbCacheRuleRequestBody::getValueSeparator() const
{
    return valueSeparator_;
}

void UpdateDbCacheRuleRequestBody::setValueSeparator(const std::string& value)
{
    valueSeparator_ = value;
    valueSeparatorIsSet_ = true;
}

bool UpdateDbCacheRuleRequestBody::valueSeparatorIsSet() const
{
    return valueSeparatorIsSet_;
}

void UpdateDbCacheRuleRequestBody::unsetvalueSeparator()
{
    valueSeparatorIsSet_ = false;
}

}
}
}
}
}


