

#include "huaweicloud/codeartsbuild/v3/model/QueryTemplateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




QueryTemplateVo::QueryTemplateVo()
{
    stepsIsSet_ = false;
    actionsIsSet_ = false;
    autoUpdateSubModule_ = false;
    autoUpdateSubModuleIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
    imageSource_ = "";
    imageSourceIsSet_ = false;
}

QueryTemplateVo::~QueryTemplateVo() = default;

void QueryTemplateVo::validate()
{
}

web::json::value QueryTemplateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(autoUpdateSubModuleIsSet_) {
        val[utility::conversions::to_string_t("auto_update_sub_module")] = ModelBase::toJson(autoUpdateSubModule_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(imageSourceIsSet_) {
        val[utility::conversions::to_string_t("image_source")] = ModelBase::toJson(imageSource_);
    }

    return val;
}
bool QueryTemplateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobSteps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_update_sub_module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_update_sub_module"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoUpdateSubModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSource(refVal);
        }
    }
    return ok;
}


std::vector<CreateBuildJobSteps>& QueryTemplateVo::getSteps()
{
    return steps_;
}

void QueryTemplateVo::setSteps(const std::vector<CreateBuildJobSteps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool QueryTemplateVo::stepsIsSet() const
{
    return stepsIsSet_;
}

void QueryTemplateVo::unsetsteps()
{
    stepsIsSet_ = false;
}

Object QueryTemplateVo::getActions() const
{
    return actions_;
}

void QueryTemplateVo::setActions(const Object& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool QueryTemplateVo::actionsIsSet() const
{
    return actionsIsSet_;
}

void QueryTemplateVo::unsetactions()
{
    actionsIsSet_ = false;
}

bool QueryTemplateVo::isAutoUpdateSubModule() const
{
    return autoUpdateSubModule_;
}

void QueryTemplateVo::setAutoUpdateSubModule(bool value)
{
    autoUpdateSubModule_ = value;
    autoUpdateSubModuleIsSet_ = true;
}

bool QueryTemplateVo::autoUpdateSubModuleIsSet() const
{
    return autoUpdateSubModuleIsSet_;
}

void QueryTemplateVo::unsetautoUpdateSubModule()
{
    autoUpdateSubModuleIsSet_ = false;
}

std::string QueryTemplateVo::getImage() const
{
    return image_;
}

void QueryTemplateVo::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool QueryTemplateVo::imageIsSet() const
{
    return imageIsSet_;
}

void QueryTemplateVo::unsetimage()
{
    imageIsSet_ = false;
}

std::string QueryTemplateVo::getImageSource() const
{
    return imageSource_;
}

void QueryTemplateVo::setImageSource(const std::string& value)
{
    imageSource_ = value;
    imageSourceIsSet_ = true;
}

bool QueryTemplateVo::imageSourceIsSet() const
{
    return imageSourceIsSet_;
}

void QueryTemplateVo::unsetimageSource()
{
    imageSourceIsSet_ = false;
}

}
}
}
}
}


