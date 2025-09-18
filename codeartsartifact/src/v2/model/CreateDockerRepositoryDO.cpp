

#include "huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoryDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateDockerRepositoryDO::CreateDockerRepositoryDO()
{
    format_ = "";
    formatIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

CreateDockerRepositoryDO::~CreateDockerRepositoryDO() = default;

void CreateDockerRepositoryDO::validate()
{
}

web::json::value CreateDockerRepositoryDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CreateDockerRepositoryDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
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
    return ok;
}


std::string CreateDockerRepositoryDO::getFormat() const
{
    return format_;
}

void CreateDockerRepositoryDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool CreateDockerRepositoryDO::formatIsSet() const
{
    return formatIsSet_;
}

void CreateDockerRepositoryDO::unsetformat()
{
    formatIsSet_ = false;
}

std::string CreateDockerRepositoryDO::getDisplayName() const
{
    return displayName_;
}

void CreateDockerRepositoryDO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool CreateDockerRepositoryDO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void CreateDockerRepositoryDO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string CreateDockerRepositoryDO::getDescription() const
{
    return description_;
}

void CreateDockerRepositoryDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDockerRepositoryDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDockerRepositoryDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDockerRepositoryDO::getType() const
{
    return type_;
}

void CreateDockerRepositoryDO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateDockerRepositoryDO::typeIsSet() const
{
    return typeIsSet_;
}

void CreateDockerRepositoryDO::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


