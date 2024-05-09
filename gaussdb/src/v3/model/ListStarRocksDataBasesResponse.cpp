

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataBasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataBasesResponse::ListStarRocksDataBasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    timestamp_ = 0;
    timestampIsSet_ = false;
}

ListStarRocksDataBasesResponse::~ListStarRocksDataBasesResponse() = default;

void ListStarRocksDataBasesResponse::validate()
{
}

web::json::value ListStarRocksDataBasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }

    return val;
}
bool ListStarRocksDataBasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListStarRocksDataBasesResponse::getDatabases()
{
    return databases_;
}

void ListStarRocksDataBasesResponse::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListStarRocksDataBasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListStarRocksDataBasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListStarRocksDataBasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListStarRocksDataBasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListStarRocksDataBasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListStarRocksDataBasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListStarRocksDataBasesResponse::getTimestamp() const
{
    return timestamp_;
}

void ListStarRocksDataBasesResponse::setTimestamp(int32_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool ListStarRocksDataBasesResponse::timestampIsSet() const
{
    return timestampIsSet_;
}

void ListStarRocksDataBasesResponse::unsettimestamp()
{
    timestampIsSet_ = false;
}

}
}
}
}
}


