

#include "huaweicloud/modelarts/v1/model/PoolMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetadata::PoolMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
}

PoolMetadata::~PoolMetadata() = default;

void PoolMetadata::validate()
{
}

web::json::value PoolMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool PoolMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            PoolMetaLabels refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            PoolMetaAnnotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


std::string PoolMetadata::getName() const
{
    return name_;
}

void PoolMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PoolMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void PoolMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string PoolMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void PoolMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool PoolMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void PoolMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

PoolMetaLabels PoolMetadata::getLabels() const
{
    return labels_;
}

void PoolMetadata::setLabels(const PoolMetaLabels& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PoolMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void PoolMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

PoolMetaAnnotations PoolMetadata::getAnnotations() const
{
    return annotations_;
}

void PoolMetadata::setAnnotations(const PoolMetaAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool PoolMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void PoolMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


