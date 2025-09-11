

#include "huaweicloud/functiongraph/v2/model/ShowAppTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowAppTemplateResponse::ShowAppTemplateResponse()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    params_ = "";
    paramsIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
    deployCount_ = 0L;
    deployCountIsSet_ = false;
    version_ = 0L;
    versionIsSet_ = false;
    templateGuide_ = "";
    templateGuideIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    resourcesIsSet_ = false;
}

ShowAppTemplateResponse::~ShowAppTemplateResponse() = default;

void ShowAppTemplateResponse::validate()
{
}

web::json::value ShowAppTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(deployCountIsSet_) {
        val[utility::conversions::to_string_t("deploy_count")] = ModelBase::toJson(deployCount_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(templateGuideIsSet_) {
        val[utility::conversions::to_string_t("template_guide")] = ModelBase::toJson(templateGuide_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ShowAppTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploy_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_guide"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_guide"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGuide(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<AppTemplateResourceDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::string ShowAppTemplateResponse::getName() const
{
    return name_;
}

void ShowAppTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowAppTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowAppTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowAppTemplateResponse::getDescription() const
{
    return description_;
}

void ShowAppTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowAppTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowAppTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowAppTemplateResponse::getRuntime() const
{
    return runtime_;
}

void ShowAppTemplateResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ShowAppTemplateResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ShowAppTemplateResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ShowAppTemplateResponse::getCategory() const
{
    return category_;
}

void ShowAppTemplateResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ShowAppTemplateResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void ShowAppTemplateResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ShowAppTemplateResponse::getParams() const
{
    return params_;
}

void ShowAppTemplateResponse::setParams(const std::string& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ShowAppTemplateResponse::paramsIsSet() const
{
    return paramsIsSet_;
}

void ShowAppTemplateResponse::unsetparams()
{
    paramsIsSet_ = false;
}

std::string ShowAppTemplateResponse::getImage() const
{
    return image_;
}

void ShowAppTemplateResponse::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ShowAppTemplateResponse::imageIsSet() const
{
    return imageIsSet_;
}

void ShowAppTemplateResponse::unsetimage()
{
    imageIsSet_ = false;
}

int64_t ShowAppTemplateResponse::getDeployCount() const
{
    return deployCount_;
}

void ShowAppTemplateResponse::setDeployCount(int64_t value)
{
    deployCount_ = value;
    deployCountIsSet_ = true;
}

bool ShowAppTemplateResponse::deployCountIsSet() const
{
    return deployCountIsSet_;
}

void ShowAppTemplateResponse::unsetdeployCount()
{
    deployCountIsSet_ = false;
}

int64_t ShowAppTemplateResponse::getVersion() const
{
    return version_;
}

void ShowAppTemplateResponse::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowAppTemplateResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowAppTemplateResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowAppTemplateResponse::getTemplateGuide() const
{
    return templateGuide_;
}

void ShowAppTemplateResponse::setTemplateGuide(const std::string& value)
{
    templateGuide_ = value;
    templateGuideIsSet_ = true;
}

bool ShowAppTemplateResponse::templateGuideIsSet() const
{
    return templateGuideIsSet_;
}

void ShowAppTemplateResponse::unsettemplateGuide()
{
    templateGuideIsSet_ = false;
}

int64_t ShowAppTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void ShowAppTemplateResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowAppTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowAppTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowAppTemplateResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowAppTemplateResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowAppTemplateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowAppTemplateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<AppTemplateResourceDetail>& ShowAppTemplateResponse::getResources()
{
    return resources_;
}

void ShowAppTemplateResponse::setResources(const std::vector<AppTemplateResourceDetail>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowAppTemplateResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowAppTemplateResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


