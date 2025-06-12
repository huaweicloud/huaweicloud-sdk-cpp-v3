

#include "huaweicloud/metastudio/v1/model/LiveJobRunConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveJobRunConfig::LiveJobRunConfig()
{
    allowResourceType_ = "";
    allowResourceTypeIsSet_ = false;
    singleJobInRoom_ = false;
    singleJobInRoomIsSet_ = false;
}

LiveJobRunConfig::~LiveJobRunConfig() = default;

void LiveJobRunConfig::validate()
{
}

web::json::value LiveJobRunConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allowResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("allow_resource_type")] = ModelBase::toJson(allowResourceType_);
    }
    if(singleJobInRoomIsSet_) {
        val[utility::conversions::to_string_t("single_job_in_room")] = ModelBase::toJson(singleJobInRoom_);
    }

    return val;
}
bool LiveJobRunConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allow_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("single_job_in_room"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single_job_in_room"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingleJobInRoom(refVal);
        }
    }
    return ok;
}


std::string LiveJobRunConfig::getAllowResourceType() const
{
    return allowResourceType_;
}

void LiveJobRunConfig::setAllowResourceType(const std::string& value)
{
    allowResourceType_ = value;
    allowResourceTypeIsSet_ = true;
}

bool LiveJobRunConfig::allowResourceTypeIsSet() const
{
    return allowResourceTypeIsSet_;
}

void LiveJobRunConfig::unsetallowResourceType()
{
    allowResourceTypeIsSet_ = false;
}

bool LiveJobRunConfig::isSingleJobInRoom() const
{
    return singleJobInRoom_;
}

void LiveJobRunConfig::setSingleJobInRoom(bool value)
{
    singleJobInRoom_ = value;
    singleJobInRoomIsSet_ = true;
}

bool LiveJobRunConfig::singleJobInRoomIsSet() const
{
    return singleJobInRoomIsSet_;
}

void LiveJobRunConfig::unsetsingleJobInRoom()
{
    singleJobInRoomIsSet_ = false;
}

}
}
}
}
}


