

#include "huaweicloud/aad/v1/model/UnblockRecordResponse_unblock_record.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UnblockRecordResponse_unblock_record::UnblockRecordResponse_unblock_record()
{
    ip_ = "";
    ipIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    blockId_ = "";
    blockIdIsSet_ = false;
    blockingTime_ = 0L;
    blockingTimeIsSet_ = false;
    unblockingTime_ = 0L;
    unblockingTimeIsSet_ = false;
    unblockType_ = "";
    unblockTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sortTime_ = 0L;
    sortTimeIsSet_ = false;
}

UnblockRecordResponse_unblock_record::~UnblockRecordResponse_unblock_record() = default;

void UnblockRecordResponse_unblock_record::validate()
{
}

web::json::value UnblockRecordResponse_unblock_record::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(blockIdIsSet_) {
        val[utility::conversions::to_string_t("block_id")] = ModelBase::toJson(blockId_);
    }
    if(blockingTimeIsSet_) {
        val[utility::conversions::to_string_t("blocking_time")] = ModelBase::toJson(blockingTime_);
    }
    if(unblockingTimeIsSet_) {
        val[utility::conversions::to_string_t("unblocking_time")] = ModelBase::toJson(unblockingTime_);
    }
    if(unblockTypeIsSet_) {
        val[utility::conversions::to_string_t("unblock_type")] = ModelBase::toJson(unblockType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sortTimeIsSet_) {
        val[utility::conversions::to_string_t("sort_time")] = ModelBase::toJson(sortTime_);
    }

    return val;
}
bool UnblockRecordResponse_unblock_record::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unblocking_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unblocking_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnblockingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unblock_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unblock_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnblockType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortTime(refVal);
        }
    }
    return ok;
}


std::string UnblockRecordResponse_unblock_record::getIp() const
{
    return ip_;
}

void UnblockRecordResponse_unblock_record::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::ipIsSet() const
{
    return ipIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetip()
{
    ipIsSet_ = false;
}

std::string UnblockRecordResponse_unblock_record::getExecutor() const
{
    return executor_;
}

void UnblockRecordResponse_unblock_record::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::executorIsSet() const
{
    return executorIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string UnblockRecordResponse_unblock_record::getBlockId() const
{
    return blockId_;
}

void UnblockRecordResponse_unblock_record::setBlockId(const std::string& value)
{
    blockId_ = value;
    blockIdIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::blockIdIsSet() const
{
    return blockIdIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetblockId()
{
    blockIdIsSet_ = false;
}

int64_t UnblockRecordResponse_unblock_record::getBlockingTime() const
{
    return blockingTime_;
}

void UnblockRecordResponse_unblock_record::setBlockingTime(int64_t value)
{
    blockingTime_ = value;
    blockingTimeIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::blockingTimeIsSet() const
{
    return blockingTimeIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetblockingTime()
{
    blockingTimeIsSet_ = false;
}

int64_t UnblockRecordResponse_unblock_record::getUnblockingTime() const
{
    return unblockingTime_;
}

void UnblockRecordResponse_unblock_record::setUnblockingTime(int64_t value)
{
    unblockingTime_ = value;
    unblockingTimeIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::unblockingTimeIsSet() const
{
    return unblockingTimeIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetunblockingTime()
{
    unblockingTimeIsSet_ = false;
}

std::string UnblockRecordResponse_unblock_record::getUnblockType() const
{
    return unblockType_;
}

void UnblockRecordResponse_unblock_record::setUnblockType(const std::string& value)
{
    unblockType_ = value;
    unblockTypeIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::unblockTypeIsSet() const
{
    return unblockTypeIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetunblockType()
{
    unblockTypeIsSet_ = false;
}

std::string UnblockRecordResponse_unblock_record::getStatus() const
{
    return status_;
}

void UnblockRecordResponse_unblock_record::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::statusIsSet() const
{
    return statusIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t UnblockRecordResponse_unblock_record::getSortTime() const
{
    return sortTime_;
}

void UnblockRecordResponse_unblock_record::setSortTime(int64_t value)
{
    sortTime_ = value;
    sortTimeIsSet_ = true;
}

bool UnblockRecordResponse_unblock_record::sortTimeIsSet() const
{
    return sortTimeIsSet_;
}

void UnblockRecordResponse_unblock_record::unsetsortTime()
{
    sortTimeIsSet_ = false;
}

}
}
}
}
}


