

#include "huaweicloud/gaussdb/v3/model/RestoreDatabaseInfos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestoreDatabaseInfos::RestoreDatabaseInfos()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    tablesIsSet_ = false;
}

RestoreDatabaseInfos::~RestoreDatabaseInfos() = default;

void RestoreDatabaseInfos::validate()
{
}

web::json::value RestoreDatabaseInfos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool RestoreDatabaseInfos::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabaseTableInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string RestoreDatabaseInfos::getName() const
{
    return name_;
}

void RestoreDatabaseInfos::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RestoreDatabaseInfos::nameIsSet() const
{
    return nameIsSet_;
}

void RestoreDatabaseInfos::unsetname()
{
    nameIsSet_ = false;
}

int32_t RestoreDatabaseInfos::getTotalTables() const
{
    return totalTables_;
}

void RestoreDatabaseInfos::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool RestoreDatabaseInfos::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void RestoreDatabaseInfos::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<RestoreDatabaseTableInfo>& RestoreDatabaseInfos::getTables()
{
    return tables_;
}

void RestoreDatabaseInfos::setTables(const std::vector<RestoreDatabaseTableInfo>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool RestoreDatabaseInfos::tablesIsSet() const
{
    return tablesIsSet_;
}

void RestoreDatabaseInfos::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


