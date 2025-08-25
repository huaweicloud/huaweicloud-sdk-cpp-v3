

#include "huaweicloud/cce/v3/model/Metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Metadata::Metadata()
{
    uid_ = "";
    uidIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
    updateTimestampIsSet_ = false;
    creationTimestampIsSet_ = false;
}

Metadata::~Metadata() = default;

void Metadata::validate()
{
}

web::json::value Metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
bool Metadata::fromJson(const web::json::value& val)
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


std::string Metadata::getUid() const
{
    return uid_;
}

void Metadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool Metadata::uidIsSet() const
{
    return uidIsSet_;
}

void Metadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string Metadata::getName() const
{
    return name_;
}

void Metadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Metadata::nameIsSet() const
{
    return nameIsSet_;
}

void Metadata::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& Metadata::getLabels()
{
    return labels_;
}

void Metadata::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool Metadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void Metadata::unsetlabels()
{
    labelsIsSet_ = false;
}

std::map<std::string, std::string>& Metadata::getAnnotations()
{
    return annotations_;
}

void Metadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool Metadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void Metadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

utility::datetime Metadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void Metadata::setUpdateTimestamp(const utility::datetime& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool Metadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void Metadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

utility::datetime Metadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void Metadata::setCreationTimestamp(const utility::datetime& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool Metadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void Metadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


