

#include "huaweicloud/modelarts/v1/model/NodeMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeMetadata::NodeMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
}

NodeMetadata::~NodeMetadata() = default;

void NodeMetadata::validate()
{
}

web::json::value NodeMetadata::toJson() const
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
bool NodeMetadata::fromJson(const web::json::value& val)
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
            NodeLabels refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            NodeVOAnnotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


std::string NodeMetadata::getName() const
{
    return name_;
}

void NodeMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void NodeMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string NodeMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void NodeMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool NodeMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void NodeMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

NodeLabels NodeMetadata::getLabels() const
{
    return labels_;
}

void NodeMetadata::setLabels(const NodeLabels& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool NodeMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void NodeMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

NodeVOAnnotations NodeMetadata::getAnnotations() const
{
    return annotations_;
}

void NodeMetadata::setAnnotations(const NodeVOAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool NodeMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void NodeMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


