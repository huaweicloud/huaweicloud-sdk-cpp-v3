

#include "huaweicloud/aad/v1/model/BlockList_blocking_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BlockList_blocking_list::BlockList_blocking_list()
{
    ip_ = "";
    ipIsSet_ = false;
    blockingTime_ = 0L;
    blockingTimeIsSet_ = false;
    estimatedUnblockingTime_ = 0L;
    estimatedUnblockingTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BlockList_blocking_list::~BlockList_blocking_list() = default;

void BlockList_blocking_list::validate()
{
}

web::json::value BlockList_blocking_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(blockingTimeIsSet_) {
        val[utility::conversions::to_string_t("blocking_time")] = ModelBase::toJson(blockingTime_);
    }
    if(estimatedUnblockingTimeIsSet_) {
        val[utility::conversions::to_string_t("estimated_unblocking_time")] = ModelBase::toJson(estimatedUnblockingTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BlockList_blocking_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("estimated_unblocking_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estimated_unblocking_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstimatedUnblockingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string BlockList_blocking_list::getIp() const
{
    return ip_;
}

void BlockList_blocking_list::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BlockList_blocking_list::ipIsSet() const
{
    return ipIsSet_;
}

void BlockList_blocking_list::unsetip()
{
    ipIsSet_ = false;
}

int64_t BlockList_blocking_list::getBlockingTime() const
{
    return blockingTime_;
}

void BlockList_blocking_list::setBlockingTime(int64_t value)
{
    blockingTime_ = value;
    blockingTimeIsSet_ = true;
}

bool BlockList_blocking_list::blockingTimeIsSet() const
{
    return blockingTimeIsSet_;
}

void BlockList_blocking_list::unsetblockingTime()
{
    blockingTimeIsSet_ = false;
}

int64_t BlockList_blocking_list::getEstimatedUnblockingTime() const
{
    return estimatedUnblockingTime_;
}

void BlockList_blocking_list::setEstimatedUnblockingTime(int64_t value)
{
    estimatedUnblockingTime_ = value;
    estimatedUnblockingTimeIsSet_ = true;
}

bool BlockList_blocking_list::estimatedUnblockingTimeIsSet() const
{
    return estimatedUnblockingTimeIsSet_;
}

void BlockList_blocking_list::unsetestimatedUnblockingTime()
{
    estimatedUnblockingTimeIsSet_ = false;
}

std::string BlockList_blocking_list::getStatus() const
{
    return status_;
}

void BlockList_blocking_list::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BlockList_blocking_list::statusIsSet() const
{
    return statusIsSet_;
}

void BlockList_blocking_list::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


