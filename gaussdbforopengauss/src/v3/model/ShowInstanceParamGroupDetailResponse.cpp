

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceParamGroupDetailResponse::ShowInstanceParamGroupDetailResponse()
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

ShowInstanceParamGroupDetailResponse::~ShowInstanceParamGroupDetailResponse() = default;

void ShowInstanceParamGroupDetailResponse::validate()
{
}

web::json::value ShowInstanceParamGroupDetailResponse::toJson() const
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
bool ShowInstanceParamGroupDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowInstanceParamGroupDetailResponse::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ShowInstanceParamGroupDetailResponse::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ShowInstanceParamGroupDetailResponse::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ShowInstanceParamGroupDetailResponse::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ShowInstanceParamGroupDetailResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowInstanceParamGroupDetailResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowInstanceParamGroupDetailResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowInstanceParamGroupDetailResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowInstanceParamGroupDetailResponse::getCreated() const
{
    return created_;
}

void ShowInstanceParamGroupDetailResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowInstanceParamGroupDetailResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowInstanceParamGroupDetailResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowInstanceParamGroupDetailResponse::getUpdated() const
{
    return updated_;
}

void ShowInstanceParamGroupDetailResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowInstanceParamGroupDetailResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowInstanceParamGroupDetailResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<ConfigurationParameter>& ShowInstanceParamGroupDetailResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowInstanceParamGroupDetailResponse::setConfigurationParameters(const std::vector<ConfigurationParameter>& value)
{
    configurationParameters_ = value;
    configurationParametersIsSet_ = true;
}

bool ShowInstanceParamGroupDetailResponse::configurationParametersIsSet() const
{
    return configurationParametersIsSet_;
}

void ShowInstanceParamGroupDetailResponse::unsetconfigurationParameters()
{
    configurationParametersIsSet_ = false;
}

}
}
}
}
}


