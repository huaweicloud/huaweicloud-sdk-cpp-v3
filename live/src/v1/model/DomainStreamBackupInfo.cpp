

#include "huaweicloud/live/v1/model/DomainStreamBackupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DomainStreamBackupInfo::DomainStreamBackupInfo()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    streamBackupEnable_ = false;
    streamBackupEnableIsSet_ = false;
}

DomainStreamBackupInfo::~DomainStreamBackupInfo() = default;

void DomainStreamBackupInfo::validate()
{
}

web::json::value DomainStreamBackupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(streamBackupEnableIsSet_) {
        val[utility::conversions::to_string_t("stream_backup_enable")] = ModelBase::toJson(streamBackupEnable_);
    }

    return val;
}
bool DomainStreamBackupInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_backup_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_backup_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamBackupEnable(refVal);
        }
    }
    return ok;
}


std::string DomainStreamBackupInfo::getPublishDomain() const
{
    return publishDomain_;
}

void DomainStreamBackupInfo::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool DomainStreamBackupInfo::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void DomainStreamBackupInfo::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

bool DomainStreamBackupInfo::isStreamBackupEnable() const
{
    return streamBackupEnable_;
}

void DomainStreamBackupInfo::setStreamBackupEnable(bool value)
{
    streamBackupEnable_ = value;
    streamBackupEnableIsSet_ = true;
}

bool DomainStreamBackupInfo::streamBackupEnableIsSet() const
{
    return streamBackupEnableIsSet_;
}

void DomainStreamBackupInfo::unsetstreamBackupEnable()
{
    streamBackupEnableIsSet_ = false;
}

}
}
}
}
}


