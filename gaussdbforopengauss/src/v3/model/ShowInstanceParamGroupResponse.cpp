

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceParamGroupResponse::ShowInstanceParamGroupResponse()
{
    datastoreVersion_ = "";
    datastoreVersionIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    configurationParametersIsSet_ = false;
}

ShowInstanceParamGroupResponse::~ShowInstanceParamGroupResponse() = default;

void ShowInstanceParamGroupResponse::validate()
{
}

web::json::value ShowInstanceParamGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(configurationParametersIsSet_) {
        val[utility::conversions::to_string_t("configuration_parameters")] = ModelBase::toJson(configurationParameters_);
    }

    return val;
}
bool ShowInstanceParamGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("configuration_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationParameters(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceParamGroupResponse::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ShowInstanceParamGroupResponse::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ShowInstanceParamGroupResponse::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ShowInstanceParamGroupResponse::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ShowInstanceParamGroupResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowInstanceParamGroupResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowInstanceParamGroupResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowInstanceParamGroupResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowInstanceParamGroupResponse::getCreated() const
{
    return created_;
}

void ShowInstanceParamGroupResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowInstanceParamGroupResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowInstanceParamGroupResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowInstanceParamGroupResponse::getUpdated() const
{
    return updated_;
}

void ShowInstanceParamGroupResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowInstanceParamGroupResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowInstanceParamGroupResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<ConfigurationParameter>& ShowInstanceParamGroupResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowInstanceParamGroupResponse::setConfigurationParameters(const std::vector<ConfigurationParameter>& value)
{
    configurationParameters_ = value;
    configurationParametersIsSet_ = true;
}

bool ShowInstanceParamGroupResponse::configurationParametersIsSet() const
{
    return configurationParametersIsSet_;
}

void ShowInstanceParamGroupResponse::unsetconfigurationParameters()
{
    configurationParametersIsSet_ = false;
}

}
}
}
}
}


