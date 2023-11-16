

#include "huaweicloud/aad/v1/model/ExecuteUnblockIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ExecuteUnblockIpRequestBody::ExecuteUnblockIpRequestBody()
{
    ip_ = "";
    ipIsSet_ = false;
    blockingTime_ = 0L;
    blockingTimeIsSet_ = false;
}

ExecuteUnblockIpRequestBody::~ExecuteUnblockIpRequestBody() = default;

void ExecuteUnblockIpRequestBody::validate()
{
}

web::json::value ExecuteUnblockIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(blockingTimeIsSet_) {
        val[utility::conversions::to_string_t("blocking_time")] = ModelBase::toJson(blockingTime_);
    }

    return val;
}
bool ExecuteUnblockIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocking_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocking_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockingTime(refVal);
        }
    }
    return ok;
}


std::string ExecuteUnblockIpRequestBody::getIp() const
{
    return ip_;
}

void ExecuteUnblockIpRequestBody::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ExecuteUnblockIpRequestBody::ipIsSet() const
{
    return ipIsSet_;
}

void ExecuteUnblockIpRequestBody::unsetip()
{
    ipIsSet_ = false;
}

int64_t ExecuteUnblockIpRequestBody::getBlockingTime() const
{
    return blockingTime_;
}

void ExecuteUnblockIpRequestBody::setBlockingTime(int64_t value)
{
    blockingTime_ = value;
    blockingTimeIsSet_ = true;
}

bool ExecuteUnblockIpRequestBody::blockingTimeIsSet() const
{
    return blockingTimeIsSet_;
}

void ExecuteUnblockIpRequestBody::unsetblockingTime()
{
    blockingTimeIsSet_ = false;
}

}
}
}
}
}


