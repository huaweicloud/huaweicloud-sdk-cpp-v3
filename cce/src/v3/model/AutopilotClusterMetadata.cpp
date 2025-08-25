

#include "huaweicloud/cce/v3/model/AutopilotClusterMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterMetadata::AutopilotClusterMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    annotationsIsSet_ = false;
    labelsIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
}

AutopilotClusterMetadata::~AutopilotClusterMetadata() = default;

void AutopilotClusterMetadata::validate()
{
}

web::json::value AutopilotClusterMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }

    return val;
}
bool AutopilotClusterMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
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
    return ok;
}


std::string AutopilotClusterMetadata::getName() const
{
    return name_;
}

void AutopilotClusterMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AutopilotClusterMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void AutopilotClusterMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string AutopilotClusterMetadata::getUid() const
{
    return uid_;
}

void AutopilotClusterMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool AutopilotClusterMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void AutopilotClusterMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string AutopilotClusterMetadata::getAlias() const
{
    return alias_;
}

void AutopilotClusterMetadata::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AutopilotClusterMetadata::aliasIsSet() const
{
    return aliasIsSet_;
}

void AutopilotClusterMetadata::unsetalias()
{
    aliasIsSet_ = false;
}

std::map<std::string, std::string>& AutopilotClusterMetadata::getAnnotations()
{
    return annotations_;
}

void AutopilotClusterMetadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool AutopilotClusterMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void AutopilotClusterMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

std::map<std::string, std::string>& AutopilotClusterMetadata::getLabels()
{
    return labels_;
}

void AutopilotClusterMetadata::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool AutopilotClusterMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void AutopilotClusterMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string AutopilotClusterMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void AutopilotClusterMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool AutopilotClusterMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void AutopilotClusterMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string AutopilotClusterMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void AutopilotClusterMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool AutopilotClusterMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void AutopilotClusterMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

}
}
}
}
}


