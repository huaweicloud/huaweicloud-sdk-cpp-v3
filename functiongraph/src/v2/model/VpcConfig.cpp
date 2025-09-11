

#include "huaweicloud/functiongraph/v2/model/VpcConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




VpcConfig::VpcConfig()
{
    vpcName_ = "";
    vpcNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

VpcConfig::~VpcConfig() = default;

void VpcConfig::validate()
{
}

web::json::value VpcConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool VpcConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::string VpcConfig::getVpcName() const
{
    return vpcName_;
}

void VpcConfig::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool VpcConfig::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void VpcConfig::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string VpcConfig::getVpcId() const
{
    return vpcId_;
}

void VpcConfig::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VpcConfig::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VpcConfig::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


