

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateConfigurationTemplateRequestBody::CreateConfigurationTemplateRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parameterValuesIsSet_ = false;
    datastoreIsSet_ = false;
}

CreateConfigurationTemplateRequestBody::~CreateConfigurationTemplateRequestBody() = default;

void CreateConfigurationTemplateRequestBody::validate()
{
}

web::json::value CreateConfigurationTemplateRequestBody::toJson() const
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

bool CreateConfigurationTemplateRequestBody::fromJson(const web::json::value& val)
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
            DatastoreOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    return ok;
}

std::string CreateConfigurationTemplateRequestBody::getName() const
{
    return name_;
}

void CreateConfigurationTemplateRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateConfigurationTemplateRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateConfigurationTemplateRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateConfigurationTemplateRequestBody::getDescription() const
{
    return description_;
}

void CreateConfigurationTemplateRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateConfigurationTemplateRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateConfigurationTemplateRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& CreateConfigurationTemplateRequestBody::getParameterValues()
{
    return parameterValues_;
}

void CreateConfigurationTemplateRequestBody::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool CreateConfigurationTemplateRequestBody::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void CreateConfigurationTemplateRequestBody::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

DatastoreOption CreateConfigurationTemplateRequestBody::getDatastore() const
{
    return datastore_;
}

void CreateConfigurationTemplateRequestBody::setDatastore(const DatastoreOption& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateConfigurationTemplateRequestBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateConfigurationTemplateRequestBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

}
}
}
}
}


