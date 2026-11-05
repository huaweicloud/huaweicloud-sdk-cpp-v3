

#include "huaweicloud/rds/v3/model/SupabaseHaConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseHaConfig::SupabaseHaConfig()
{
    mode_ = "";
    modeIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
}

SupabaseHaConfig::~SupabaseHaConfig() = default;

void SupabaseHaConfig::validate()
{
}

web::json::value SupabaseHaConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(replicationModeIsSet_) {
        val[utility::conversions::to_string_t("replication_mode")] = ModelBase::toJson(replicationMode_);
    }

    return val;
}
bool SupabaseHaConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
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


std::string SupabaseHaConfig::getMode() const
{
    return mode_;
}

void SupabaseHaConfig::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool SupabaseHaConfig::modeIsSet() const
{
    return modeIsSet_;
}

void SupabaseHaConfig::unsetmode()
{
    modeIsSet_ = false;
}

std::string SupabaseHaConfig::getReplicationMode() const
{
    return replicationMode_;
}

void SupabaseHaConfig::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool SupabaseHaConfig::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void SupabaseHaConfig::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

}
}
}
}
}


