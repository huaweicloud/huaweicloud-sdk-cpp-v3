

#include "huaweicloud/gaussdb/v3/model/ShowRestoreTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowRestoreTablesResponse::ShowRestoreTablesResponse()
{
    totalDatabases_ = 0;
    totalDatabasesIsSet_ = false;
    databasesIsSet_ = false;
}

ShowRestoreTablesResponse::~ShowRestoreTablesResponse() = default;

void ShowRestoreTablesResponse::validate()
{
}

web::json::value ShowRestoreTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalDatabasesIsSet_) {
        val[utility::conversions::to_string_t("total_databases")] = ModelBase::toJson(totalDatabases_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool ShowRestoreTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_databases"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabaseInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


int32_t ShowRestoreTablesResponse::getTotalDatabases() const
{
    return totalDatabases_;
}

void ShowRestoreTablesResponse::setTotalDatabases(int32_t value)
{
    totalDatabases_ = value;
    totalDatabasesIsSet_ = true;
}

bool ShowRestoreTablesResponse::totalDatabasesIsSet() const
{
    return totalDatabasesIsSet_;
}

void ShowRestoreTablesResponse::unsettotalDatabases()
{
    totalDatabasesIsSet_ = false;
}

std::vector<RestoreDatabaseInfos>& ShowRestoreTablesResponse::getDatabases()
{
    return databases_;
}

void ShowRestoreTablesResponse::setDatabases(const std::vector<RestoreDatabaseInfos>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ShowRestoreTablesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ShowRestoreTablesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


