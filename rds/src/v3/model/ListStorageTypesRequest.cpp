

#include "huaweicloud/rds/v3/model/ListStorageTypesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListStorageTypesRequest::ListStorageTypesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
}

ListStorageTypesRequest::~ListStorageTypesRequest() = default;

void ListStorageTypesRequest::validate()
{
}

web::json::value ListStorageTypesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }

    return val;
}
bool ListStorageTypesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    return ok;
}


std::string ListStorageTypesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStorageTypesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStorageTypesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStorageTypesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListStorageTypesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListStorageTypesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListStorageTypesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListStorageTypesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListStorageTypesRequest::getVersionName() const
{
    return versionName_;
}

void ListStorageTypesRequest::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool ListStorageTypesRequest::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void ListStorageTypesRequest::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string ListStorageTypesRequest::getHaMode() const
{
    return haMode_;
}

void ListStorageTypesRequest::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ListStorageTypesRequest::haModeIsSet() const
{
    return haModeIsSet_;
}

void ListStorageTypesRequest::unsethaMode()
{
    haModeIsSet_ = false;
}

}
}
}
}
}


