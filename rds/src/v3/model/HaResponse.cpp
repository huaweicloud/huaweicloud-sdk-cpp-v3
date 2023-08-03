

#include "huaweicloud/rds/v3/model/HaResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




HaResponse::HaResponse()
{
    replicationMode_ = "";
    replicationModeIsSet_ = false;
}

HaResponse::~HaResponse() = default;

void HaResponse::validate()
{
}

web::json::value HaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationModeIsSet_) {
        val[utility::conversions::to_string_t("replication_mode")] = ModelBase::toJson(replicationMode_);
    }

    return val;
}

bool HaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationMode(refVal);
        }
    }
    return ok;
}

std::string HaResponse::getReplicationMode() const
{
    return replicationMode_;
}

void HaResponse::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool HaResponse::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void HaResponse::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

}
}
}
}
}


