

#include "huaweicloud/codeartspipeline/v2/model/Artifact.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Artifact::Artifact()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    artifactVersion_ = "";
    artifactVersionIsSet_ = false;
    uploadTarget_ = "";
    uploadTargetIsSet_ = false;
    artifactPackageType_ = "";
    artifactPackageTypeIsSet_ = false;
    artifactUri_ = "";
    artifactUriIsSet_ = false;
    artifactDownloadUrlWithId_ = "";
    artifactDownloadUrlWithIdIsSet_ = false;
    artifactType_ = "";
    artifactTypeIsSet_ = false;
    hashCodeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = "";
    buildNoIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
}

Artifact::~Artifact() = default;

void Artifact::validate()
{
}

web::json::value Artifact::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(artifactVersionIsSet_) {
        val[utility::conversions::to_string_t("artifact_version")] = ModelBase::toJson(artifactVersion_);
    }
    if(uploadTargetIsSet_) {
        val[utility::conversions::to_string_t("upload_target")] = ModelBase::toJson(uploadTarget_);
    }
    if(artifactPackageTypeIsSet_) {
        val[utility::conversions::to_string_t("artifact_package_type")] = ModelBase::toJson(artifactPackageType_);
    }
    if(artifactUriIsSet_) {
        val[utility::conversions::to_string_t("artifact_uri")] = ModelBase::toJson(artifactUri_);
    }
    if(artifactDownloadUrlWithIdIsSet_) {
        val[utility::conversions::to_string_t("artifact_download_url_with_id")] = ModelBase::toJson(artifactDownloadUrlWithId_);
    }
    if(artifactTypeIsSet_) {
        val[utility::conversions::to_string_t("artifact_type")] = ModelBase::toJson(artifactType_);
    }
    if(hashCodeIsSet_) {
        val[utility::conversions::to_string_t("hash_code")] = ModelBase::toJson(hashCode_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }

    return val;
}
bool Artifact::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upload_target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactPackageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_download_url_with_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_download_url_with_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactDownloadUrlWithId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hash_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hash_code"));
        if(!fieldValue.is_null())
        {
            std::vector<Artifact_hash_code> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHashCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    return ok;
}


std::string Artifact::getProjectId() const
{
    return projectId_;
}

void Artifact::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Artifact::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Artifact::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Artifact::getName() const
{
    return name_;
}

void Artifact::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Artifact::nameIsSet() const
{
    return nameIsSet_;
}

void Artifact::unsetname()
{
    nameIsSet_ = false;
}

std::string Artifact::getArtifactVersion() const
{
    return artifactVersion_;
}

void Artifact::setArtifactVersion(const std::string& value)
{
    artifactVersion_ = value;
    artifactVersionIsSet_ = true;
}

bool Artifact::artifactVersionIsSet() const
{
    return artifactVersionIsSet_;
}

void Artifact::unsetartifactVersion()
{
    artifactVersionIsSet_ = false;
}

std::string Artifact::getUploadTarget() const
{
    return uploadTarget_;
}

void Artifact::setUploadTarget(const std::string& value)
{
    uploadTarget_ = value;
    uploadTargetIsSet_ = true;
}

bool Artifact::uploadTargetIsSet() const
{
    return uploadTargetIsSet_;
}

void Artifact::unsetuploadTarget()
{
    uploadTargetIsSet_ = false;
}

std::string Artifact::getArtifactPackageType() const
{
    return artifactPackageType_;
}

void Artifact::setArtifactPackageType(const std::string& value)
{
    artifactPackageType_ = value;
    artifactPackageTypeIsSet_ = true;
}

bool Artifact::artifactPackageTypeIsSet() const
{
    return artifactPackageTypeIsSet_;
}

void Artifact::unsetartifactPackageType()
{
    artifactPackageTypeIsSet_ = false;
}

std::string Artifact::getArtifactUri() const
{
    return artifactUri_;
}

void Artifact::setArtifactUri(const std::string& value)
{
    artifactUri_ = value;
    artifactUriIsSet_ = true;
}

bool Artifact::artifactUriIsSet() const
{
    return artifactUriIsSet_;
}

void Artifact::unsetartifactUri()
{
    artifactUriIsSet_ = false;
}

std::string Artifact::getArtifactDownloadUrlWithId() const
{
    return artifactDownloadUrlWithId_;
}

void Artifact::setArtifactDownloadUrlWithId(const std::string& value)
{
    artifactDownloadUrlWithId_ = value;
    artifactDownloadUrlWithIdIsSet_ = true;
}

bool Artifact::artifactDownloadUrlWithIdIsSet() const
{
    return artifactDownloadUrlWithIdIsSet_;
}

void Artifact::unsetartifactDownloadUrlWithId()
{
    artifactDownloadUrlWithIdIsSet_ = false;
}

std::string Artifact::getArtifactType() const
{
    return artifactType_;
}

void Artifact::setArtifactType(const std::string& value)
{
    artifactType_ = value;
    artifactTypeIsSet_ = true;
}

bool Artifact::artifactTypeIsSet() const
{
    return artifactTypeIsSet_;
}

void Artifact::unsetartifactType()
{
    artifactTypeIsSet_ = false;
}

std::vector<Artifact_hash_code>& Artifact::getHashCode()
{
    return hashCode_;
}

void Artifact::setHashCode(const std::vector<Artifact_hash_code>& value)
{
    hashCode_ = value;
    hashCodeIsSet_ = true;
}

bool Artifact::hashCodeIsSet() const
{
    return hashCodeIsSet_;
}

void Artifact::unsethashCode()
{
    hashCodeIsSet_ = false;
}

std::string Artifact::getJobId() const
{
    return jobId_;
}

void Artifact::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Artifact::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Artifact::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Artifact::getBuildNo() const
{
    return buildNo_;
}

void Artifact::setBuildNo(const std::string& value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool Artifact::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void Artifact::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string Artifact::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void Artifact::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool Artifact::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void Artifact::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

std::string Artifact::getFileSize() const
{
    return fileSize_;
}

void Artifact::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool Artifact::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void Artifact::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

}
}
}
}
}


