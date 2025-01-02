

#include "huaweicloud/rds/v3/model/DelayRestoreSchema.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DelayRestoreSchema::DelayRestoreSchema()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    tablesIsSet_ = false;
}

DelayRestoreSchema::~DelayRestoreSchema() = default;

void DelayRestoreSchema::validate()
{
}

web::json::value DelayRestoreSchema::toJson() const
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
bool DelayRestoreSchema::fromJson(const web::json::value& val)
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
            std::vector<DelayRestoreTable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string DelayRestoreSchema::getName() const
{
    return name_;
}

void DelayRestoreSchema::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DelayRestoreSchema::nameIsSet() const
{
    return nameIsSet_;
}

void DelayRestoreSchema::unsetname()
{
    nameIsSet_ = false;
}

int32_t DelayRestoreSchema::getTotalTables() const
{
    return totalTables_;
}

void DelayRestoreSchema::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool DelayRestoreSchema::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void DelayRestoreSchema::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<DelayRestoreTable>& DelayRestoreSchema::getTables()
{
    return tables_;
}

void DelayRestoreSchema::setTables(const std::vector<DelayRestoreTable>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool DelayRestoreSchema::tablesIsSet() const
{
    return tablesIsSet_;
}

void DelayRestoreSchema::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


