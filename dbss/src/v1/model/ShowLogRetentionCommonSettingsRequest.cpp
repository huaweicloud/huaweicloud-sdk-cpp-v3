

#include "huaweicloud/dbss/v1/model/ShowLogRetentionCommonSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowLogRetentionCommonSettingsRequest::ShowLogRetentionCommonSettingsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowLogRetentionCommonSettingsRequest::~ShowLogRetentionCommonSettingsRequest() = default;

void ShowLogRetentionCommonSettingsRequest::validate()
{
}

web::json::value ShowLogRetentionCommonSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowLogRetentionCommonSettingsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowLogRetentionCommonSettingsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowLogRetentionCommonSettingsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowLogRetentionCommonSettingsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowLogRetentionCommonSettingsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


