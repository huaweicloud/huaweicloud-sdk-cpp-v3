

#include "huaweicloud/cfw/v1/model/VpcReport.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




VpcReport::VpcReport()
{
    appIsSet_ = false;
    dstIpIsSet_ = false;
    overviewIsSet_ = false;
    srcIpIsSet_ = false;
    trafficTrendIsSet_ = false;
    vpcIsSet_ = false;
}

VpcReport::~VpcReport() = default;

void VpcReport::validate()
{
}

web::json::value VpcReport::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(overviewIsSet_) {
        val[utility::conversions::to_string_t("overview")] = ModelBase::toJson(overview_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(trafficTrendIsSet_) {
        val[utility::conversions::to_string_t("traffic_trend")] = ModelBase::toJson(trafficTrend_);
    }
    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}
bool VpcReport::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overview"));
        if(!fieldValue.is_null())
        {
            Overview refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_trend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_trend"));
        if(!fieldValue.is_null())
        {
            std::vector<TrendVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficTrend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            Vpc refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    return ok;
}


std::vector<ItemVO>& VpcReport::getApp()
{
    return app_;
}

void VpcReport::setApp(const std::vector<ItemVO>& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool VpcReport::appIsSet() const
{
    return appIsSet_;
}

void VpcReport::unsetapp()
{
    appIsSet_ = false;
}

std::vector<ItemVO>& VpcReport::getDstIp()
{
    return dstIp_;
}

void VpcReport::setDstIp(const std::vector<ItemVO>& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool VpcReport::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void VpcReport::unsetdstIp()
{
    dstIpIsSet_ = false;
}

Overview VpcReport::getOverview() const
{
    return overview_;
}

void VpcReport::setOverview(const Overview& value)
{
    overview_ = value;
    overviewIsSet_ = true;
}

bool VpcReport::overviewIsSet() const
{
    return overviewIsSet_;
}

void VpcReport::unsetoverview()
{
    overviewIsSet_ = false;
}

std::vector<ItemVO>& VpcReport::getSrcIp()
{
    return srcIp_;
}

void VpcReport::setSrcIp(const std::vector<ItemVO>& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool VpcReport::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void VpcReport::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::vector<TrendVO>& VpcReport::getTrafficTrend()
{
    return trafficTrend_;
}

void VpcReport::setTrafficTrend(const std::vector<TrendVO>& value)
{
    trafficTrend_ = value;
    trafficTrendIsSet_ = true;
}

bool VpcReport::trafficTrendIsSet() const
{
    return trafficTrendIsSet_;
}

void VpcReport::unsettrafficTrend()
{
    trafficTrendIsSet_ = false;
}

Vpc VpcReport::getVpc() const
{
    return vpc_;
}

void VpcReport::setVpc(const Vpc& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool VpcReport::vpcIsSet() const
{
    return vpcIsSet_;
}

void VpcReport::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


