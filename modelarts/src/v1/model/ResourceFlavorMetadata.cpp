

#include "huaweicloud/modelarts/v1/model/ResourceFlavorMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorMetadata::ResourceFlavorMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
}

ResourceFlavorMetadata::~ResourceFlavorMetadata() = default;

void ResourceFlavorMetadata::validate()
{
}

web::json::value ResourceFlavorMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool ResourceFlavorMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            ResourceFlavorLabel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            ResourceFlavorAnnotation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorMetadata::getName() const
{
    return name_;
}

void ResourceFlavorMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourceFlavorMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void ResourceFlavorMetadata::unsetname()
{
    nameIsSet_ = false;
}

ResourceFlavorLabel ResourceFlavorMetadata::getLabels() const
{
    return labels_;
}

void ResourceFlavorMetadata::setLabels(const ResourceFlavorLabel& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ResourceFlavorMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void ResourceFlavorMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

ResourceFlavorAnnotation ResourceFlavorMetadata::getAnnotations() const
{
    return annotations_;
}

void ResourceFlavorMetadata::setAnnotations(const ResourceFlavorAnnotation& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool ResourceFlavorMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void ResourceFlavorMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


