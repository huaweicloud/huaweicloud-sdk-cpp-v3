

#include "huaweicloud/gaussdbfornosql/v3/model/ListDbCacheMappingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDbCacheMappingsResponse::ListDbCacheMappingsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    dbcacheMappingsIsSet_ = false;
}

ListDbCacheMappingsResponse::~ListDbCacheMappingsResponse() = default;

void ListDbCacheMappingsResponse::validate()
{
}

web::json::value ListDbCacheMappingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(dbcacheMappingsIsSet_) {
        val[utility::conversions::to_string_t("dbcache_mappings")] = ModelBase::toJson(dbcacheMappings_);
    }

    return val;
}
bool ListDbCacheMappingsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dbcache_mappings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbcache_mappings"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDBCacheMappingResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbcacheMappings(refVal);
        }
    }
    return ok;
}


int32_t ListDbCacheMappingsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbCacheMappingsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbCacheMappingsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbCacheMappingsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<QueryDBCacheMappingResponse>& ListDbCacheMappingsResponse::getDbcacheMappings()
{
    return dbcacheMappings_;
}

void ListDbCacheMappingsResponse::setDbcacheMappings(const std::vector<QueryDBCacheMappingResponse>& value)
{
    dbcacheMappings_ = value;
    dbcacheMappingsIsSet_ = true;
}

bool ListDbCacheMappingsResponse::dbcacheMappingsIsSet() const
{
    return dbcacheMappingsIsSet_;
}

void ListDbCacheMappingsResponse::unsetdbcacheMappings()
{
    dbcacheMappingsIsSet_ = false;
}

}
}
}
}
}


