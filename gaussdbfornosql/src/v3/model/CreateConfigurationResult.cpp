

#include "huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateConfigurationResult::CreateConfigurationResult()
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
}

CreateConfigurationResult::~CreateConfigurationResult() = default;

void CreateConfigurationResult::validate()
{
}

web::json::value CreateConfigurationResult::toJson() const
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

    return val;
}

bool CreateConfigurationResult::fromJson(const web::json::value& val)
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
    return ok;
}

std::string CreateConfigurationResult::getId() const
{
    return id_;
}

void CreateConfigurationResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateConfigurationResult::idIsSet() const
{
    return idIsSet_;
}

void CreateConfigurationResult::unsetid()
{
    idIsSet_ = false;
}

std::string CreateConfigurationResult::getName() const
{
    return name_;
}

void CreateConfigurationResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateConfigurationResult::nameIsSet() const
{
    return nameIsSet_;
}

void CreateConfigurationResult::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateConfigurationResult::getDescription() const
{
    return description_;
}

void CreateConfigurationResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateConfigurationResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateConfigurationResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateConfigurationResult::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void CreateConfigurationResult::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool CreateConfigurationResult::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void CreateConfigurationResult::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string CreateConfigurationResult::getDatastoreName() const
{
    return datastoreName_;
}

void CreateConfigurationResult::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool CreateConfigurationResult::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void CreateConfigurationResult::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string CreateConfigurationResult::getCreated() const
{
    return created_;
}

void CreateConfigurationResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool CreateConfigurationResult::createdIsSet() const
{
    return createdIsSet_;
}

void CreateConfigurationResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string CreateConfigurationResult::getUpdated() const
{
    return updated_;
}

void CreateConfigurationResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool CreateConfigurationResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void CreateConfigurationResult::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


