

#include "huaweicloud/modelarts/v1/model/PoolMetadataDeletion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetadataDeletion::PoolMetadataDeletion()
{
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    deletionTimestamp_ = "";
    deletionTimestampIsSet_ = false;
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
}

PoolMetadataDeletion::~PoolMetadataDeletion() = default;

void PoolMetadataDeletion::validate()
{
}

web::json::value PoolMetadataDeletion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(deletionTimestampIsSet_) {
        val[utility::conversions::to_string_t("deletionTimestamp")] = ModelBase::toJson(deletionTimestamp_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool PoolMetadataDeletion::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deletionTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletionTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletionTimestamp(refVal);
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


std::string PoolMetadataDeletion::getName() const
{
    return name_;
}

void PoolMetadataDeletion::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PoolMetadataDeletion::nameIsSet() const
{
    return nameIsSet_;
}

void PoolMetadataDeletion::unsetname()
{
    nameIsSet_ = false;
}

std::string PoolMetadataDeletion::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void PoolMetadataDeletion::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool PoolMetadataDeletion::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void PoolMetadataDeletion::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string PoolMetadataDeletion::getDeletionTimestamp() const
{
    return deletionTimestamp_;
}

void PoolMetadataDeletion::setDeletionTimestamp(const std::string& value)
{
    deletionTimestamp_ = value;
    deletionTimestampIsSet_ = true;
}

bool PoolMetadataDeletion::deletionTimestampIsSet() const
{
    return deletionTimestampIsSet_;
}

void PoolMetadataDeletion::unsetdeletionTimestamp()
{
    deletionTimestampIsSet_ = false;
}

PoolMetaLabels PoolMetadataDeletion::getLabels() const
{
    return labels_;
}

void PoolMetadataDeletion::setLabels(const PoolMetaLabels& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PoolMetadataDeletion::labelsIsSet() const
{
    return labelsIsSet_;
}

void PoolMetadataDeletion::unsetlabels()
{
    labelsIsSet_ = false;
}

PoolMetaAnnotations PoolMetadataDeletion::getAnnotations() const
{
    return annotations_;
}

void PoolMetadataDeletion::setAnnotations(const PoolMetaAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool PoolMetadataDeletion::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void PoolMetadataDeletion::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


