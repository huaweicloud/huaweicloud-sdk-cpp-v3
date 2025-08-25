

#include "huaweicloud/cce/v3/model/MigrateNodeExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodeExtendParam::MigrateNodeExtendParam()
{
    maxPods_ = 0;
    maxPodsIsSet_ = false;
    dockerLVMConfigOverride_ = "";
    dockerLVMConfigOverrideIsSet_ = false;
    alphaCcePreInstall_ = "";
    alphaCcePreInstallIsSet_ = false;
    alphaCcePostInstall_ = "";
    alphaCcePostInstallIsSet_ = false;
    alphaCceNodeImageID_ = "";
    alphaCceNodeImageIDIsSet_ = false;
}

MigrateNodeExtendParam::~MigrateNodeExtendParam() = default;

void MigrateNodeExtendParam::validate()
{
}

web::json::value MigrateNodeExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxPodsIsSet_) {
        val[utility::conversions::to_string_t("maxPods")] = ModelBase::toJson(maxPods_);
    }
    if(dockerLVMConfigOverrideIsSet_) {
        val[utility::conversions::to_string_t("DockerLVMConfigOverride")] = ModelBase::toJson(dockerLVMConfigOverride_);
    }
    if(alphaCcePreInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/preInstall")] = ModelBase::toJson(alphaCcePreInstall_);
    }
    if(alphaCcePostInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/postInstall")] = ModelBase::toJson(alphaCcePostInstall_);
    }
    if(alphaCceNodeImageIDIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/NodeImageID")] = ModelBase::toJson(alphaCceNodeImageID_);
    }

    return val;
}
bool MigrateNodeExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("maxPods"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxPods"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPods(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DockerLVMConfigOverride"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DockerLVMConfigOverride"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerLVMConfigOverride(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/preInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/preInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePreInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/postInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/postInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePostInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/NodeImageID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/NodeImageID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCceNodeImageID(refVal);
        }
    }
    return ok;
}


int32_t MigrateNodeExtendParam::getMaxPods() const
{
    return maxPods_;
}

void MigrateNodeExtendParam::setMaxPods(int32_t value)
{
    maxPods_ = value;
    maxPodsIsSet_ = true;
}

bool MigrateNodeExtendParam::maxPodsIsSet() const
{
    return maxPodsIsSet_;
}

void MigrateNodeExtendParam::unsetmaxPods()
{
    maxPodsIsSet_ = false;
}

std::string MigrateNodeExtendParam::getDockerLVMConfigOverride() const
{
    return dockerLVMConfigOverride_;
}

void MigrateNodeExtendParam::setDockerLVMConfigOverride(const std::string& value)
{
    dockerLVMConfigOverride_ = value;
    dockerLVMConfigOverrideIsSet_ = true;
}

bool MigrateNodeExtendParam::dockerLVMConfigOverrideIsSet() const
{
    return dockerLVMConfigOverrideIsSet_;
}

void MigrateNodeExtendParam::unsetdockerLVMConfigOverride()
{
    dockerLVMConfigOverrideIsSet_ = false;
}

std::string MigrateNodeExtendParam::getAlphaCcePreInstall() const
{
    return alphaCcePreInstall_;
}

void MigrateNodeExtendParam::setAlphaCcePreInstall(const std::string& value)
{
    alphaCcePreInstall_ = value;
    alphaCcePreInstallIsSet_ = true;
}

bool MigrateNodeExtendParam::alphaCcePreInstallIsSet() const
{
    return alphaCcePreInstallIsSet_;
}

void MigrateNodeExtendParam::unsetalphaCcePreInstall()
{
    alphaCcePreInstallIsSet_ = false;
}

std::string MigrateNodeExtendParam::getAlphaCcePostInstall() const
{
    return alphaCcePostInstall_;
}

void MigrateNodeExtendParam::setAlphaCcePostInstall(const std::string& value)
{
    alphaCcePostInstall_ = value;
    alphaCcePostInstallIsSet_ = true;
}

bool MigrateNodeExtendParam::alphaCcePostInstallIsSet() const
{
    return alphaCcePostInstallIsSet_;
}

void MigrateNodeExtendParam::unsetalphaCcePostInstall()
{
    alphaCcePostInstallIsSet_ = false;
}

std::string MigrateNodeExtendParam::getAlphaCceNodeImageID() const
{
    return alphaCceNodeImageID_;
}

void MigrateNodeExtendParam::setAlphaCceNodeImageID(const std::string& value)
{
    alphaCceNodeImageID_ = value;
    alphaCceNodeImageIDIsSet_ = true;
}

bool MigrateNodeExtendParam::alphaCceNodeImageIDIsSet() const
{
    return alphaCceNodeImageIDIsSet_;
}

void MigrateNodeExtendParam::unsetalphaCceNodeImageID()
{
    alphaCceNodeImageIDIsSet_ = false;
}

}
}
}
}
}


