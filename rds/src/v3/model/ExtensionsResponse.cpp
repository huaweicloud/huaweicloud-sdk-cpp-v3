

#include "huaweicloud/rds/v3/model/ExtensionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExtensionsResponse::ExtensionsResponse()
{
    name_ = "";
    nameIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    sharedPreloadLibraries_ = "";
    sharedPreloadLibrariesIsSet_ = false;
    created_ = false;
    createdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ExtensionsResponse::~ExtensionsResponse() = default;

void ExtensionsResponse::validate()
{
}

web::json::value ExtensionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(sharedPreloadLibrariesIsSet_) {
        val[utility::conversions::to_string_t("shared_preload_libraries")] = ModelBase::toJson(sharedPreloadLibraries_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ExtensionsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared_preload_libraries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_preload_libraries"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedPreloadLibraries(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}

std::string ExtensionsResponse::getName() const
{
    return name_;
}

void ExtensionsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExtensionsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ExtensionsResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ExtensionsResponse::getDatabaseName() const
{
    return databaseName_;
}

void ExtensionsResponse::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ExtensionsResponse::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ExtensionsResponse::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ExtensionsResponse::getVersion() const
{
    return version_;
}

void ExtensionsResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ExtensionsResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ExtensionsResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ExtensionsResponse::getSharedPreloadLibraries() const
{
    return sharedPreloadLibraries_;
}

void ExtensionsResponse::setSharedPreloadLibraries(const std::string& value)
{
    sharedPreloadLibraries_ = value;
    sharedPreloadLibrariesIsSet_ = true;
}

bool ExtensionsResponse::sharedPreloadLibrariesIsSet() const
{
    return sharedPreloadLibrariesIsSet_;
}

void ExtensionsResponse::unsetsharedPreloadLibraries()
{
    sharedPreloadLibrariesIsSet_ = false;
}

bool ExtensionsResponse::isCreated() const
{
    return created_;
}

void ExtensionsResponse::setCreated(bool value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ExtensionsResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ExtensionsResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ExtensionsResponse::getDescription() const
{
    return description_;
}

void ExtensionsResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExtensionsResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExtensionsResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


