

#include "huaweicloud/rds/v3/model/ShowReplicationStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowReplicationStatusResponse::ShowReplicationStatusResponse()
{
    replicationStatus_ = "";
    replicationStatusIsSet_ = false;
    abnormalReason_ = "";
    abnormalReasonIsSet_ = false;
}

ShowReplicationStatusResponse::~ShowReplicationStatusResponse() = default;

void ShowReplicationStatusResponse::validate()
{
}

web::json::value ShowReplicationStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationStatusIsSet_) {
        val[utility::conversions::to_string_t("replication_status")] = ModelBase::toJson(replicationStatus_);
    }
    if(abnormalReasonIsSet_) {
        val[utility::conversions::to_string_t("abnormal_reason")] = ModelBase::toJson(abnormalReason_);
    }

    return val;
}

bool ShowReplicationStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalReason(refVal);
        }
    }
    return ok;
}

std::string ShowReplicationStatusResponse::getReplicationStatus() const
{
    return replicationStatus_;
}

void ShowReplicationStatusResponse::setReplicationStatus(const std::string& value)
{
    replicationStatus_ = value;
    replicationStatusIsSet_ = true;
}

bool ShowReplicationStatusResponse::replicationStatusIsSet() const
{
    return replicationStatusIsSet_;
}

void ShowReplicationStatusResponse::unsetreplicationStatus()
{
    replicationStatusIsSet_ = false;
}

std::string ShowReplicationStatusResponse::getAbnormalReason() const
{
    return abnormalReason_;
}

void ShowReplicationStatusResponse::setAbnormalReason(const std::string& value)
{
    abnormalReason_ = value;
    abnormalReasonIsSet_ = true;
}

bool ShowReplicationStatusResponse::abnormalReasonIsSet() const
{
    return abnormalReasonIsSet_;
}

void ShowReplicationStatusResponse::unsetabnormalReason()
{
    abnormalReasonIsSet_ = false;
}

}
}
}
}
}


