

#include "huaweicloud/iotda/v5/model/ObsForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ObsForwarding::ObsForwarding()
{
    regionName_ = "";
    regionNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

ObsForwarding::~ObsForwarding() = default;

void ObsForwarding::validate()
{
}

web::json::value ObsForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool ObsForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    return ok;
}


std::string ObsForwarding::getRegionName() const
{
    return regionName_;
}

void ObsForwarding::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ObsForwarding::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ObsForwarding::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ObsForwarding::getProjectId() const
{
    return projectId_;
}

void ObsForwarding::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ObsForwarding::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ObsForwarding::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ObsForwarding::getBucketName() const
{
    return bucketName_;
}

void ObsForwarding::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ObsForwarding::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ObsForwarding::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ObsForwarding::getLocation() const
{
    return location_;
}

void ObsForwarding::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ObsForwarding::locationIsSet() const
{
    return locationIsSet_;
}

void ObsForwarding::unsetlocation()
{
    locationIsSet_ = false;
}

std::string ObsForwarding::getFilePath() const
{
    return filePath_;
}

void ObsForwarding::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ObsForwarding::filePathIsSet() const
{
    return filePathIsSet_;
}

void ObsForwarding::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


