

#include "huaweicloud/rds/v3/model/Ha.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Ha::Ha()
{
    mode_ = "";
    modeIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
}

Ha::~Ha() = default;

void Ha::validate()
{
}

web::json::value Ha::toJson() const
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

bool Ha::fromJson(const web::json::value& val)
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

std::string Ha::getMode() const
{
    return mode_;
}

void Ha::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool Ha::modeIsSet() const
{
    return modeIsSet_;
}

void Ha::unsetmode()
{
    modeIsSet_ = false;
}

std::string Ha::getReplicationMode() const
{
    return replicationMode_;
}

void Ha::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool Ha::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void Ha::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

}
}
}
}
}


