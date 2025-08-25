

#include "huaweicloud/cce/v3/model/NodeMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeMetadata::NodeMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
    ownerReferenceIsSet_ = false;
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
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(ownerReferenceIsSet_) {
        val[utility::conversions::to_string_t("ownerReference")] = ModelBase::toJson(ownerReference_);
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
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerReference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerReference"));
        if(!fieldValue.is_null())
        {
            NodeOwnerReference refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerReference(refVal);
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

std::string NodeMetadata::getUid() const
{
    return uid_;
}

void NodeMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool NodeMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void NodeMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::map<std::string, std::string>& NodeMetadata::getLabels()
{
    return labels_;
}

void NodeMetadata::setLabels(const std::map<std::string, std::string>& value)
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

std::map<std::string, std::string>& NodeMetadata::getAnnotations()
{
    return annotations_;
}

void NodeMetadata::setAnnotations(const std::map<std::string, std::string>& value)
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

std::string NodeMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void NodeMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool NodeMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void NodeMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

NodeOwnerReference NodeMetadata::getOwnerReference() const
{
    return ownerReference_;
}

void NodeMetadata::setOwnerReference(const NodeOwnerReference& value)
{
    ownerReference_ = value;
    ownerReferenceIsSet_ = true;
}

bool NodeMetadata::ownerReferenceIsSet() const
{
    return ownerReferenceIsSet_;
}

void NodeMetadata::unsetownerReference()
{
    ownerReferenceIsSet_ = false;
}

}
}
}
}
}


