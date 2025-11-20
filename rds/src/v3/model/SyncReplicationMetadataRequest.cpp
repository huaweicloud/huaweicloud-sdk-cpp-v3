

#include "huaweicloud/rds/v3/model/SyncReplicationMetadataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SyncReplicationMetadataRequest::SyncReplicationMetadataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SyncReplicationMetadataRequest::~SyncReplicationMetadataRequest() = default;

void SyncReplicationMetadataRequest::validate()
{
}

web::json::value SyncReplicationMetadataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SyncReplicationMetadataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string SyncReplicationMetadataRequest::getXLanguage() const
{
    return xLanguage_;
}

void SyncReplicationMetadataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SyncReplicationMetadataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SyncReplicationMetadataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SyncReplicationMetadataRequest::getInstanceId() const
{
    return instanceId_;
}

void SyncReplicationMetadataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SyncReplicationMetadataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SyncReplicationMetadataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


