

#include "huaweicloud/gaussdbfornosql/v3/model/ListDbCacheRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDbCacheRulesResponse::ListDbCacheRulesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    dbcacheMappingId_ = "";
    dbcacheMappingIdIsSet_ = false;
    rulesIsSet_ = false;
}

ListDbCacheRulesResponse::~ListDbCacheRulesResponse() = default;

void ListDbCacheRulesResponse::validate()
{
}

web::json::value ListDbCacheRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(dbcacheMappingIdIsSet_) {
        val[utility::conversions::to_string_t("dbcache_mapping_id")] = ModelBase::toJson(dbcacheMappingId_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool ListDbCacheRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dbcache_mapping_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbcache_mapping_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbcacheMappingId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDBCacheRuleResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


int32_t ListDbCacheRulesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbCacheRulesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbCacheRulesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbCacheRulesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ListDbCacheRulesResponse::getDbcacheMappingId() const
{
    return dbcacheMappingId_;
}

void ListDbCacheRulesResponse::setDbcacheMappingId(const std::string& value)
{
    dbcacheMappingId_ = value;
    dbcacheMappingIdIsSet_ = true;
}

bool ListDbCacheRulesResponse::dbcacheMappingIdIsSet() const
{
    return dbcacheMappingIdIsSet_;
}

void ListDbCacheRulesResponse::unsetdbcacheMappingId()
{
    dbcacheMappingIdIsSet_ = false;
}

std::vector<QueryDBCacheRuleResponse>& ListDbCacheRulesResponse::getRules()
{
    return rules_;
}

void ListDbCacheRulesResponse::setRules(const std::vector<QueryDBCacheRuleResponse>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListDbCacheRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListDbCacheRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


