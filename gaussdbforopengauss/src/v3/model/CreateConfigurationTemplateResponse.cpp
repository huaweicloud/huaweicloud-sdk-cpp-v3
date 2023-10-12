

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateConfigurationTemplateResponse::CreateConfigurationTemplateResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

CreateConfigurationTemplateResponse::~CreateConfigurationTemplateResponse() = default;

void CreateConfigurationTemplateResponse::validate()
{
}

web::json::value CreateConfigurationTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool CreateConfigurationTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string CreateConfigurationTemplateResponse::getId() const
{
    return id_;
}

void CreateConfigurationTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateConfigurationTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateConfigurationTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateConfigurationTemplateResponse::getName() const
{
    return name_;
}

void CreateConfigurationTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateConfigurationTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateConfigurationTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateConfigurationTemplateResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateConfigurationTemplateResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateConfigurationTemplateResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateConfigurationTemplateResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


