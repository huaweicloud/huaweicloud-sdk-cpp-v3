

#include "huaweicloud/modelarts/v1/model/PoolMetadataCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetadataCreation::PoolMetadataCreation()
{
    labelsIsSet_ = false;
    annotationsIsSet_ = false;
}

PoolMetadataCreation::~PoolMetadataCreation() = default;

void PoolMetadataCreation::validate()
{
}

web::json::value PoolMetadataCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool PoolMetadataCreation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            PoolLabelsCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            PoolAnnotationsCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


PoolLabelsCreation PoolMetadataCreation::getLabels() const
{
    return labels_;
}

void PoolMetadataCreation::setLabels(const PoolLabelsCreation& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PoolMetadataCreation::labelsIsSet() const
{
    return labelsIsSet_;
}

void PoolMetadataCreation::unsetlabels()
{
    labelsIsSet_ = false;
}

PoolAnnotationsCreation PoolMetadataCreation::getAnnotations() const
{
    return annotations_;
}

void PoolMetadataCreation::setAnnotations(const PoolAnnotationsCreation& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool PoolMetadataCreation::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void PoolMetadataCreation::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


