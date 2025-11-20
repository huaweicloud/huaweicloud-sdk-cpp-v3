

#include "huaweicloud/cce/v3/model/HyperNodeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HyperNodeSpec::HyperNodeSpec()
{
    flavor_ = "";
    flavorIsSet_ = false;
    nodepoolID_ = "";
    nodepoolIDIsSet_ = false;
    nodeTemplateIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

HyperNodeSpec::~HyperNodeSpec() = default;

void HyperNodeSpec::validate()
{
}

web::json::value HyperNodeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(nodepoolIDIsSet_) {
        val[utility::conversions::to_string_t("nodepoolID")] = ModelBase::toJson(nodepoolID_);
    }
    if(nodeTemplateIsSet_) {
        val[utility::conversions::to_string_t("nodeTemplate")] = ModelBase::toJson(nodeTemplate_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("chargeMode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}
bool HyperNodeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodepoolID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepoolID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeTemplate"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeTemplateInHyperNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chargeMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargeMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    return ok;
}


std::string HyperNodeSpec::getFlavor() const
{
    return flavor_;
}

void HyperNodeSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool HyperNodeSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void HyperNodeSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string HyperNodeSpec::getNodepoolID() const
{
    return nodepoolID_;
}

void HyperNodeSpec::setNodepoolID(const std::string& value)
{
    nodepoolID_ = value;
    nodepoolIDIsSet_ = true;
}

bool HyperNodeSpec::nodepoolIDIsSet() const
{
    return nodepoolIDIsSet_;
}

void HyperNodeSpec::unsetnodepoolID()
{
    nodepoolIDIsSet_ = false;
}

std::vector<NodeTemplateInHyperNode>& HyperNodeSpec::getNodeTemplate()
{
    return nodeTemplate_;
}

void HyperNodeSpec::setNodeTemplate(const std::vector<NodeTemplateInHyperNode>& value)
{
    nodeTemplate_ = value;
    nodeTemplateIsSet_ = true;
}

bool HyperNodeSpec::nodeTemplateIsSet() const
{
    return nodeTemplateIsSet_;
}

void HyperNodeSpec::unsetnodeTemplate()
{
    nodeTemplateIsSet_ = false;
}

std::string HyperNodeSpec::getChargeMode() const
{
    return chargeMode_;
}

void HyperNodeSpec::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool HyperNodeSpec::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void HyperNodeSpec::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


