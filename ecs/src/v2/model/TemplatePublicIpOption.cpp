

#include "huaweicloud/ecs/v2/model/TemplatePublicIpOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplatePublicIpOption::TemplatePublicIpOption()
{
    publicipType_ = "";
    publicipTypeIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    bandwidthIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
}

TemplatePublicIpOption::~TemplatePublicIpOption() = default;

void TemplatePublicIpOption::validate()
{
}

web::json::value TemplatePublicIpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipTypeIsSet_) {
        val[utility::conversions::to_string_t("publicip_type")] = ModelBase::toJson(publicipType_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }

    return val;
}
bool TemplatePublicIpOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            TemplateBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    return ok;
}


std::string TemplatePublicIpOption::getPublicipType() const
{
    return publicipType_;
}

void TemplatePublicIpOption::setPublicipType(const std::string& value)
{
    publicipType_ = value;
    publicipTypeIsSet_ = true;
}

bool TemplatePublicIpOption::publicipTypeIsSet() const
{
    return publicipTypeIsSet_;
}

void TemplatePublicIpOption::unsetpublicipType()
{
    publicipTypeIsSet_ = false;
}

std::string TemplatePublicIpOption::getChargingMode() const
{
    return chargingMode_;
}

void TemplatePublicIpOption::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool TemplatePublicIpOption::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void TemplatePublicIpOption::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

TemplateBandwidthOption TemplatePublicIpOption::getBandwidth() const
{
    return bandwidth_;
}

void TemplatePublicIpOption::setBandwidth(const TemplateBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool TemplatePublicIpOption::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void TemplatePublicIpOption::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

bool TemplatePublicIpOption::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void TemplatePublicIpOption::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool TemplatePublicIpOption::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void TemplatePublicIpOption::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

}
}
}
}
}


