

#include "huaweicloud/modelarts/v1/model/InferDeploymentVersionItemResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InferDeploymentVersionItemResp::InferDeploymentVersionItemResp()
{
    inferName_ = "";
    inferNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionStatus_ = "";
    versionStatusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createAt_ = utility::datetime();
    createAtIsSet_ = false;
    updateAt_ = utility::datetime();
    updateAtIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
}

InferDeploymentVersionItemResp::~InferDeploymentVersionItemResp() = default;

void InferDeploymentVersionItemResp::validate()
{
}

web::json::value InferDeploymentVersionItemResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inferNameIsSet_) {
        val[utility::conversions::to_string_t("infer_name")] = ModelBase::toJson(inferName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionStatusIsSet_) {
        val[utility::conversions::to_string_t("version_status")] = ModelBase::toJson(versionStatus_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }

    return val;
}
bool InferDeploymentVersionItemResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("infer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
        }
    }
    return ok;
}


std::string InferDeploymentVersionItemResp::getInferName() const
{
    return inferName_;
}

void InferDeploymentVersionItemResp::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool InferDeploymentVersionItemResp::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void InferDeploymentVersionItemResp::unsetinferName()
{
    inferNameIsSet_ = false;
}

std::string InferDeploymentVersionItemResp::getVersion() const
{
    return version_;
}

void InferDeploymentVersionItemResp::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InferDeploymentVersionItemResp::versionIsSet() const
{
    return versionIsSet_;
}

void InferDeploymentVersionItemResp::unsetversion()
{
    versionIsSet_ = false;
}

std::string InferDeploymentVersionItemResp::getVersionStatus() const
{
    return versionStatus_;
}

void InferDeploymentVersionItemResp::setVersionStatus(const std::string& value)
{
    versionStatus_ = value;
    versionStatusIsSet_ = true;
}

bool InferDeploymentVersionItemResp::versionStatusIsSet() const
{
    return versionStatusIsSet_;
}

void InferDeploymentVersionItemResp::unsetversionStatus()
{
    versionStatusIsSet_ = false;
}

std::string InferDeploymentVersionItemResp::getDescription() const
{
    return description_;
}

void InferDeploymentVersionItemResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool InferDeploymentVersionItemResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void InferDeploymentVersionItemResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime InferDeploymentVersionItemResp::getCreateAt() const
{
    return createAt_;
}

void InferDeploymentVersionItemResp::setCreateAt(const utility::datetime& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool InferDeploymentVersionItemResp::createAtIsSet() const
{
    return createAtIsSet_;
}

void InferDeploymentVersionItemResp::unsetcreateAt()
{
    createAtIsSet_ = false;
}

utility::datetime InferDeploymentVersionItemResp::getUpdateAt() const
{
    return updateAt_;
}

void InferDeploymentVersionItemResp::setUpdateAt(const utility::datetime& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool InferDeploymentVersionItemResp::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void InferDeploymentVersionItemResp::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string InferDeploymentVersionItemResp::getDeployType() const
{
    return deployType_;
}

void InferDeploymentVersionItemResp::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool InferDeploymentVersionItemResp::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void InferDeploymentVersionItemResp::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

}
}
}
}
}


