

#include "huaweicloud/metastudio/v1/model/HumanModelAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HumanModelAssetMeta::HumanModelAssetMeta()
{
    styleId_ = "";
    styleIdIsSet_ = false;
    modelingType_ = "";
    modelingTypeIsSet_ = false;
    modelingJobId_ = "";
    modelingJobIdIsSet_ = false;
    modelPropertiesIsSet_ = false;
    componentsIsSet_ = false;
}

HumanModelAssetMeta::~HumanModelAssetMeta() = default;

void HumanModelAssetMeta::validate()
{
}

web::json::value HumanModelAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(modelingTypeIsSet_) {
        val[utility::conversions::to_string_t("modeling_type")] = ModelBase::toJson(modelingType_);
    }
    if(modelingJobIdIsSet_) {
        val[utility::conversions::to_string_t("modeling_job_id")] = ModelBase::toJson(modelingJobId_);
    }
    if(modelPropertiesIsSet_) {
        val[utility::conversions::to_string_t("model_properties")] = ModelBase::toJson(modelProperties_);
    }
    if(componentsIsSet_) {
        val[utility::conversions::to_string_t("components")] = ModelBase::toJson(components_);
    }

    return val;
}
bool HumanModelAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modeling_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modeling_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelingType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modeling_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modeling_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelingJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_properties"));
        if(!fieldValue.is_null())
        {
            HumanModelMetaProperties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("components"));
        if(!fieldValue.is_null())
        {
            std::vector<ComponentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponents(refVal);
        }
    }
    return ok;
}


std::string HumanModelAssetMeta::getStyleId() const
{
    return styleId_;
}

void HumanModelAssetMeta::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool HumanModelAssetMeta::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void HumanModelAssetMeta::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string HumanModelAssetMeta::getModelingType() const
{
    return modelingType_;
}

void HumanModelAssetMeta::setModelingType(const std::string& value)
{
    modelingType_ = value;
    modelingTypeIsSet_ = true;
}

bool HumanModelAssetMeta::modelingTypeIsSet() const
{
    return modelingTypeIsSet_;
}

void HumanModelAssetMeta::unsetmodelingType()
{
    modelingTypeIsSet_ = false;
}

std::string HumanModelAssetMeta::getModelingJobId() const
{
    return modelingJobId_;
}

void HumanModelAssetMeta::setModelingJobId(const std::string& value)
{
    modelingJobId_ = value;
    modelingJobIdIsSet_ = true;
}

bool HumanModelAssetMeta::modelingJobIdIsSet() const
{
    return modelingJobIdIsSet_;
}

void HumanModelAssetMeta::unsetmodelingJobId()
{
    modelingJobIdIsSet_ = false;
}

HumanModelMetaProperties HumanModelAssetMeta::getModelProperties() const
{
    return modelProperties_;
}

void HumanModelAssetMeta::setModelProperties(const HumanModelMetaProperties& value)
{
    modelProperties_ = value;
    modelPropertiesIsSet_ = true;
}

bool HumanModelAssetMeta::modelPropertiesIsSet() const
{
    return modelPropertiesIsSet_;
}

void HumanModelAssetMeta::unsetmodelProperties()
{
    modelPropertiesIsSet_ = false;
}

std::vector<ComponentInfo>& HumanModelAssetMeta::getComponents()
{
    return components_;
}

void HumanModelAssetMeta::setComponents(const std::vector<ComponentInfo>& value)
{
    components_ = value;
    componentsIsSet_ = true;
}

bool HumanModelAssetMeta::componentsIsSet() const
{
    return componentsIsSet_;
}

void HumanModelAssetMeta::unsetcomponents()
{
    componentsIsSet_ = false;
}

}
}
}
}
}


