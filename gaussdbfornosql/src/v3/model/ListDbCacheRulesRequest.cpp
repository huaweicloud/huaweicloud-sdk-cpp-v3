

#include "huaweicloud/gaussdbfornosql/v3/model/ListDbCacheRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDbCacheRulesRequest::ListDbCacheRulesRequest()
{
    dbcacheMappingId_ = "";
    dbcacheMappingIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    sourceDbSchema_ = "";
    sourceDbSchemaIsSet_ = false;
    sourceDbTable_ = "";
    sourceDbTableIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListDbCacheRulesRequest::~ListDbCacheRulesRequest() = default;

void ListDbCacheRulesRequest::validate()
{
}

web::json::value ListDbCacheRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbcacheMappingIdIsSet_) {
        val[utility::conversions::to_string_t("dbcache_mapping_id")] = ModelBase::toJson(dbcacheMappingId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(sourceDbSchemaIsSet_) {
        val[utility::conversions::to_string_t("source_db_schema")] = ModelBase::toJson(sourceDbSchema_);
    }
    if(sourceDbTableIsSet_) {
        val[utility::conversions::to_string_t("source_db_table")] = ModelBase::toJson(sourceDbTable_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDbCacheRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dbcache_mapping_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbcache_mapping_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbcacheMappingId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_db_schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListDbCacheRulesRequest::getDbcacheMappingId() const
{
    return dbcacheMappingId_;
}

void ListDbCacheRulesRequest::setDbcacheMappingId(const std::string& value)
{
    dbcacheMappingId_ = value;
    dbcacheMappingIdIsSet_ = true;
}

bool ListDbCacheRulesRequest::dbcacheMappingIdIsSet() const
{
    return dbcacheMappingIdIsSet_;
}

void ListDbCacheRulesRequest::unsetdbcacheMappingId()
{
    dbcacheMappingIdIsSet_ = false;
}

std::string ListDbCacheRulesRequest::getRuleId() const
{
    return ruleId_;
}

void ListDbCacheRulesRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ListDbCacheRulesRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ListDbCacheRulesRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string ListDbCacheRulesRequest::getRuleName() const
{
    return ruleName_;
}

void ListDbCacheRulesRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ListDbCacheRulesRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ListDbCacheRulesRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ListDbCacheRulesRequest::getSourceDbSchema() const
{
    return sourceDbSchema_;
}

void ListDbCacheRulesRequest::setSourceDbSchema(const std::string& value)
{
    sourceDbSchema_ = value;
    sourceDbSchemaIsSet_ = true;
}

bool ListDbCacheRulesRequest::sourceDbSchemaIsSet() const
{
    return sourceDbSchemaIsSet_;
}

void ListDbCacheRulesRequest::unsetsourceDbSchema()
{
    sourceDbSchemaIsSet_ = false;
}

std::string ListDbCacheRulesRequest::getSourceDbTable() const
{
    return sourceDbTable_;
}

void ListDbCacheRulesRequest::setSourceDbTable(const std::string& value)
{
    sourceDbTable_ = value;
    sourceDbTableIsSet_ = true;
}

bool ListDbCacheRulesRequest::sourceDbTableIsSet() const
{
    return sourceDbTableIsSet_;
}

void ListDbCacheRulesRequest::unsetsourceDbTable()
{
    sourceDbTableIsSet_ = false;
}

std::string ListDbCacheRulesRequest::getOffset() const
{
    return offset_;
}

void ListDbCacheRulesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbCacheRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbCacheRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDbCacheRulesRequest::getLimit() const
{
    return limit_;
}

void ListDbCacheRulesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbCacheRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbCacheRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


