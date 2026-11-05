

#include "huaweicloud/modelarts/v1/model/NodeconfigSpec_configs_image_warm_up.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigSpec_configs_image_warm_up::NodeconfigSpec_configs_image_warm_up()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
}

NodeconfigSpec_configs_image_warm_up::~NodeconfigSpec_configs_image_warm_up() = default;

void NodeconfigSpec_configs_image_warm_up::validate()
{
}

web::json::value NodeconfigSpec_configs_image_warm_up::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }

    return val;
}
bool NodeconfigSpec_configs_image_warm_up::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    return ok;
}


std::string NodeconfigSpec_configs_image_warm_up::getId() const
{
    return id_;
}

void NodeconfigSpec_configs_image_warm_up::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NodeconfigSpec_configs_image_warm_up::idIsSet() const
{
    return idIsSet_;
}

void NodeconfigSpec_configs_image_warm_up::unsetid()
{
    idIsSet_ = false;
}

std::string NodeconfigSpec_configs_image_warm_up::getName() const
{
    return name_;
}

void NodeconfigSpec_configs_image_warm_up::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeconfigSpec_configs_image_warm_up::nameIsSet() const
{
    return nameIsSet_;
}

void NodeconfigSpec_configs_image_warm_up::unsetname()
{
    nameIsSet_ = false;
}

std::string NodeconfigSpec_configs_image_warm_up::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void NodeconfigSpec_configs_image_warm_up::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool NodeconfigSpec_configs_image_warm_up::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void NodeconfigSpec_configs_image_warm_up::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string NodeconfigSpec_configs_image_warm_up::getType() const
{
    return type_;
}

void NodeconfigSpec_configs_image_warm_up::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NodeconfigSpec_configs_image_warm_up::typeIsSet() const
{
    return typeIsSet_;
}

void NodeconfigSpec_configs_image_warm_up::unsettype()
{
    typeIsSet_ = false;
}

std::string NodeconfigSpec_configs_image_warm_up::getImage() const
{
    return image_;
}

void NodeconfigSpec_configs_image_warm_up::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool NodeconfigSpec_configs_image_warm_up::imageIsSet() const
{
    return imageIsSet_;
}

void NodeconfigSpec_configs_image_warm_up::unsetimage()
{
    imageIsSet_ = false;
}

}
}
}
}
}


