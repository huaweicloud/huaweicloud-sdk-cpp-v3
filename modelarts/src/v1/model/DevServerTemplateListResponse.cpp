

#include "huaweicloud/modelarts/v1/model/DevServerTemplateListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DevServerTemplateListResponse::DevServerTemplateListResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    paramsIsSet_ = false;
}

DevServerTemplateListResponse::~DevServerTemplateListResponse() = default;

void DevServerTemplateListResponse::validate()
{
}

web::json::value DevServerTemplateListResponse::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool DevServerTemplateListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string DevServerTemplateListResponse::getId() const
{
    return id_;
}

void DevServerTemplateListResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DevServerTemplateListResponse::idIsSet() const
{
    return idIsSet_;
}

void DevServerTemplateListResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DevServerTemplateListResponse::getName() const
{
    return name_;
}

void DevServerTemplateListResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DevServerTemplateListResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DevServerTemplateListResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DevServerTemplateListResponse::getDescription() const
{
    return description_;
}

void DevServerTemplateListResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DevServerTemplateListResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DevServerTemplateListResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DevServerTemplateListResponse::getType() const
{
    return type_;
}

void DevServerTemplateListResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DevServerTemplateListResponse::typeIsSet() const
{
    return typeIsSet_;
}

void DevServerTemplateListResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string DevServerTemplateListResponse::getFlavorType() const
{
    return flavorType_;
}

void DevServerTemplateListResponse::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool DevServerTemplateListResponse::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void DevServerTemplateListResponse::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::vector<TemplateParam>& DevServerTemplateListResponse::getParams()
{
    return params_;
}

void DevServerTemplateListResponse::setParams(const std::vector<TemplateParam>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool DevServerTemplateListResponse::paramsIsSet() const
{
    return paramsIsSet_;
}

void DevServerTemplateListResponse::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


