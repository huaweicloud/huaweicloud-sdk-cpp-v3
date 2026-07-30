

#include "huaweicloud/modelarts/v1/model/ResourceMetricsMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceMetricsMetadata::ResourceMetricsMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    labelsIsSet_ = false;
}

ResourceMetricsMetadata::~ResourceMetricsMetadata() = default;

void ResourceMetricsMetadata::validate()
{
}

web::json::value ResourceMetricsMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool ResourceMetricsMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


std::string ResourceMetricsMetadata::getName() const
{
    return name_;
}

void ResourceMetricsMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourceMetricsMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void ResourceMetricsMetadata::unsetname()
{
    nameIsSet_ = false;
}

Object ResourceMetricsMetadata::getLabels() const
{
    return labels_;
}

void ResourceMetricsMetadata::setLabels(const Object& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ResourceMetricsMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void ResourceMetricsMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


