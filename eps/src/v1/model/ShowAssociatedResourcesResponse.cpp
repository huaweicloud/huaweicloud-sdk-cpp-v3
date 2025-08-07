

#include "huaweicloud/eps/v1/model/ShowAssociatedResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowAssociatedResourcesResponse::ShowAssociatedResourcesResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    associatedResourcesIsSet_ = false;
    errorsIsSet_ = false;
}

ShowAssociatedResourcesResponse::~ShowAssociatedResourcesResponse() = default;

void ShowAssociatedResourcesResponse::validate()
{
}

web::json::value ShowAssociatedResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(associatedResourcesIsSet_) {
        val[utility::conversions::to_string_t("associated_resources")] = ModelBase::toJson(associatedResources_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }

    return val;
}
bool ShowAssociatedResourcesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociatedResourceListResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceErrorListResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    return ok;
}


std::string ShowAssociatedResourcesResponse::getId() const
{
    return id_;
}

void ShowAssociatedResourcesResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAssociatedResourcesResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowAssociatedResourcesResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAssociatedResourcesResponse::getName() const
{
    return name_;
}

void ShowAssociatedResourcesResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowAssociatedResourcesResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowAssociatedResourcesResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowAssociatedResourcesResponse::getType() const
{
    return type_;
}

void ShowAssociatedResourcesResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAssociatedResourcesResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAssociatedResourcesResponse::unsettype()
{
    typeIsSet_ = false;
}

std::vector<AssociatedResourceListResponse>& ShowAssociatedResourcesResponse::getAssociatedResources()
{
    return associatedResources_;
}

void ShowAssociatedResourcesResponse::setAssociatedResources(const std::vector<AssociatedResourceListResponse>& value)
{
    associatedResources_ = value;
    associatedResourcesIsSet_ = true;
}

bool ShowAssociatedResourcesResponse::associatedResourcesIsSet() const
{
    return associatedResourcesIsSet_;
}

void ShowAssociatedResourcesResponse::unsetassociatedResources()
{
    associatedResourcesIsSet_ = false;
}

std::vector<ResourceErrorListResponse>& ShowAssociatedResourcesResponse::getErrors()
{
    return errors_;
}

void ShowAssociatedResourcesResponse::setErrors(const std::vector<ResourceErrorListResponse>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ShowAssociatedResourcesResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ShowAssociatedResourcesResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


