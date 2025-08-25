

#include "huaweicloud/cce/v3/model/AddonMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonMetadata::AddonMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
    updateTimestampIsSet_ = false;
    creationTimestampIsSet_ = false;
}

AddonMetadata::~AddonMetadata() = default;

void AddonMetadata::validate()
{
}

web::json::value AddonMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }

    return val;
}
bool AddonMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    return ok;
}


std::string AddonMetadata::getUid() const
{
    return uid_;
}

void AddonMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool AddonMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void AddonMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string AddonMetadata::getName() const
{
    return name_;
}

void AddonMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddonMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void AddonMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string AddonMetadata::getAlias() const
{
    return alias_;
}

void AddonMetadata::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AddonMetadata::aliasIsSet() const
{
    return aliasIsSet_;
}

void AddonMetadata::unsetalias()
{
    aliasIsSet_ = false;
}

std::map<std::string, std::string>& AddonMetadata::getLabels()
{
    return labels_;
}

void AddonMetadata::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool AddonMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void AddonMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

std::map<std::string, std::string>& AddonMetadata::getAnnotations()
{
    return annotations_;
}

void AddonMetadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool AddonMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void AddonMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

utility::datetime AddonMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void AddonMetadata::setUpdateTimestamp(const utility::datetime& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool AddonMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void AddonMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

utility::datetime AddonMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void AddonMetadata::setCreationTimestamp(const utility::datetime& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool AddonMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void AddonMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


