

#include "huaweicloud/modelarts/v1/model/NetworkMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkMetadata::NetworkMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
}

NetworkMetadata::~NetworkMetadata() = default;

void NetworkMetadata::validate()
{
}

web::json::value NetworkMetadata::toJson() const
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
bool NetworkMetadata::fromJson(const web::json::value& val)
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
            NetworkMetadataLabels refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            NetworkMetadataAnnotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


std::string NetworkMetadata::getName() const
{
    return name_;
}

void NetworkMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NetworkMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void NetworkMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string NetworkMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void NetworkMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool NetworkMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void NetworkMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

NetworkMetadataLabels NetworkMetadata::getLabels() const
{
    return labels_;
}

void NetworkMetadata::setLabels(const NetworkMetadataLabels& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool NetworkMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void NetworkMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

NetworkMetadataAnnotations NetworkMetadata::getAnnotations() const
{
    return annotations_;
}

void NetworkMetadata::setAnnotations(const NetworkMetadataAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool NetworkMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void NetworkMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


