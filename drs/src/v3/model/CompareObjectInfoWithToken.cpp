

#include "huaweicloud/drs/v3/model/CompareObjectInfoWithToken.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareObjectInfoWithToken::CompareObjectInfoWithToken()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableNameWithTokenIsSet_ = false;
}

CompareObjectInfoWithToken::~CompareObjectInfoWithToken() = default;

void CompareObjectInfoWithToken::validate()
{
}

web::json::value CompareObjectInfoWithToken::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(tableNameWithTokenIsSet_) {
        val[utility::conversions::to_string_t("table_name_with_token")] = ModelBase::toJson(tableNameWithToken_);
    }

    return val;
}
bool CompareObjectInfoWithToken::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("table_name_with_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name_with_token"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareTableInfoWithToken> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableNameWithToken(refVal);
        }
    }
    return ok;
}


std::string CompareObjectInfoWithToken::getDbName() const
{
    return dbName_;
}

void CompareObjectInfoWithToken::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CompareObjectInfoWithToken::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CompareObjectInfoWithToken::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<CompareTableInfoWithToken>& CompareObjectInfoWithToken::getTableNameWithToken()
{
    return tableNameWithToken_;
}

void CompareObjectInfoWithToken::setTableNameWithToken(const std::vector<CompareTableInfoWithToken>& value)
{
    tableNameWithToken_ = value;
    tableNameWithTokenIsSet_ = true;
}

bool CompareObjectInfoWithToken::tableNameWithTokenIsSet() const
{
    return tableNameWithTokenIsSet_;
}

void CompareObjectInfoWithToken::unsettableNameWithToken()
{
    tableNameWithTokenIsSet_ = false;
}

}
}
}
}
}


