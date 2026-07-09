

#include "huaweicloud/dbss/v1/model/UpdateLogRetentionCommonSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateLogRetentionCommonSettingsRequest::UpdateLogRetentionCommonSettingsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogRetentionCommonSettingsRequest::~UpdateLogRetentionCommonSettingsRequest() = default;

void UpdateLogRetentionCommonSettingsRequest::validate()
{
}

web::json::value UpdateLogRetentionCommonSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLogRetentionCommonSettingsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateLogRetention refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLogRetentionCommonSettingsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateLogRetentionCommonSettingsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateLogRetentionCommonSettingsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateLogRetentionCommonSettingsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateLogRetention UpdateLogRetentionCommonSettingsRequest::getBody() const
{
    return body_;
}

void UpdateLogRetentionCommonSettingsRequest::setBody(const UpdateLogRetention& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogRetentionCommonSettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogRetentionCommonSettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


