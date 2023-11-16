

#include "huaweicloud/codeartsbuild/v3/model/UpdateBuildJobScm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateBuildJobScm::UpdateBuildJobScm()
{
    branch_ = "";
    branchIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    scmType_ = "";
    scmTypeIsSet_ = false;
    isAutoBuild_ = false;
    isAutoBuildIsSet_ = false;
    buildType_ = "";
    buildTypeIsSet_ = false;
    depth_ = "";
    depthIsSet_ = false;
    endPointId_ = "";
    endPointIdIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
}

UpdateBuildJobScm::~UpdateBuildJobScm() = default;

void UpdateBuildJobScm::validate()
{
}

web::json::value UpdateBuildJobScm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(scmTypeIsSet_) {
        val[utility::conversions::to_string_t("scm_type")] = ModelBase::toJson(scmType_);
    }
    if(isAutoBuildIsSet_) {
        val[utility::conversions::to_string_t("is_auto_build")] = ModelBase::toJson(isAutoBuild_);
    }
    if(buildTypeIsSet_) {
        val[utility::conversions::to_string_t("build_type")] = ModelBase::toJson(buildType_);
    }
    if(depthIsSet_) {
        val[utility::conversions::to_string_t("depth")] = ModelBase::toJson(depth_);
    }
    if(endPointIdIsSet_) {
        val[utility::conversions::to_string_t("end_point_id")] = ModelBase::toJson(endPointId_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool UpdateBuildJobScm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_build"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_build"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoBuild(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_point_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_point_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndPointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string UpdateBuildJobScm::getBranch() const
{
    return branch_;
}

void UpdateBuildJobScm::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool UpdateBuildJobScm::branchIsSet() const
{
    return branchIsSet_;
}

void UpdateBuildJobScm::unsetbranch()
{
    branchIsSet_ = false;
}

std::string UpdateBuildJobScm::getUrl() const
{
    return url_;
}

void UpdateBuildJobScm::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UpdateBuildJobScm::urlIsSet() const
{
    return urlIsSet_;
}

void UpdateBuildJobScm::unseturl()
{
    urlIsSet_ = false;
}

std::string UpdateBuildJobScm::getRepoId() const
{
    return repoId_;
}

void UpdateBuildJobScm::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool UpdateBuildJobScm::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void UpdateBuildJobScm::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string UpdateBuildJobScm::getWebUrl() const
{
    return webUrl_;
}

void UpdateBuildJobScm::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool UpdateBuildJobScm::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void UpdateBuildJobScm::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string UpdateBuildJobScm::getScmType() const
{
    return scmType_;
}

void UpdateBuildJobScm::setScmType(const std::string& value)
{
    scmType_ = value;
    scmTypeIsSet_ = true;
}

bool UpdateBuildJobScm::scmTypeIsSet() const
{
    return scmTypeIsSet_;
}

void UpdateBuildJobScm::unsetscmType()
{
    scmTypeIsSet_ = false;
}

bool UpdateBuildJobScm::isIsAutoBuild() const
{
    return isAutoBuild_;
}

void UpdateBuildJobScm::setIsAutoBuild(bool value)
{
    isAutoBuild_ = value;
    isAutoBuildIsSet_ = true;
}

bool UpdateBuildJobScm::isAutoBuildIsSet() const
{
    return isAutoBuildIsSet_;
}

void UpdateBuildJobScm::unsetisAutoBuild()
{
    isAutoBuildIsSet_ = false;
}

std::string UpdateBuildJobScm::getBuildType() const
{
    return buildType_;
}

void UpdateBuildJobScm::setBuildType(const std::string& value)
{
    buildType_ = value;
    buildTypeIsSet_ = true;
}

bool UpdateBuildJobScm::buildTypeIsSet() const
{
    return buildTypeIsSet_;
}

void UpdateBuildJobScm::unsetbuildType()
{
    buildTypeIsSet_ = false;
}

std::string UpdateBuildJobScm::getDepth() const
{
    return depth_;
}

void UpdateBuildJobScm::setDepth(const std::string& value)
{
    depth_ = value;
    depthIsSet_ = true;
}

bool UpdateBuildJobScm::depthIsSet() const
{
    return depthIsSet_;
}

void UpdateBuildJobScm::unsetdepth()
{
    depthIsSet_ = false;
}

std::string UpdateBuildJobScm::getEndPointId() const
{
    return endPointId_;
}

void UpdateBuildJobScm::setEndPointId(const std::string& value)
{
    endPointId_ = value;
    endPointIdIsSet_ = true;
}

bool UpdateBuildJobScm::endPointIdIsSet() const
{
    return endPointIdIsSet_;
}

void UpdateBuildJobScm::unsetendPointId()
{
    endPointIdIsSet_ = false;
}

std::string UpdateBuildJobScm::getSource() const
{
    return source_;
}

void UpdateBuildJobScm::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool UpdateBuildJobScm::sourceIsSet() const
{
    return sourceIsSet_;
}

void UpdateBuildJobScm::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


