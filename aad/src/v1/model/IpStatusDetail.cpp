

#include "huaweicloud/aad/v1/model/IpStatusDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




IpStatusDetail::IpStatusDetail()
{
    blockTime_ = 0L;
    blockTimeIsSet_ = false;
    unblockTime_ = 0L;
    unblockTimeIsSet_ = false;
}

IpStatusDetail::~IpStatusDetail() = default;

void IpStatusDetail::validate()
{
}

web::json::value IpStatusDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockTimeIsSet_) {
        val[utility::conversions::to_string_t("block_time")] = ModelBase::toJson(blockTime_);
    }
    if(unblockTimeIsSet_) {
        val[utility::conversions::to_string_t("unblock_time")] = ModelBase::toJson(unblockTime_);
    }

    return val;
}
bool IpStatusDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("block_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unblock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unblock_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnblockTime(refVal);
        }
    }
    return ok;
}


int64_t IpStatusDetail::getBlockTime() const
{
    return blockTime_;
}

void IpStatusDetail::setBlockTime(int64_t value)
{
    blockTime_ = value;
    blockTimeIsSet_ = true;
}

bool IpStatusDetail::blockTimeIsSet() const
{
    return blockTimeIsSet_;
}

void IpStatusDetail::unsetblockTime()
{
    blockTimeIsSet_ = false;
}

int64_t IpStatusDetail::getUnblockTime() const
{
    return unblockTime_;
}

void IpStatusDetail::setUnblockTime(int64_t value)
{
    unblockTime_ = value;
    unblockTimeIsSet_ = true;
}

bool IpStatusDetail::unblockTimeIsSet() const
{
    return unblockTimeIsSet_;
}

void IpStatusDetail::unsetunblockTime()
{
    unblockTimeIsSet_ = false;
}

}
}
}
}
}


