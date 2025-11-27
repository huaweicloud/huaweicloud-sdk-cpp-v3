

#include "huaweicloud/dds/v3/model/ShowBackupDownloadLinkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowBackupDownloadLinkRequest::ShowBackupDownloadLinkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
}

ShowBackupDownloadLinkRequest::~ShowBackupDownloadLinkRequest() = default;

void ShowBackupDownloadLinkRequest::validate()
{
}

web::json::value ShowBackupDownloadLinkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}
bool ShowBackupDownloadLinkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    return ok;
}


std::string ShowBackupDownloadLinkRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupDownloadLinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupDownloadLinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupDownloadLinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowBackupDownloadLinkRequest::getBackupId() const
{
    return backupId_;
}

void ShowBackupDownloadLinkRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowBackupDownloadLinkRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowBackupDownloadLinkRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


