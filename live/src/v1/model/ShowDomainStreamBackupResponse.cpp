

#include "huaweicloud/live/v1/model/ShowDomainStreamBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainStreamBackupResponse::ShowDomainStreamBackupResponse()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    streamBackupEnable_ = false;
    streamBackupEnableIsSet_ = false;
}

ShowDomainStreamBackupResponse::~ShowDomainStreamBackupResponse() = default;

void ShowDomainStreamBackupResponse::validate()
{
}

web::json::value ShowDomainStreamBackupResponse::toJson() const
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
bool ShowDomainStreamBackupResponse::fromJson(const web::json::value& val)
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


std::string ShowDomainStreamBackupResponse::getPublishDomain() const
{
    return publishDomain_;
}

void ShowDomainStreamBackupResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ShowDomainStreamBackupResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ShowDomainStreamBackupResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

bool ShowDomainStreamBackupResponse::isStreamBackupEnable() const
{
    return streamBackupEnable_;
}

void ShowDomainStreamBackupResponse::setStreamBackupEnable(bool value)
{
    streamBackupEnable_ = value;
    streamBackupEnableIsSet_ = true;
}

bool ShowDomainStreamBackupResponse::streamBackupEnableIsSet() const
{
    return streamBackupEnableIsSet_;
}

void ShowDomainStreamBackupResponse::unsetstreamBackupEnable()
{
    streamBackupEnableIsSet_ = false;
}

}
}
}
}
}


