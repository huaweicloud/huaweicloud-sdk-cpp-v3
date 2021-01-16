

#include "huaweicloud/eip/v2/model/CreateSharedBandwidthOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreateSharedBandwidthOption::CreateSharedBandwidthOption()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

CreateSharedBandwidthOption::~CreateSharedBandwidthOption() = default;

void CreateSharedBandwidthOption::validate()
{
}

web::json::value CreateSharedBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}

bool CreateSharedBandwidthOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    return ok;
}


std::string CreateSharedBandwidthOption::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateSharedBandwidthOption::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateSharedBandwidthOption::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateSharedBandwidthOption::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateSharedBandwidthOption::getName() const
{
    return name_;
}

void CreateSharedBandwidthOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSharedBandwidthOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSharedBandwidthOption::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateSharedBandwidthOption::getSize() const
{
    return size_;
}

void CreateSharedBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateSharedBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateSharedBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateSharedBandwidthOption::getChargeMode() const
{
    return chargeMode_;
}

void CreateSharedBandwidthOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool CreateSharedBandwidthOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void CreateSharedBandwidthOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


