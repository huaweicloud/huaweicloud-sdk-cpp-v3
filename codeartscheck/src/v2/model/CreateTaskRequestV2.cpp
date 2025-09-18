

#include "huaweicloud/codeartscheck/v2/model/CreateTaskRequestV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CreateTaskRequestV2::CreateTaskRequestV2()
{
    checkTypeIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    gitBranch_ = "";
    gitBranchIsSet_ = false;
    languageIsSet_ = false;
    ruleSetsIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    accessToken_ = "";
    accessTokenIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
    incConfigIsSet_ = false;
    enableFossbot_ = false;
    enableFossbotIsSet_ = false;
    resourcePoolId_ = "";
    resourcePoolIdIsSet_ = false;
}

CreateTaskRequestV2::~CreateTaskRequestV2() = default;

void CreateTaskRequestV2::validate()
{
}

web::json::value CreateTaskRequestV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkTypeIsSet_) {
        val[utility::conversions::to_string_t("check_type")] = ModelBase::toJson(checkType_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(gitBranchIsSet_) {
        val[utility::conversions::to_string_t("git_branch")] = ModelBase::toJson(gitBranch_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(ruleSetsIsSet_) {
        val[utility::conversions::to_string_t("rule_sets")] = ModelBase::toJson(ruleSets_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(accessTokenIsSet_) {
        val[utility::conversions::to_string_t("access_token")] = ModelBase::toJson(accessToken_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }
    if(incConfigIsSet_) {
        val[utility::conversions::to_string_t("inc_config")] = ModelBase::toJson(incConfig_);
    }
    if(enableFossbotIsSet_) {
        val[utility::conversions::to_string_t("enable_fossbot")] = ModelBase::toJson(enableFossbot_);
    }
    if(resourcePoolIdIsSet_) {
        val[utility::conversions::to_string_t("resource_pool_id")] = ModelBase::toJson(resourcePoolId_);
    }

    return val;
}
bool CreateTaskRequestV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_sets"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleSetV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inc_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inc_config"));
        if(!fieldValue.is_null())
        {
            IncConfigV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_fossbot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_fossbot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableFossbot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePoolId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateTaskRequestV2::getCheckType()
{
    return checkType_;
}

void CreateTaskRequestV2::setCheckType(const std::vector<std::string>& value)
{
    checkType_ = value;
    checkTypeIsSet_ = true;
}

bool CreateTaskRequestV2::checkTypeIsSet() const
{
    return checkTypeIsSet_;
}

void CreateTaskRequestV2::unsetcheckType()
{
    checkTypeIsSet_ = false;
}

std::string CreateTaskRequestV2::getGitUrl() const
{
    return gitUrl_;
}

void CreateTaskRequestV2::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool CreateTaskRequestV2::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void CreateTaskRequestV2::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string CreateTaskRequestV2::getGitBranch() const
{
    return gitBranch_;
}

void CreateTaskRequestV2::setGitBranch(const std::string& value)
{
    gitBranch_ = value;
    gitBranchIsSet_ = true;
}

bool CreateTaskRequestV2::gitBranchIsSet() const
{
    return gitBranchIsSet_;
}

void CreateTaskRequestV2::unsetgitBranch()
{
    gitBranchIsSet_ = false;
}

std::vector<std::string>& CreateTaskRequestV2::getLanguage()
{
    return language_;
}

void CreateTaskRequestV2::setLanguage(const std::vector<std::string>& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateTaskRequestV2::languageIsSet() const
{
    return languageIsSet_;
}

void CreateTaskRequestV2::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<RuleSetV2>& CreateTaskRequestV2::getRuleSets()
{
    return ruleSets_;
}

void CreateTaskRequestV2::setRuleSets(const std::vector<RuleSetV2>& value)
{
    ruleSets_ = value;
    ruleSetsIsSet_ = true;
}

bool CreateTaskRequestV2::ruleSetsIsSet() const
{
    return ruleSetsIsSet_;
}

void CreateTaskRequestV2::unsetruleSets()
{
    ruleSetsIsSet_ = false;
}

std::string CreateTaskRequestV2::getTaskType() const
{
    return taskType_;
}

void CreateTaskRequestV2::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool CreateTaskRequestV2::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void CreateTaskRequestV2::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string CreateTaskRequestV2::getUsername() const
{
    return username_;
}

void CreateTaskRequestV2::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool CreateTaskRequestV2::usernameIsSet() const
{
    return usernameIsSet_;
}

void CreateTaskRequestV2::unsetusername()
{
    usernameIsSet_ = false;
}

std::string CreateTaskRequestV2::getAccessToken() const
{
    return accessToken_;
}

void CreateTaskRequestV2::setAccessToken(const std::string& value)
{
    accessToken_ = value;
    accessTokenIsSet_ = true;
}

bool CreateTaskRequestV2::accessTokenIsSet() const
{
    return accessTokenIsSet_;
}

void CreateTaskRequestV2::unsetaccessToken()
{
    accessTokenIsSet_ = false;
}

std::string CreateTaskRequestV2::getEndpointId() const
{
    return endpointId_;
}

void CreateTaskRequestV2::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool CreateTaskRequestV2::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void CreateTaskRequestV2::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

IncConfigV2 CreateTaskRequestV2::getIncConfig() const
{
    return incConfig_;
}

void CreateTaskRequestV2::setIncConfig(const IncConfigV2& value)
{
    incConfig_ = value;
    incConfigIsSet_ = true;
}

bool CreateTaskRequestV2::incConfigIsSet() const
{
    return incConfigIsSet_;
}

void CreateTaskRequestV2::unsetincConfig()
{
    incConfigIsSet_ = false;
}

bool CreateTaskRequestV2::isEnableFossbot() const
{
    return enableFossbot_;
}

void CreateTaskRequestV2::setEnableFossbot(bool value)
{
    enableFossbot_ = value;
    enableFossbotIsSet_ = true;
}

bool CreateTaskRequestV2::enableFossbotIsSet() const
{
    return enableFossbotIsSet_;
}

void CreateTaskRequestV2::unsetenableFossbot()
{
    enableFossbotIsSet_ = false;
}

std::string CreateTaskRequestV2::getResourcePoolId() const
{
    return resourcePoolId_;
}

void CreateTaskRequestV2::setResourcePoolId(const std::string& value)
{
    resourcePoolId_ = value;
    resourcePoolIdIsSet_ = true;
}

bool CreateTaskRequestV2::resourcePoolIdIsSet() const
{
    return resourcePoolIdIsSet_;
}

void CreateTaskRequestV2::unsetresourcePoolId()
{
    resourcePoolIdIsSet_ = false;
}

}
}
}
}
}


