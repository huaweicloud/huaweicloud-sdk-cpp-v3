

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussHa.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussHa::OpenGaussHa()
{
    mode_ = "";
    modeIsSet_ = false;
    consistency_ = "";
    consistencyIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
}

OpenGaussHa::~OpenGaussHa() = default;

void OpenGaussHa::validate()
{
}

web::json::value OpenGaussHa::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(consistencyIsSet_) {
        val[utility::conversions::to_string_t("consistency")] = ModelBase::toJson(consistency_);
    }
    if(replicationModeIsSet_) {
        val[utility::conversions::to_string_t("replication_mode")] = ModelBase::toJson(replicationMode_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }

    return val;
}
bool OpenGaussHa::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("consistency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistency(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    return ok;
}


std::string OpenGaussHa::getMode() const
{
    return mode_;
}

void OpenGaussHa::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool OpenGaussHa::modeIsSet() const
{
    return modeIsSet_;
}

void OpenGaussHa::unsetmode()
{
    modeIsSet_ = false;
}

std::string OpenGaussHa::getConsistency() const
{
    return consistency_;
}

void OpenGaussHa::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool OpenGaussHa::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void OpenGaussHa::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::string OpenGaussHa::getReplicationMode() const
{
    return replicationMode_;
}

void OpenGaussHa::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool OpenGaussHa::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void OpenGaussHa::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

std::string OpenGaussHa::getInstanceMode() const
{
    return instanceMode_;
}

void OpenGaussHa::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool OpenGaussHa::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void OpenGaussHa::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

}
}
}
}
}


