

#include "huaweicloud/rds/v3/model/CopyConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CopyConfigurationResponse::CopyConfigurationResponse()
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
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

CopyConfigurationResponse::~CopyConfigurationResponse() = default;

void CopyConfigurationResponse::validate()
{
}

web::json::value CopyConfigurationResponse::toJson() const
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}

bool CopyConfigurationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}

std::string CopyConfigurationResponse::getId() const
{
    return id_;
}

void CopyConfigurationResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CopyConfigurationResponse::idIsSet() const
{
    return idIsSet_;
}

void CopyConfigurationResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CopyConfigurationResponse::getName() const
{
    return name_;
}

void CopyConfigurationResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyConfigurationResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CopyConfigurationResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CopyConfigurationResponse::getDescription() const
{
    return description_;
}

void CopyConfigurationResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CopyConfigurationResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CopyConfigurationResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CopyConfigurationResponse::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void CopyConfigurationResponse::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool CopyConfigurationResponse::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void CopyConfigurationResponse::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string CopyConfigurationResponse::getDatastoreName() const
{
    return datastoreName_;
}

void CopyConfigurationResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool CopyConfigurationResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void CopyConfigurationResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string CopyConfigurationResponse::getCreateTime() const
{
    return createTime_;
}

void CopyConfigurationResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CopyConfigurationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CopyConfigurationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CopyConfigurationResponse::getUpdateTime() const
{
    return updateTime_;
}

void CopyConfigurationResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CopyConfigurationResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CopyConfigurationResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


