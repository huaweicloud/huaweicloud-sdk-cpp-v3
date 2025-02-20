

#include "huaweicloud/drs/v5/model/ActionParams_repair_info_objects.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ActionParams_repair_info_objects::ActionParams_repair_info_objects()
{
    database_ = "";
    databaseIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    table_ = "";
    tableIsSet_ = false;
}

ActionParams_repair_info_objects::~ActionParams_repair_info_objects() = default;

void ActionParams_repair_info_objects::validate()
{
}

web::json::value ActionParams_repair_info_objects::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }

    return val;
}
bool ActionParams_repair_info_objects::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTable(refVal);
        }
    }
    return ok;
}


std::string ActionParams_repair_info_objects::getDatabase() const
{
    return database_;
}

void ActionParams_repair_info_objects::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ActionParams_repair_info_objects::databaseIsSet() const
{
    return databaseIsSet_;
}

void ActionParams_repair_info_objects::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ActionParams_repair_info_objects::getSchema() const
{
    return schema_;
}

void ActionParams_repair_info_objects::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool ActionParams_repair_info_objects::schemaIsSet() const
{
    return schemaIsSet_;
}

void ActionParams_repair_info_objects::unsetschema()
{
    schemaIsSet_ = false;
}

std::string ActionParams_repair_info_objects::getTable() const
{
    return table_;
}

void ActionParams_repair_info_objects::setTable(const std::string& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool ActionParams_repair_info_objects::tableIsSet() const
{
    return tableIsSet_;
}

void ActionParams_repair_info_objects::unsettable()
{
    tableIsSet_ = false;
}

}
}
}
}
}


