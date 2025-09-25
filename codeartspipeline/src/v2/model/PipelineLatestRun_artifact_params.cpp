

#include "huaweicloud/codeartspipeline/v2/model/PipelineLatestRun_artifact_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineLatestRun_artifact_params::PipelineLatestRun_artifact_params()
{
    version_ = "";
    versionIsSet_ = false;
    branchFilter_ = "";
    branchFilterIsSet_ = false;
    packageName_ = "";
    packageNameIsSet_ = false;
    organization_ = "";
    organizationIsSet_ = false;
}

PipelineLatestRun_artifact_params::~PipelineLatestRun_artifact_params() = default;

void PipelineLatestRun_artifact_params::validate()
{
}

web::json::value PipelineLatestRun_artifact_params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(branchFilterIsSet_) {
        val[utility::conversions::to_string_t("branch_filter")] = ModelBase::toJson(branchFilter_);
    }
    if(packageNameIsSet_) {
        val[utility::conversions::to_string_t("package_name")] = ModelBase::toJson(packageName_);
    }
    if(organizationIsSet_) {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(organization_);
    }

    return val;
}
bool PipelineLatestRun_artifact_params::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganization(refVal);
        }
    }
    return ok;
}


std::string PipelineLatestRun_artifact_params::getVersion() const
{
    return version_;
}

void PipelineLatestRun_artifact_params::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PipelineLatestRun_artifact_params::versionIsSet() const
{
    return versionIsSet_;
}

void PipelineLatestRun_artifact_params::unsetversion()
{
    versionIsSet_ = false;
}

std::string PipelineLatestRun_artifact_params::getBranchFilter() const
{
    return branchFilter_;
}

void PipelineLatestRun_artifact_params::setBranchFilter(const std::string& value)
{
    branchFilter_ = value;
    branchFilterIsSet_ = true;
}

bool PipelineLatestRun_artifact_params::branchFilterIsSet() const
{
    return branchFilterIsSet_;
}

void PipelineLatestRun_artifact_params::unsetbranchFilter()
{
    branchFilterIsSet_ = false;
}

std::string PipelineLatestRun_artifact_params::getPackageName() const
{
    return packageName_;
}

void PipelineLatestRun_artifact_params::setPackageName(const std::string& value)
{
    packageName_ = value;
    packageNameIsSet_ = true;
}

bool PipelineLatestRun_artifact_params::packageNameIsSet() const
{
    return packageNameIsSet_;
}

void PipelineLatestRun_artifact_params::unsetpackageName()
{
    packageNameIsSet_ = false;
}

std::string PipelineLatestRun_artifact_params::getOrganization() const
{
    return organization_;
}

void PipelineLatestRun_artifact_params::setOrganization(const std::string& value)
{
    organization_ = value;
    organizationIsSet_ = true;
}

bool PipelineLatestRun_artifact_params::organizationIsSet() const
{
    return organizationIsSet_;
}

void PipelineLatestRun_artifact_params::unsetorganization()
{
    organizationIsSet_ = false;
}

}
}
}
}
}


