

#include "huaweicloud/gaussdbfornosql/v3/model/ListConfigurationsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListConfigurationsResult::ListConfigurationsResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreVersionName_ = "";
    datastoreVersionNameIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    userDefined_ = false;
    userDefinedIsSet_ = false;
}

ListConfigurationsResult::~ListConfigurationsResult() = default;

void ListConfigurationsResult::validate()
{
}

web::json::value ListConfigurationsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(datastoreVersionNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_version_name")] = ModelBase::toJson(datastoreVersionName_);
    }
    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(userDefinedIsSet_) {
        val[utility::conversions::to_string_t("user_defined")] = ModelBase::toJson(userDefined_);
    }

    return val;
}
bool ListConfigurationsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datastore_version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_defined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_defined"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefined(refVal);
        }
    }
    return ok;
}


std::string ListConfigurationsResult::getId() const
{
    return id_;
}

void ListConfigurationsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListConfigurationsResult::idIsSet() const
{
    return idIsSet_;
}

void ListConfigurationsResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListConfigurationsResult::getName() const
{
    return name_;
}

void ListConfigurationsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListConfigurationsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListConfigurationsResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListConfigurationsResult::getDescription() const
{
    return description_;
}

void ListConfigurationsResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListConfigurationsResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListConfigurationsResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListConfigurationsResult::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void ListConfigurationsResult::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool ListConfigurationsResult::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void ListConfigurationsResult::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string ListConfigurationsResult::getDatastoreName() const
{
    return datastoreName_;
}

void ListConfigurationsResult::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ListConfigurationsResult::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ListConfigurationsResult::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ListConfigurationsResult::getCreated() const
{
    return created_;
}

void ListConfigurationsResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ListConfigurationsResult::createdIsSet() const
{
    return createdIsSet_;
}

void ListConfigurationsResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ListConfigurationsResult::getUpdated() const
{
    return updated_;
}

void ListConfigurationsResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ListConfigurationsResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ListConfigurationsResult::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ListConfigurationsResult::getMode() const
{
    return mode_;
}

void ListConfigurationsResult::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListConfigurationsResult::modeIsSet() const
{
    return modeIsSet_;
}

void ListConfigurationsResult::unsetmode()
{
    modeIsSet_ = false;
}

bool ListConfigurationsResult::isUserDefined() const
{
    return userDefined_;
}

void ListConfigurationsResult::setUserDefined(bool value)
{
    userDefined_ = value;
    userDefinedIsSet_ = true;
}

bool ListConfigurationsResult::userDefinedIsSet() const
{
    return userDefinedIsSet_;
}

void ListConfigurationsResult::unsetuserDefined()
{
    userDefinedIsSet_ = false;
}

}
}
}
}
}


