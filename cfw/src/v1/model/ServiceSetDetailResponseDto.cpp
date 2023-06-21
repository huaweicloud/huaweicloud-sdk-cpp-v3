

#include "huaweicloud/cfw/v1/model/ServiceSetDetailResponseDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceSetDetailResponseDto::ServiceSetDetailResponseDto()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ServiceSetDetailResponseDto::~ServiceSetDetailResponseDto() = default;

void ServiceSetDetailResponseDto::validate()
{
}

web::json::value ServiceSetDetailResponseDto::toJson() const
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

    return val;
}

bool ServiceSetDetailResponseDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ServiceSetDetailResponseDto::getId() const
{
    return id_;
}

void ServiceSetDetailResponseDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceSetDetailResponseDto::idIsSet() const
{
    return idIsSet_;
}

void ServiceSetDetailResponseDto::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceSetDetailResponseDto::getName() const
{
    return name_;
}

void ServiceSetDetailResponseDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceSetDetailResponseDto::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceSetDetailResponseDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ServiceSetDetailResponseDto::getDescription() const
{
    return description_;
}

void ServiceSetDetailResponseDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceSetDetailResponseDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceSetDetailResponseDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


