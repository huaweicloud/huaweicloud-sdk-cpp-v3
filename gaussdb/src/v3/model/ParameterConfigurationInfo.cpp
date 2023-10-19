

#include "huaweicloud/gaussdb/v3/model/ParameterConfigurationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ParameterConfigurationInfo::ParameterConfigurationInfo()
{
    datastoreVersionName_ = "";
    datastoreVersionNameIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

ParameterConfigurationInfo::~ParameterConfigurationInfo() = default;

void ParameterConfigurationInfo::validate()
{
}

web::json::value ParameterConfigurationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ParameterConfigurationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ParameterConfigurationInfo::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void ParameterConfigurationInfo::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool ParameterConfigurationInfo::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void ParameterConfigurationInfo::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string ParameterConfigurationInfo::getDatastoreName() const
{
    return datastoreName_;
}

void ParameterConfigurationInfo::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ParameterConfigurationInfo::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ParameterConfigurationInfo::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ParameterConfigurationInfo::getCreated() const
{
    return created_;
}

void ParameterConfigurationInfo::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ParameterConfigurationInfo::createdIsSet() const
{
    return createdIsSet_;
}

void ParameterConfigurationInfo::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ParameterConfigurationInfo::getUpdated() const
{
    return updated_;
}

void ParameterConfigurationInfo::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ParameterConfigurationInfo::updatedIsSet() const
{
    return updatedIsSet_;
}

void ParameterConfigurationInfo::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


