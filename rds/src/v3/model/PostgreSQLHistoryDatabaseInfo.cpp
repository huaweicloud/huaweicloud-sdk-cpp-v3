

#include "huaweicloud/rds/v3/model/PostgreSQLHistoryDatabaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLHistoryDatabaseInfo::PostgreSQLHistoryDatabaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
}

PostgreSQLHistoryDatabaseInfo::~PostgreSQLHistoryDatabaseInfo() = default;

void PostgreSQLHistoryDatabaseInfo::validate()
{
}

web::json::value PostgreSQLHistoryDatabaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }

    return val;
}
bool PostgreSQLHistoryDatabaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_tables"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTables(refVal);
        }
    }
    return ok;
}


std::string PostgreSQLHistoryDatabaseInfo::getName() const
{
    return name_;
}

void PostgreSQLHistoryDatabaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void PostgreSQLHistoryDatabaseInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t PostgreSQLHistoryDatabaseInfo::getTotalTables() const
{
    return totalTables_;
}

void PostgreSQLHistoryDatabaseInfo::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool PostgreSQLHistoryDatabaseInfo::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void PostgreSQLHistoryDatabaseInfo::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

}
}
}
}
}


