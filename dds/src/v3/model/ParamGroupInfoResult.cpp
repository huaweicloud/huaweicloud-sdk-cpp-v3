

#include "huaweicloud/dds/v3/model/ParamGroupInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ParamGroupInfoResult::ParamGroupInfoResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreVersion_ = "";
    datastoreVersionIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

ParamGroupInfoResult::~ParamGroupInfoResult() = default;

void ParamGroupInfoResult::validate()
{
}

web::json::value ParamGroupInfoResult::toJson() const
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
    if(datastoreVersionIsSet_) {
        val[utility::conversions::to_string_t("datastore_version")] = ModelBase::toJson(datastoreVersion_);
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
bool ParamGroupInfoResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreVersion(refVal);
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


std::string ParamGroupInfoResult::getId() const
{
    return id_;
}

void ParamGroupInfoResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ParamGroupInfoResult::idIsSet() const
{
    return idIsSet_;
}

void ParamGroupInfoResult::unsetid()
{
    idIsSet_ = false;
}

std::string ParamGroupInfoResult::getName() const
{
    return name_;
}

void ParamGroupInfoResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParamGroupInfoResult::nameIsSet() const
{
    return nameIsSet_;
}

void ParamGroupInfoResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ParamGroupInfoResult::getDescription() const
{
    return description_;
}

void ParamGroupInfoResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ParamGroupInfoResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ParamGroupInfoResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ParamGroupInfoResult::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ParamGroupInfoResult::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ParamGroupInfoResult::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ParamGroupInfoResult::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ParamGroupInfoResult::getDatastoreName() const
{
    return datastoreName_;
}

void ParamGroupInfoResult::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ParamGroupInfoResult::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ParamGroupInfoResult::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ParamGroupInfoResult::getCreated() const
{
    return created_;
}

void ParamGroupInfoResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ParamGroupInfoResult::createdIsSet() const
{
    return createdIsSet_;
}

void ParamGroupInfoResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ParamGroupInfoResult::getUpdated() const
{
    return updated_;
}

void ParamGroupInfoResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ParamGroupInfoResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ParamGroupInfoResult::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


