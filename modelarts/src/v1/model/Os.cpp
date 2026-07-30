

#include "huaweicloud/modelarts/v1/model/Os.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Os::Os()
{
    name_ = "";
    nameIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    autoMatch_ = "";
    autoMatchIsSet_ = false;
}

Os::~Os() = default;

void Os::validate()
{
}

web::json::value Os::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("imageId")] = ModelBase::toJson(imageId_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("imageType")] = ModelBase::toJson(imageType_);
    }
    if(autoMatchIsSet_) {
        val[utility::conversions::to_string_t("autoMatch")] = ModelBase::toJson(autoMatch_);
    }

    return val;
}
bool Os::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("imageId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoMatch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoMatch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoMatch(refVal);
        }
    }
    return ok;
}


std::string Os::getName() const
{
    return name_;
}

void Os::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Os::nameIsSet() const
{
    return nameIsSet_;
}

void Os::unsetname()
{
    nameIsSet_ = false;
}

std::string Os::getImageId() const
{
    return imageId_;
}

void Os::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool Os::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void Os::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string Os::getImageType() const
{
    return imageType_;
}

void Os::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool Os::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void Os::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::string Os::getAutoMatch() const
{
    return autoMatch_;
}

void Os::setAutoMatch(const std::string& value)
{
    autoMatch_ = value;
    autoMatchIsSet_ = true;
}

bool Os::autoMatchIsSet() const
{
    return autoMatchIsSet_;
}

void Os::unsetautoMatch()
{
    autoMatchIsSet_ = false;
}

}
}
}
}
}


