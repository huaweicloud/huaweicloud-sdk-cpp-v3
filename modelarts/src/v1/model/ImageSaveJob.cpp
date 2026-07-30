

#include "huaweicloud/modelarts/v1/model/ImageSaveJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageSaveJob::ImageSaveJob()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ImageSaveJob::~ImageSaveJob() = default;

void ImageSaveJob::validate()
{
}

web::json::value ImageSaveJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ImageSaveJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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


std::string ImageSaveJob::getName() const
{
    return name_;
}

void ImageSaveJob::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImageSaveJob::nameIsSet() const
{
    return nameIsSet_;
}

void ImageSaveJob::unsetname()
{
    nameIsSet_ = false;
}

std::string ImageSaveJob::getNamespace() const
{
    return namespace_;
}

void ImageSaveJob::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ImageSaveJob::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ImageSaveJob::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ImageSaveJob::getTag() const
{
    return tag_;
}

void ImageSaveJob::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ImageSaveJob::tagIsSet() const
{
    return tagIsSet_;
}

void ImageSaveJob::unsettag()
{
    tagIsSet_ = false;
}

std::string ImageSaveJob::getDescription() const
{
    return description_;
}

void ImageSaveJob::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageSaveJob::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageSaveJob::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


