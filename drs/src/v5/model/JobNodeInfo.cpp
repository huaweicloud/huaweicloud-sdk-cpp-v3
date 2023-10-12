

#include "huaweicloud/drs/v5/model/JobNodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobNodeInfo::JobNodeInfo()
{
    specIsSet_ = false;
    vpcIsSet_ = false;
    baseInfoIsSet_ = false;
}

JobNodeInfo::~JobNodeInfo() = default;

void JobNodeInfo::validate()
{
}

web::json::value JobNodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }
    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }

    return val;
}
bool JobNodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            JobNodeSpecInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            JobNodeVpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_info"));
        if(!fieldValue.is_null())
        {
            JobNodeBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseInfo(refVal);
        }
    }
    return ok;
}


JobNodeSpecInfo JobNodeInfo::getSpec() const
{
    return spec_;
}

void JobNodeInfo::setSpec(const JobNodeSpecInfo& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool JobNodeInfo::specIsSet() const
{
    return specIsSet_;
}

void JobNodeInfo::unsetspec()
{
    specIsSet_ = false;
}

JobNodeVpcInfo JobNodeInfo::getVpc() const
{
    return vpc_;
}

void JobNodeInfo::setVpc(const JobNodeVpcInfo& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool JobNodeInfo::vpcIsSet() const
{
    return vpcIsSet_;
}

void JobNodeInfo::unsetvpc()
{
    vpcIsSet_ = false;
}

JobNodeBaseInfo JobNodeInfo::getBaseInfo() const
{
    return baseInfo_;
}

void JobNodeInfo::setBaseInfo(const JobNodeBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool JobNodeInfo::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void JobNodeInfo::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

}
}
}
}
}


