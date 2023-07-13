

#include "huaweicloud/cbr/v1/model/ShowProtectableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowProtectableRequest::ShowProtectableRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    protectableType_ = "";
    protectableTypeIsSet_ = false;
}

ShowProtectableRequest::~ShowProtectableRequest() = default;

void ShowProtectableRequest::validate()
{
}

web::json::value ShowProtectableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(protectableTypeIsSet_) {
        val[utility::conversions::to_string_t("protectable_type")] = ModelBase::toJson(protectableType_);
    }

    return val;
}

bool ShowProtectableRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protectable_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protectable_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectableType(refVal);
        }
    }
    return ok;
}

std::string ShowProtectableRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProtectableRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProtectableRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProtectableRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProtectableRequest::getProtectableType() const
{
    return protectableType_;
}

void ShowProtectableRequest::setProtectableType(const std::string& value)
{
    protectableType_ = value;
    protectableTypeIsSet_ = true;
}

bool ShowProtectableRequest::protectableTypeIsSet() const
{
    return protectableTypeIsSet_;
}

void ShowProtectableRequest::unsetprotectableType()
{
    protectableTypeIsSet_ = false;
}

}
}
}
}
}


