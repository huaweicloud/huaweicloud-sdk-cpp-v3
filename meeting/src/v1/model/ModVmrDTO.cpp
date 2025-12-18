

#include "huaweicloud/meeting/v1/model/ModVmrDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModVmrDTO::ModVmrDTO()
{
    vmrName_ = "";
    vmrNameIsSet_ = false;
    gustPwd_ = "";
    gustPwdIsSet_ = false;
    chairPwd_ = "";
    chairPwdIsSet_ = false;
    allowGustFirst_ = false;
    allowGustFirstIsSet_ = false;
    gustFirstNotice_ = false;
    gustFirstNoticeIsSet_ = false;
}

ModVmrDTO::~ModVmrDTO() = default;

void ModVmrDTO::validate()
{
}

web::json::value ModVmrDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vmrNameIsSet_) {
        val[utility::conversions::to_string_t("vmrName")] = ModelBase::toJson(vmrName_);
    }
    if(gustPwdIsSet_) {
        val[utility::conversions::to_string_t("gustPwd")] = ModelBase::toJson(gustPwd_);
    }
    if(chairPwdIsSet_) {
        val[utility::conversions::to_string_t("chairPwd")] = ModelBase::toJson(chairPwd_);
    }
    if(allowGustFirstIsSet_) {
        val[utility::conversions::to_string_t("allowGustFirst")] = ModelBase::toJson(allowGustFirst_);
    }
    if(gustFirstNoticeIsSet_) {
        val[utility::conversions::to_string_t("gustFirstNotice")] = ModelBase::toJson(gustFirstNotice_);
    }

    return val;
}
bool ModVmrDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vmrName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gustPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gustPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGustPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowGustFirst"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowGustFirst"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowGustFirst(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gustFirstNotice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gustFirstNotice"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGustFirstNotice(refVal);
        }
    }
    return ok;
}


std::string ModVmrDTO::getVmrName() const
{
    return vmrName_;
}

void ModVmrDTO::setVmrName(const std::string& value)
{
    vmrName_ = value;
    vmrNameIsSet_ = true;
}

bool ModVmrDTO::vmrNameIsSet() const
{
    return vmrNameIsSet_;
}

void ModVmrDTO::unsetvmrName()
{
    vmrNameIsSet_ = false;
}

std::string ModVmrDTO::getGustPwd() const
{
    return gustPwd_;
}

void ModVmrDTO::setGustPwd(const std::string& value)
{
    gustPwd_ = value;
    gustPwdIsSet_ = true;
}

bool ModVmrDTO::gustPwdIsSet() const
{
    return gustPwdIsSet_;
}

void ModVmrDTO::unsetgustPwd()
{
    gustPwdIsSet_ = false;
}

std::string ModVmrDTO::getChairPwd() const
{
    return chairPwd_;
}

void ModVmrDTO::setChairPwd(const std::string& value)
{
    chairPwd_ = value;
    chairPwdIsSet_ = true;
}

bool ModVmrDTO::chairPwdIsSet() const
{
    return chairPwdIsSet_;
}

void ModVmrDTO::unsetchairPwd()
{
    chairPwdIsSet_ = false;
}

bool ModVmrDTO::isAllowGustFirst() const
{
    return allowGustFirst_;
}

void ModVmrDTO::setAllowGustFirst(bool value)
{
    allowGustFirst_ = value;
    allowGustFirstIsSet_ = true;
}

bool ModVmrDTO::allowGustFirstIsSet() const
{
    return allowGustFirstIsSet_;
}

void ModVmrDTO::unsetallowGustFirst()
{
    allowGustFirstIsSet_ = false;
}

bool ModVmrDTO::isGustFirstNotice() const
{
    return gustFirstNotice_;
}

void ModVmrDTO::setGustFirstNotice(bool value)
{
    gustFirstNotice_ = value;
    gustFirstNoticeIsSet_ = true;
}

bool ModVmrDTO::gustFirstNoticeIsSet() const
{
    return gustFirstNoticeIsSet_;
}

void ModVmrDTO::unsetgustFirstNotice()
{
    gustFirstNoticeIsSet_ = false;
}

}
}
}
}
}


