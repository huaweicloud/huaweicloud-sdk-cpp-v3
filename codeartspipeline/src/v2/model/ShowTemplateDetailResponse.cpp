

#include "huaweicloud/codeartspipeline/v2/model/ShowTemplateDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowTemplateDetailResponse::ShowTemplateDetailResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    isBuildIn_ = false;
    isBuildInIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastModifyTime_ = "";
    lastModifyTimeIsSet_ = false;
    isWatch_ = false;
    isWatchIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parameterIsSet_ = false;
    flowIsSet_ = false;
    statesIsSet_ = false;
}

ShowTemplateDetailResponse::~ShowTemplateDetailResponse() = default;

void ShowTemplateDetailResponse::validate()
{
}

web::json::value ShowTemplateDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(isBuildInIsSet_) {
        val[utility::conversions::to_string_t("is_build_in")] = ModelBase::toJson(isBuildIn_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastModifyTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modify_time")] = ModelBase::toJson(lastModifyTime_);
    }
    if(isWatchIsSet_) {
        val[utility::conversions::to_string_t("is_watch")] = ModelBase::toJson(isWatch_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(parameterIsSet_) {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(parameter_);
    }
    if(flowIsSet_) {
        val[utility::conversions::to_string_t("flow")] = ModelBase::toJson(flow_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }

    return val;
}
bool ShowTemplateDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_build_in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_build_in"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBuildIn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modify_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifyTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_watch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_watch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWatch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, TemplateState> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
        }
    }
    return ok;
}


std::string ShowTemplateDetailResponse::getTemplateId() const
{
    return templateId_;
}

void ShowTemplateDetailResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowTemplateDetailResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowTemplateDetailResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getTemplateName() const
{
    return templateName_;
}

void ShowTemplateDetailResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowTemplateDetailResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowTemplateDetailResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getTemplateType() const
{
    return templateType_;
}

void ShowTemplateDetailResponse::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool ShowTemplateDetailResponse::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void ShowTemplateDetailResponse::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getUserId() const
{
    return userId_;
}

void ShowTemplateDetailResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowTemplateDetailResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowTemplateDetailResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getUserName() const
{
    return userName_;
}

void ShowTemplateDetailResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowTemplateDetailResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowTemplateDetailResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowTemplateDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowTemplateDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowTemplateDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getDomainName() const
{
    return domainName_;
}

void ShowTemplateDetailResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowTemplateDetailResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowTemplateDetailResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

bool ShowTemplateDetailResponse::isIsBuildIn() const
{
    return isBuildIn_;
}

void ShowTemplateDetailResponse::setIsBuildIn(bool value)
{
    isBuildIn_ = value;
    isBuildInIsSet_ = true;
}

bool ShowTemplateDetailResponse::isBuildInIsSet() const
{
    return isBuildInIsSet_;
}

void ShowTemplateDetailResponse::unsetisBuildIn()
{
    isBuildInIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getRegion() const
{
    return region_;
}

void ShowTemplateDetailResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowTemplateDetailResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowTemplateDetailResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowTemplateDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTemplateDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTemplateDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getProjectName() const
{
    return projectName_;
}

void ShowTemplateDetailResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowTemplateDetailResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowTemplateDetailResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowTemplateDetailResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowTemplateDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowTemplateDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getLastModifyTime() const
{
    return lastModifyTime_;
}

void ShowTemplateDetailResponse::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool ShowTemplateDetailResponse::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void ShowTemplateDetailResponse::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

bool ShowTemplateDetailResponse::isIsWatch() const
{
    return isWatch_;
}

void ShowTemplateDetailResponse::setIsWatch(bool value)
{
    isWatch_ = value;
    isWatchIsSet_ = true;
}

bool ShowTemplateDetailResponse::isWatchIsSet() const
{
    return isWatchIsSet_;
}

void ShowTemplateDetailResponse::unsetisWatch()
{
    isWatchIsSet_ = false;
}

std::string ShowTemplateDetailResponse::getDescription() const
{
    return description_;
}

void ShowTemplateDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowTemplateDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowTemplateDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<TemplateParam>& ShowTemplateDetailResponse::getParameter()
{
    return parameter_;
}

void ShowTemplateDetailResponse::setParameter(const std::vector<TemplateParam>& value)
{
    parameter_ = value;
    parameterIsSet_ = true;
}

bool ShowTemplateDetailResponse::parameterIsSet() const
{
    return parameterIsSet_;
}

void ShowTemplateDetailResponse::unsetparameter()
{
    parameterIsSet_ = false;
}

std::map<std::string, std::map<std::string, std::string>>& ShowTemplateDetailResponse::getFlow()
{
    return flow_;
}

void ShowTemplateDetailResponse::setFlow(const std::map<std::string, std::map<std::string, std::string>>& value)
{
    flow_ = value;
    flowIsSet_ = true;
}

bool ShowTemplateDetailResponse::flowIsSet() const
{
    return flowIsSet_;
}

void ShowTemplateDetailResponse::unsetflow()
{
    flowIsSet_ = false;
}

std::map<std::string, TemplateState>& ShowTemplateDetailResponse::getStates()
{
    return states_;
}

void ShowTemplateDetailResponse::setStates(const std::map<std::string, TemplateState>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool ShowTemplateDetailResponse::statesIsSet() const
{
    return statesIsSet_;
}

void ShowTemplateDetailResponse::unsetstates()
{
    statesIsSet_ = false;
}

}
}
}
}
}


