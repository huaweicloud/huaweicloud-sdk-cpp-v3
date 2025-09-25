

#include "huaweicloud/codeartspipeline/v2/model/TemplateView.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




TemplateView::TemplateView()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    templateUrl_ = "";
    templateUrlIsSet_ = false;
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
    canUpdate_ = false;
    canUpdateIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    needHub_ = false;
    needHubIsSet_ = false;
}

TemplateView::~TemplateView() = default;

void TemplateView::validate()
{
}

web::json::value TemplateView::toJson() const
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
    if(templateUrlIsSet_) {
        val[utility::conversions::to_string_t("template_url")] = ModelBase::toJson(templateUrl_);
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
    if(canUpdateIsSet_) {
        val[utility::conversions::to_string_t("can_update")] = ModelBase::toJson(canUpdate_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(needHubIsSet_) {
        val[utility::conversions::to_string_t("need_hub")] = ModelBase::toJson(needHub_);
    }

    return val;
}
bool TemplateView::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_update"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_update"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanUpdate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_hub"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_hub"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedHub(refVal);
        }
    }
    return ok;
}


std::string TemplateView::getTemplateId() const
{
    return templateId_;
}

void TemplateView::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TemplateView::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TemplateView::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string TemplateView::getTemplateName() const
{
    return templateName_;
}

void TemplateView::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool TemplateView::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void TemplateView::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string TemplateView::getTemplateType() const
{
    return templateType_;
}

void TemplateView::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool TemplateView::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void TemplateView::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string TemplateView::getTemplateUrl() const
{
    return templateUrl_;
}

void TemplateView::setTemplateUrl(const std::string& value)
{
    templateUrl_ = value;
    templateUrlIsSet_ = true;
}

bool TemplateView::templateUrlIsSet() const
{
    return templateUrlIsSet_;
}

void TemplateView::unsettemplateUrl()
{
    templateUrlIsSet_ = false;
}

std::string TemplateView::getUserId() const
{
    return userId_;
}

void TemplateView::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool TemplateView::userIdIsSet() const
{
    return userIdIsSet_;
}

void TemplateView::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string TemplateView::getUserName() const
{
    return userName_;
}

void TemplateView::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TemplateView::userNameIsSet() const
{
    return userNameIsSet_;
}

void TemplateView::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string TemplateView::getDomainId() const
{
    return domainId_;
}

void TemplateView::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool TemplateView::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void TemplateView::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string TemplateView::getDomainName() const
{
    return domainName_;
}

void TemplateView::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool TemplateView::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void TemplateView::unsetdomainName()
{
    domainNameIsSet_ = false;
}

bool TemplateView::isIsBuildIn() const
{
    return isBuildIn_;
}

void TemplateView::setIsBuildIn(bool value)
{
    isBuildIn_ = value;
    isBuildInIsSet_ = true;
}

bool TemplateView::isBuildInIsSet() const
{
    return isBuildInIsSet_;
}

void TemplateView::unsetisBuildIn()
{
    isBuildInIsSet_ = false;
}

std::string TemplateView::getRegion() const
{
    return region_;
}

void TemplateView::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TemplateView::regionIsSet() const
{
    return regionIsSet_;
}

void TemplateView::unsetregion()
{
    regionIsSet_ = false;
}

std::string TemplateView::getProjectId() const
{
    return projectId_;
}

void TemplateView::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TemplateView::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TemplateView::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TemplateView::getProjectName() const
{
    return projectName_;
}

void TemplateView::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TemplateView::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TemplateView::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TemplateView::getCreateTime() const
{
    return createTime_;
}

void TemplateView::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TemplateView::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TemplateView::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TemplateView::getLastModifyTime() const
{
    return lastModifyTime_;
}

void TemplateView::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool TemplateView::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void TemplateView::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

bool TemplateView::isIsWatch() const
{
    return isWatch_;
}

void TemplateView::setIsWatch(bool value)
{
    isWatch_ = value;
    isWatchIsSet_ = true;
}

bool TemplateView::isWatchIsSet() const
{
    return isWatchIsSet_;
}

void TemplateView::unsetisWatch()
{
    isWatchIsSet_ = false;
}

std::string TemplateView::getDescription() const
{
    return description_;
}

void TemplateView::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateView::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateView::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<TemplateParam>& TemplateView::getParameter()
{
    return parameter_;
}

void TemplateView::setParameter(const std::vector<TemplateParam>& value)
{
    parameter_ = value;
    parameterIsSet_ = true;
}

bool TemplateView::parameterIsSet() const
{
    return parameterIsSet_;
}

void TemplateView::unsetparameter()
{
    parameterIsSet_ = false;
}

std::map<std::string, std::map<std::string, std::string>>& TemplateView::getFlow()
{
    return flow_;
}

void TemplateView::setFlow(const std::map<std::string, std::map<std::string, std::string>>& value)
{
    flow_ = value;
    flowIsSet_ = true;
}

bool TemplateView::flowIsSet() const
{
    return flowIsSet_;
}

void TemplateView::unsetflow()
{
    flowIsSet_ = false;
}

std::map<std::string, TemplateState>& TemplateView::getStates()
{
    return states_;
}

void TemplateView::setStates(const std::map<std::string, TemplateState>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool TemplateView::statesIsSet() const
{
    return statesIsSet_;
}

void TemplateView::unsetstates()
{
    statesIsSet_ = false;
}

bool TemplateView::isCanUpdate() const
{
    return canUpdate_;
}

void TemplateView::setCanUpdate(bool value)
{
    canUpdate_ = value;
    canUpdateIsSet_ = true;
}

bool TemplateView::canUpdateIsSet() const
{
    return canUpdateIsSet_;
}

void TemplateView::unsetcanUpdate()
{
    canUpdateIsSet_ = false;
}

bool TemplateView::isCanDelete() const
{
    return canDelete_;
}

void TemplateView::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool TemplateView::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void TemplateView::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool TemplateView::isNeedHub() const
{
    return needHub_;
}

void TemplateView::setNeedHub(bool value)
{
    needHub_ = value;
    needHubIsSet_ = true;
}

bool TemplateView::needHubIsSet() const
{
    return needHubIsSet_;
}

void TemplateView::unsetneedHub()
{
    needHubIsSet_ = false;
}

}
}
}
}
}


