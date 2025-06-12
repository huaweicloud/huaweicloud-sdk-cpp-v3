

#include "huaweicloud/metastudio/v1/model/StyleExtraMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StyleExtraMeta::StyleExtraMeta()
{
    pictureModelingEnable_ = false;
    pictureModelingEnableIsSet_ = false;
    editEnable_ = false;
    editEnableIsSet_ = false;
    editEngine_ = "";
    editEngineIsSet_ = false;
    modelId_ = "";
    modelIdIsSet_ = false;
}

StyleExtraMeta::~StyleExtraMeta() = default;

void StyleExtraMeta::validate()
{
}

web::json::value StyleExtraMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pictureModelingEnableIsSet_) {
        val[utility::conversions::to_string_t("picture_modeling_enable")] = ModelBase::toJson(pictureModelingEnable_);
    }
    if(editEnableIsSet_) {
        val[utility::conversions::to_string_t("edit_enable")] = ModelBase::toJson(editEnable_);
    }
    if(editEngineIsSet_) {
        val[utility::conversions::to_string_t("edit_engine")] = ModelBase::toJson(editEngine_);
    }
    if(modelIdIsSet_) {
        val[utility::conversions::to_string_t("model_id")] = ModelBase::toJson(modelId_);
    }

    return val;
}
bool StyleExtraMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("picture_modeling_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picture_modeling_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPictureModelingEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("edit_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("edit_engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelId(refVal);
        }
    }
    return ok;
}


bool StyleExtraMeta::isPictureModelingEnable() const
{
    return pictureModelingEnable_;
}

void StyleExtraMeta::setPictureModelingEnable(bool value)
{
    pictureModelingEnable_ = value;
    pictureModelingEnableIsSet_ = true;
}

bool StyleExtraMeta::pictureModelingEnableIsSet() const
{
    return pictureModelingEnableIsSet_;
}

void StyleExtraMeta::unsetpictureModelingEnable()
{
    pictureModelingEnableIsSet_ = false;
}

bool StyleExtraMeta::isEditEnable() const
{
    return editEnable_;
}

void StyleExtraMeta::setEditEnable(bool value)
{
    editEnable_ = value;
    editEnableIsSet_ = true;
}

bool StyleExtraMeta::editEnableIsSet() const
{
    return editEnableIsSet_;
}

void StyleExtraMeta::unseteditEnable()
{
    editEnableIsSet_ = false;
}

std::string StyleExtraMeta::getEditEngine() const
{
    return editEngine_;
}

void StyleExtraMeta::setEditEngine(const std::string& value)
{
    editEngine_ = value;
    editEngineIsSet_ = true;
}

bool StyleExtraMeta::editEngineIsSet() const
{
    return editEngineIsSet_;
}

void StyleExtraMeta::unseteditEngine()
{
    editEngineIsSet_ = false;
}

std::string StyleExtraMeta::getModelId() const
{
    return modelId_;
}

void StyleExtraMeta::setModelId(const std::string& value)
{
    modelId_ = value;
    modelIdIsSet_ = true;
}

bool StyleExtraMeta::modelIdIsSet() const
{
    return modelIdIsSet_;
}

void StyleExtraMeta::unsetmodelId()
{
    modelIdIsSet_ = false;
}

}
}
}
}
}


