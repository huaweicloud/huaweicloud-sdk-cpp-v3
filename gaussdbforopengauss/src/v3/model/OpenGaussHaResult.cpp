

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussHaResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussHaResult::OpenGaussHaResult()
{
    mode_ = "";
    modeIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
    consistency_ = "";
    consistencyIsSet_ = false;
    consistencyProtocol_ = "";
    consistencyProtocolIsSet_ = false;
}

OpenGaussHaResult::~OpenGaussHaResult() = default;

void OpenGaussHaResult::validate()
{
}

web::json::value OpenGaussHaResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(replicationModeIsSet_) {
        val[utility::conversions::to_string_t("replication_mode")] = ModelBase::toJson(replicationMode_);
    }
    if(consistencyIsSet_) {
        val[utility::conversions::to_string_t("consistency")] = ModelBase::toJson(consistency_);
    }
    if(consistencyProtocolIsSet_) {
        val[utility::conversions::to_string_t("consistency_protocol")] = ModelBase::toJson(consistencyProtocol_);
    }

    return val;
}

bool OpenGaussHaResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("consistency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistency_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistency_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistencyProtocol(refVal);
        }
    }
    return ok;
}

std::string OpenGaussHaResult::getMode() const
{
    return mode_;
}

void OpenGaussHaResult::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool OpenGaussHaResult::modeIsSet() const
{
    return modeIsSet_;
}

void OpenGaussHaResult::unsetmode()
{
    modeIsSet_ = false;
}

std::string OpenGaussHaResult::getReplicationMode() const
{
    return replicationMode_;
}

void OpenGaussHaResult::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool OpenGaussHaResult::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void OpenGaussHaResult::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

std::string OpenGaussHaResult::getConsistency() const
{
    return consistency_;
}

void OpenGaussHaResult::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool OpenGaussHaResult::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void OpenGaussHaResult::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::string OpenGaussHaResult::getConsistencyProtocol() const
{
    return consistencyProtocol_;
}

void OpenGaussHaResult::setConsistencyProtocol(const std::string& value)
{
    consistencyProtocol_ = value;
    consistencyProtocolIsSet_ = true;
}

bool OpenGaussHaResult::consistencyProtocolIsSet() const
{
    return consistencyProtocolIsSet_;
}

void OpenGaussHaResult::unsetconsistencyProtocol()
{
    consistencyProtocolIsSet_ = false;
}

}
}
}
}
}


