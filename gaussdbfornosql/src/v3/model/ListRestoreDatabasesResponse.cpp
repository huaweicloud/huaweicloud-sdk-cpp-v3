

#include "huaweicloud/gaussdbfornosql/v3/model/ListRestoreDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRestoreDatabasesResponse::ListRestoreDatabasesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    databaseNamesIsSet_ = false;
}

ListRestoreDatabasesResponse::~ListRestoreDatabasesResponse() = default;

void ListRestoreDatabasesResponse::validate()
{
}

web::json::value ListRestoreDatabasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(databaseNamesIsSet_) {
        val[utility::conversions::to_string_t("database_names")] = ModelBase::toJson(databaseNames_);
    }

    return val;
}
bool ListRestoreDatabasesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseNames(refVal);
        }
    }
    return ok;
}


int32_t ListRestoreDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRestoreDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRestoreDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRestoreDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<std::string>& ListRestoreDatabasesResponse::getDatabaseNames()
{
    return databaseNames_;
}

void ListRestoreDatabasesResponse::setDatabaseNames(const std::vector<std::string>& value)
{
    databaseNames_ = value;
    databaseNamesIsSet_ = true;
}

bool ListRestoreDatabasesResponse::databaseNamesIsSet() const
{
    return databaseNamesIsSet_;
}

void ListRestoreDatabasesResponse::unsetdatabaseNames()
{
    databaseNamesIsSet_ = false;
}

}
}
}
}
}


