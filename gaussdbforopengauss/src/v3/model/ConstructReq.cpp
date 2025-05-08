

#include "huaweicloud/gaussdbforopengauss/v3/model/ConstructReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ConstructReq::ConstructReq()
{
    disasterType_ = "";
    disasterTypeIsSet_ = false;
    drIp_ = "";
    drIpIsSet_ = false;
    drUserName_ = "";
    drUserNameIsSet_ = false;
    drUserPassword_ = "";
    drUserPasswordIsSet_ = false;
    drTaskName_ = "";
    drTaskNameIsSet_ = false;
}

ConstructReq::~ConstructReq() = default;

void ConstructReq::validate()
{
}

web::json::value ConstructReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }
    if(drIpIsSet_) {
        val[utility::conversions::to_string_t("dr_ip")] = ModelBase::toJson(drIp_);
    }
    if(drUserNameIsSet_) {
        val[utility::conversions::to_string_t("dr_user_name")] = ModelBase::toJson(drUserName_);
    }
    if(drUserPasswordIsSet_) {
        val[utility::conversions::to_string_t("dr_user_password")] = ModelBase::toJson(drUserPassword_);
    }
    if(drTaskNameIsSet_) {
        val[utility::conversions::to_string_t("dr_task_name")] = ModelBase::toJson(drTaskName_);
    }

    return val;
}
bool ConstructReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_user_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_user_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrUserPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrTaskName(refVal);
        }
    }
    return ok;
}


std::string ConstructReq::getDisasterType() const
{
    return disasterType_;
}

void ConstructReq::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool ConstructReq::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void ConstructReq::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

std::string ConstructReq::getDrIp() const
{
    return drIp_;
}

void ConstructReq::setDrIp(const std::string& value)
{
    drIp_ = value;
    drIpIsSet_ = true;
}

bool ConstructReq::drIpIsSet() const
{
    return drIpIsSet_;
}

void ConstructReq::unsetdrIp()
{
    drIpIsSet_ = false;
}

std::string ConstructReq::getDrUserName() const
{
    return drUserName_;
}

void ConstructReq::setDrUserName(const std::string& value)
{
    drUserName_ = value;
    drUserNameIsSet_ = true;
}

bool ConstructReq::drUserNameIsSet() const
{
    return drUserNameIsSet_;
}

void ConstructReq::unsetdrUserName()
{
    drUserNameIsSet_ = false;
}

std::string ConstructReq::getDrUserPassword() const
{
    return drUserPassword_;
}

void ConstructReq::setDrUserPassword(const std::string& value)
{
    drUserPassword_ = value;
    drUserPasswordIsSet_ = true;
}

bool ConstructReq::drUserPasswordIsSet() const
{
    return drUserPasswordIsSet_;
}

void ConstructReq::unsetdrUserPassword()
{
    drUserPasswordIsSet_ = false;
}

std::string ConstructReq::getDrTaskName() const
{
    return drTaskName_;
}

void ConstructReq::setDrTaskName(const std::string& value)
{
    drTaskName_ = value;
    drTaskNameIsSet_ = true;
}

bool ConstructReq::drTaskNameIsSet() const
{
    return drTaskNameIsSet_;
}

void ConstructReq::unsetdrTaskName()
{
    drTaskNameIsSet_ = false;
}

}
}
}
}
}


