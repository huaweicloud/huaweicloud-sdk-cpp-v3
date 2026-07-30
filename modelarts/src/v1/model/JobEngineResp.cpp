

#include "huaweicloud/modelarts/v1/model/JobEngineResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobEngineResp::JobEngineResp()
{
    engineId_ = "";
    engineIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    installSysPackages_ = false;
    installSysPackagesIsSet_ = false;
    imageRepoId_ = "";
    imageRepoIdIsSet_ = false;
}

JobEngineResp::~JobEngineResp() = default;

void JobEngineResp::validate()
{
}

web::json::value JobEngineResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIdIsSet_) {
        val[utility::conversions::to_string_t("engine_id")] = ModelBase::toJson(engineId_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(installSysPackagesIsSet_) {
        val[utility::conversions::to_string_t("install_sys_packages")] = ModelBase::toJson(installSysPackages_);
    }
    if(imageRepoIdIsSet_) {
        val[utility::conversions::to_string_t("image_repo_id")] = ModelBase::toJson(imageRepoId_);
    }

    return val;
}
bool JobEngineResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("install_sys_packages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("install_sys_packages"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstallSysPackages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageRepoId(refVal);
        }
    }
    return ok;
}


std::string JobEngineResp::getEngineId() const
{
    return engineId_;
}

void JobEngineResp::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool JobEngineResp::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void JobEngineResp::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string JobEngineResp::getEngineName() const
{
    return engineName_;
}

void JobEngineResp::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool JobEngineResp::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void JobEngineResp::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string JobEngineResp::getEngineVersion() const
{
    return engineVersion_;
}

void JobEngineResp::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool JobEngineResp::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void JobEngineResp::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string JobEngineResp::getImageUrl() const
{
    return imageUrl_;
}

void JobEngineResp::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool JobEngineResp::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void JobEngineResp::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

bool JobEngineResp::isInstallSysPackages() const
{
    return installSysPackages_;
}

void JobEngineResp::setInstallSysPackages(bool value)
{
    installSysPackages_ = value;
    installSysPackagesIsSet_ = true;
}

bool JobEngineResp::installSysPackagesIsSet() const
{
    return installSysPackagesIsSet_;
}

void JobEngineResp::unsetinstallSysPackages()
{
    installSysPackagesIsSet_ = false;
}

std::string JobEngineResp::getImageRepoId() const
{
    return imageRepoId_;
}

void JobEngineResp::setImageRepoId(const std::string& value)
{
    imageRepoId_ = value;
    imageRepoIdIsSet_ = true;
}

bool JobEngineResp::imageRepoIdIsSet() const
{
    return imageRepoIdIsSet_;
}

void JobEngineResp::unsetimageRepoId()
{
    imageRepoIdIsSet_ = false;
}

}
}
}
}
}


