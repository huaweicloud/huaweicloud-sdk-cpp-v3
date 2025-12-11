

#include "huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateConfigurationRequestBody::CreateConfigurationRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreIsSet_ = false;
    valuesIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
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
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            CreateConfigurationDatastoreOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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

CreateConfigurationDatastoreOption CreateConfigurationRequestBody::getDatastore() const
{
    return datastore_;
}

void CreateConfigurationRequestBody::setDatastore(const CreateConfigurationDatastoreOption& value)
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

std::map<std::string, std::string>& CreateConfigurationRequestBody::getValues()
{
    return values_;
}

void CreateConfigurationRequestBody::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool CreateConfigurationRequestBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void CreateConfigurationRequestBody::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string CreateConfigurationRequestBody::getInstanceId() const
{
    return instanceId_;
}

void CreateConfigurationRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateConfigurationRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateConfigurationRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


