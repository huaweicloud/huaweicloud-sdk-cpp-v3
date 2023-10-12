

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussHaOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussHaOption::OpenGaussHaOption()
{
    mode_ = "";
    modeIsSet_ = false;
    consistency_ = "";
    consistencyIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
}

OpenGaussHaOption::~OpenGaussHaOption() = default;

void OpenGaussHaOption::validate()
{
}

web::json::value OpenGaussHaOption::toJson() const
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

    return val;
}
bool OpenGaussHaOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OpenGaussHaOption::getMode() const
{
    return mode_;
}

void OpenGaussHaOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool OpenGaussHaOption::modeIsSet() const
{
    return modeIsSet_;
}

void OpenGaussHaOption::unsetmode()
{
    modeIsSet_ = false;
}

std::string OpenGaussHaOption::getConsistency() const
{
    return consistency_;
}

void OpenGaussHaOption::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool OpenGaussHaOption::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void OpenGaussHaOption::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::string OpenGaussHaOption::getReplicationMode() const
{
    return replicationMode_;
}

void OpenGaussHaOption::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool OpenGaussHaOption::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void OpenGaussHaOption::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

}
}
}
}
}


