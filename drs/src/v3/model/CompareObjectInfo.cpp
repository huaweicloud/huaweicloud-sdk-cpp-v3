

#include "huaweicloud/drs/v3/model/CompareObjectInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareObjectInfo::CompareObjectInfo()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableNameIsSet_ = false;
}

CompareObjectInfo::~CompareObjectInfo() = default;

void CompareObjectInfo::validate()
{
}

web::json::value CompareObjectInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}

bool CompareObjectInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    return ok;
}

std::string CompareObjectInfo::getDbName() const
{
    return dbName_;
}

void CompareObjectInfo::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CompareObjectInfo::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CompareObjectInfo::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<std::string>& CompareObjectInfo::getTableName()
{
    return tableName_;
}

void CompareObjectInfo::setTableName(const std::vector<std::string>& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool CompareObjectInfo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void CompareObjectInfo::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


