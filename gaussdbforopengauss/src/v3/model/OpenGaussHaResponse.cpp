

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussHaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussHaResponse::OpenGaussHaResponse()
{
    mode_ = "";
    modeIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
    consistency_ = "";
    consistencyIsSet_ = false;
}

OpenGaussHaResponse::~OpenGaussHaResponse() = default;

void OpenGaussHaResponse::validate()
{
}

web::json::value OpenGaussHaResponse::toJson() const
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

    return val;
}
bool OpenGaussHaResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OpenGaussHaResponse::getMode() const
{
    return mode_;
}

void OpenGaussHaResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool OpenGaussHaResponse::modeIsSet() const
{
    return modeIsSet_;
}

void OpenGaussHaResponse::unsetmode()
{
    modeIsSet_ = false;
}

std::string OpenGaussHaResponse::getReplicationMode() const
{
    return replicationMode_;
}

void OpenGaussHaResponse::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool OpenGaussHaResponse::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void OpenGaussHaResponse::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

std::string OpenGaussHaResponse::getConsistency() const
{
    return consistency_;
}

void OpenGaussHaResponse::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool OpenGaussHaResponse::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void OpenGaussHaResponse::unsetconsistency()
{
    consistencyIsSet_ = false;
}

}
}
}
}
}


