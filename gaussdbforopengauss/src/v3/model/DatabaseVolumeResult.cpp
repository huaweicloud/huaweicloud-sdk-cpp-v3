

#include "huaweicloud/gaussdbforopengauss/v3/model/DatabaseVolumeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatabaseVolumeResult::DatabaseVolumeResult()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableSpaceName_ = "";
    tableSpaceNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    databaseSize_ = "";
    databaseSizeIsSet_ = false;
}

DatabaseVolumeResult::~DatabaseVolumeResult() = default;

void DatabaseVolumeResult::validate()
{
}

web::json::value DatabaseVolumeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableSpaceNameIsSet_) {
        val[utility::conversions::to_string_t("table_space_name")] = ModelBase::toJson(tableSpaceName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(databaseSizeIsSet_) {
        val[utility::conversions::to_string_t("database_size")] = ModelBase::toJson(databaseSize_);
    }

    return val;
}
bool DatabaseVolumeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_space_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_space_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableSpaceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseSize(refVal);
        }
    }
    return ok;
}


std::string DatabaseVolumeResult::getDatabaseName() const
{
    return databaseName_;
}

void DatabaseVolumeResult::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool DatabaseVolumeResult::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void DatabaseVolumeResult::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string DatabaseVolumeResult::getTableSpaceName() const
{
    return tableSpaceName_;
}

void DatabaseVolumeResult::setTableSpaceName(const std::string& value)
{
    tableSpaceName_ = value;
    tableSpaceNameIsSet_ = true;
}

bool DatabaseVolumeResult::tableSpaceNameIsSet() const
{
    return tableSpaceNameIsSet_;
}

void DatabaseVolumeResult::unsettableSpaceName()
{
    tableSpaceNameIsSet_ = false;
}

std::string DatabaseVolumeResult::getUserName() const
{
    return userName_;
}

void DatabaseVolumeResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DatabaseVolumeResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void DatabaseVolumeResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DatabaseVolumeResult::getDatabaseSize() const
{
    return databaseSize_;
}

void DatabaseVolumeResult::setDatabaseSize(const std::string& value)
{
    databaseSize_ = value;
    databaseSizeIsSet_ = true;
}

bool DatabaseVolumeResult::databaseSizeIsSet() const
{
    return databaseSizeIsSet_;
}

void DatabaseVolumeResult::unsetdatabaseSize()
{
    databaseSizeIsSet_ = false;
}

}
}
}
}
}


