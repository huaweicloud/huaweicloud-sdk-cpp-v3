

#include "huaweicloud/codeartspipeline/v2/model/Source.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Source::Source()
{
    codehubName_ = "";
    codehubNameIsSet_ = false;
    branchesIsSet_ = false;
    scmType_ = "";
    scmTypeIsSet_ = false;
    hookFlag_ = false;
    hookFlagIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    codehubId_ = "";
    codehubIdIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    branchListIsSet_ = false;
    initId_ = "";
    initIdIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
}

Source::~Source() = default;

void Source::validate()
{
}

web::json::value Source::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codehubNameIsSet_) {
        val[utility::conversions::to_string_t("codehub_name")] = ModelBase::toJson(codehubName_);
    }
    if(branchesIsSet_) {
        val[utility::conversions::to_string_t("branches")] = ModelBase::toJson(branches_);
    }
    if(scmTypeIsSet_) {
        val[utility::conversions::to_string_t("scm_type")] = ModelBase::toJson(scmType_);
    }
    if(hookFlagIsSet_) {
        val[utility::conversions::to_string_t("hook_flag")] = ModelBase::toJson(hookFlag_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(codehubIdIsSet_) {
        val[utility::conversions::to_string_t("codehub_id")] = ModelBase::toJson(codehubId_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(branchListIsSet_) {
        val[utility::conversions::to_string_t("branch_list")] = ModelBase::toJson(branchList_);
    }
    if(initIdIsSet_) {
        val[utility::conversions::to_string_t("init_id")] = ModelBase::toJson(initId_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }

    return val;
}
bool Source::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("codehub_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codehub_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodehubName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hook_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("codehub_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codehub_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodehubId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("init_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("init_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
        }
    }
    return ok;
}


std::string Source::getCodehubName() const
{
    return codehubName_;
}

void Source::setCodehubName(const std::string& value)
{
    codehubName_ = value;
    codehubNameIsSet_ = true;
}

bool Source::codehubNameIsSet() const
{
    return codehubNameIsSet_;
}

void Source::unsetcodehubName()
{
    codehubNameIsSet_ = false;
}

std::vector<std::string>& Source::getBranches()
{
    return branches_;
}

void Source::setBranches(const std::vector<std::string>& value)
{
    branches_ = value;
    branchesIsSet_ = true;
}

bool Source::branchesIsSet() const
{
    return branchesIsSet_;
}

void Source::unsetbranches()
{
    branchesIsSet_ = false;
}

std::string Source::getScmType() const
{
    return scmType_;
}

void Source::setScmType(const std::string& value)
{
    scmType_ = value;
    scmTypeIsSet_ = true;
}

bool Source::scmTypeIsSet() const
{
    return scmTypeIsSet_;
}

void Source::unsetscmType()
{
    scmTypeIsSet_ = false;
}

bool Source::isHookFlag() const
{
    return hookFlag_;
}

void Source::setHookFlag(bool value)
{
    hookFlag_ = value;
    hookFlagIsSet_ = true;
}

bool Source::hookFlagIsSet() const
{
    return hookFlagIsSet_;
}

void Source::unsethookFlag()
{
    hookFlagIsSet_ = false;
}

std::string Source::getBranch() const
{
    return branch_;
}

void Source::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool Source::branchIsSet() const
{
    return branchIsSet_;
}

void Source::unsetbranch()
{
    branchIsSet_ = false;
}

std::string Source::getGitUrl() const
{
    return gitUrl_;
}

void Source::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool Source::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void Source::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string Source::getCodehubId() const
{
    return codehubId_;
}

void Source::setCodehubId(const std::string& value)
{
    codehubId_ = value;
    codehubIdIsSet_ = true;
}

bool Source::codehubIdIsSet() const
{
    return codehubIdIsSet_;
}

void Source::unsetcodehubId()
{
    codehubIdIsSet_ = false;
}

std::string Source::getWebUrl() const
{
    return webUrl_;
}

void Source::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool Source::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void Source::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::vector<std::string>& Source::getBranchList()
{
    return branchList_;
}

void Source::setBranchList(const std::vector<std::string>& value)
{
    branchList_ = value;
    branchListIsSet_ = true;
}

bool Source::branchListIsSet() const
{
    return branchListIsSet_;
}

void Source::unsetbranchList()
{
    branchListIsSet_ = false;
}

std::string Source::getInitId() const
{
    return initId_;
}

void Source::setInitId(const std::string& value)
{
    initId_ = value;
    initIdIsSet_ = true;
}

bool Source::initIdIsSet() const
{
    return initIdIsSet_;
}

void Source::unsetinitId()
{
    initIdIsSet_ = false;
}

bool Source::isDisable() const
{
    return disable_;
}

void Source::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool Source::disableIsSet() const
{
    return disableIsSet_;
}

void Source::unsetdisable()
{
    disableIsSet_ = false;
}

}
}
}
}
}


