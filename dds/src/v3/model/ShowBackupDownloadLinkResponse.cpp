

#include "huaweicloud/dds/v3/model/ShowBackupDownloadLinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowBackupDownloadLinkResponse::ShowBackupDownloadLinkResponse()
{
    filesIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
}

ShowBackupDownloadLinkResponse::~ShowBackupDownloadLinkResponse() = default;

void ShowBackupDownloadLinkResponse::validate()
{
}

web::json::value ShowBackupDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }
    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }

    return val;
}
bool ShowBackupDownloadLinkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<GetBackupDownloadLinkResponseBody_files> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    return ok;
}


std::vector<GetBackupDownloadLinkResponseBody_files>& ShowBackupDownloadLinkResponse::getFiles()
{
    return files_;
}

void ShowBackupDownloadLinkResponse::setFiles(const std::vector<GetBackupDownloadLinkResponseBody_files>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ShowBackupDownloadLinkResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ShowBackupDownloadLinkResponse::unsetfiles()
{
    filesIsSet_ = false;
}

std::string ShowBackupDownloadLinkResponse::getBucket() const
{
    return bucket_;
}

void ShowBackupDownloadLinkResponse::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ShowBackupDownloadLinkResponse::bucketIsSet() const
{
    return bucketIsSet_;
}

void ShowBackupDownloadLinkResponse::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ShowBackupDownloadLinkResponse::getGroupId() const
{
    return groupId_;
}

void ShowBackupDownloadLinkResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowBackupDownloadLinkResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowBackupDownloadLinkResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowBackupDownloadLinkResponse::getGroupName() const
{
    return groupName_;
}

void ShowBackupDownloadLinkResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowBackupDownloadLinkResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowBackupDownloadLinkResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


