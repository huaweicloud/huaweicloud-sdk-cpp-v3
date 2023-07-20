

#include "huaweicloud/gaussdb/v3/model/ConfigurationSummary2.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ConfigurationSummary2::ConfigurationSummary2()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

ConfigurationSummary2::~ConfigurationSummary2() = default;

void ConfigurationSummary2::validate()
{
}

web::json::value ConfigurationSummary2::toJson() const
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
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }

    return val;
}

bool ConfigurationSummary2::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            DatastoreResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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

std::string ConfigurationSummary2::getId() const
{
    return id_;
}

void ConfigurationSummary2::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfigurationSummary2::idIsSet() const
{
    return idIsSet_;
}

void ConfigurationSummary2::unsetid()
{
    idIsSet_ = false;
}

std::string ConfigurationSummary2::getName() const
{
    return name_;
}

void ConfigurationSummary2::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationSummary2::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationSummary2::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationSummary2::getDescription() const
{
    return description_;
}

void ConfigurationSummary2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationSummary2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationSummary2::unsetdescription()
{
    descriptionIsSet_ = false;
}

DatastoreResult ConfigurationSummary2::getDatastore() const
{
    return datastore_;
}

void ConfigurationSummary2::setDatastore(const DatastoreResult& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ConfigurationSummary2::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ConfigurationSummary2::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string ConfigurationSummary2::getCreated() const
{
    return created_;
}

void ConfigurationSummary2::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ConfigurationSummary2::createdIsSet() const
{
    return createdIsSet_;
}

void ConfigurationSummary2::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ConfigurationSummary2::getUpdated() const
{
    return updated_;
}

void ConfigurationSummary2::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ConfigurationSummary2::updatedIsSet() const
{
    return updatedIsSet_;
}

void ConfigurationSummary2::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


