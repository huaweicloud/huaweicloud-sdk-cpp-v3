

#include "huaweicloud/rds/v3/model/DelayRestoreDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DelayRestoreDatabase::DelayRestoreDatabase()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
    schemasIsSet_ = false;
}

DelayRestoreDatabase::~DelayRestoreDatabase() = default;

void DelayRestoreDatabase::validate()
{
}

web::json::value DelayRestoreDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }

    return val;
}
bool DelayRestoreDatabase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<DelayRestoreSchema> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
        }
    }
    return ok;
}


std::string DelayRestoreDatabase::getName() const
{
    return name_;
}

void DelayRestoreDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DelayRestoreDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void DelayRestoreDatabase::unsetname()
{
    nameIsSet_ = false;
}

int32_t DelayRestoreDatabase::getTotalTables() const
{
    return totalTables_;
}

void DelayRestoreDatabase::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool DelayRestoreDatabase::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void DelayRestoreDatabase::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

std::vector<DelayRestoreSchema>& DelayRestoreDatabase::getSchemas()
{
    return schemas_;
}

void DelayRestoreDatabase::setSchemas(const std::vector<DelayRestoreSchema>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool DelayRestoreDatabase::schemasIsSet() const
{
    return schemasIsSet_;
}

void DelayRestoreDatabase::unsetschemas()
{
    schemasIsSet_ = false;
}

}
}
}
}
}


