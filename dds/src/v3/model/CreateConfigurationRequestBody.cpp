

#include "huaweicloud/dds/v3/model/CreateConfigurationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateConfigurationRequestBody::CreateConfigurationRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parameterValuesIsSet_ = false;
    datastoreIsSet_ = false;
}

CreateConfigurationRequestBody::~CreateConfigurationRequestBody() = default;

void CreateConfigurationRequestBody::validate()
{
}

web::json::value CreateConfigurationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }

    return val;
}
bool CreateConfigurationRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterValues(refVal);
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
    return ok;
}


std::string CreateConfigurationRequestBody::getName() const
{
    return name_;
}

void CreateConfigurationRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateConfigurationRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateConfigurationRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateConfigurationRequestBody::getDescription() const
{
    return description_;
}

void CreateConfigurationRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateConfigurationRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateConfigurationRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& CreateConfigurationRequestBody::getParameterValues()
{
    return parameterValues_;
}

void CreateConfigurationRequestBody::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool CreateConfigurationRequestBody::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void CreateConfigurationRequestBody::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

DatastoreResult CreateConfigurationRequestBody::getDatastore() const
{
    return datastore_;
}

void CreateConfigurationRequestBody::setDatastore(const DatastoreResult& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateConfigurationRequestBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateConfigurationRequestBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

}
}
}
}
}


