

#include "huaweicloud/cce/v3/model/ClusterMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterMetadata::ClusterMetadata()
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
    timezone_ = "";
    timezoneIsSet_ = false;
}

ClusterMetadata::~ClusterMetadata() = default;

void ClusterMetadata::validate()
{
}

web::json::value ClusterMetadata::toJson() const
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
    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }

    return val;
}
bool ClusterMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    return ok;
}


std::string ClusterMetadata::getName() const
{
    return name_;
}

void ClusterMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ClusterMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void ClusterMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string ClusterMetadata::getUid() const
{
    return uid_;
}

void ClusterMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool ClusterMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void ClusterMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string ClusterMetadata::getAlias() const
{
    return alias_;
}

void ClusterMetadata::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ClusterMetadata::aliasIsSet() const
{
    return aliasIsSet_;
}

void ClusterMetadata::unsetalias()
{
    aliasIsSet_ = false;
}

std::map<std::string, std::string>& ClusterMetadata::getAnnotations()
{
    return annotations_;
}

void ClusterMetadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool ClusterMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void ClusterMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

std::map<std::string, std::string>& ClusterMetadata::getLabels()
{
    return labels_;
}

void ClusterMetadata::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ClusterMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void ClusterMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string ClusterMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void ClusterMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool ClusterMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void ClusterMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string ClusterMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void ClusterMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool ClusterMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void ClusterMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string ClusterMetadata::getTimezone() const
{
    return timezone_;
}

void ClusterMetadata::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool ClusterMetadata::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void ClusterMetadata::unsettimezone()
{
    timezoneIsSet_ = false;
}

}
}
}
}
}


