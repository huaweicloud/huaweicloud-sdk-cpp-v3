

#include "huaweicloud/rds/v3/model/ExecuteOptimizeTableSpaceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExecuteOptimizeTableSpaceRequestBody::ExecuteOptimizeTableSpaceRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

ExecuteOptimizeTableSpaceRequestBody::~ExecuteOptimizeTableSpaceRequestBody() = default;

void ExecuteOptimizeTableSpaceRequestBody::validate()
{
}

web::json::value ExecuteOptimizeTableSpaceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }

    return val;
}
bool ExecuteOptimizeTableSpaceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    return ok;
}


std::string ExecuteOptimizeTableSpaceRequestBody::getTableName() const
{
    return tableName_;
}

void ExecuteOptimizeTableSpaceRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ExecuteOptimizeTableSpaceRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ExecuteOptimizeTableSpaceRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ExecuteOptimizeTableSpaceRequestBody::getDatabaseName() const
{
    return databaseName_;
}

void ExecuteOptimizeTableSpaceRequestBody::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ExecuteOptimizeTableSpaceRequestBody::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ExecuteOptimizeTableSpaceRequestBody::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


