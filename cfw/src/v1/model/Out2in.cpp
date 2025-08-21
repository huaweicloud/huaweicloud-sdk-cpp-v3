

#include "huaweicloud/cfw/v1/model/Out2in.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Out2in::Out2in()
{
    dstIpIsSet_ = false;
    dstPortIsSet_ = false;
    srcIpIsSet_ = false;
}

Out2in::~Out2in() = default;

void Out2in::validate()
{
}

web::json::value Out2in::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }

    return val;
}
bool Out2in::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
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
    return ok;
}


std::vector<ItemVO>& Out2in::getDstIp()
{
    return dstIp_;
}

void Out2in::setDstIp(const std::vector<ItemVO>& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool Out2in::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void Out2in::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::vector<ItemVO>& Out2in::getDstPort()
{
    return dstPort_;
}

void Out2in::setDstPort(const std::vector<ItemVO>& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool Out2in::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void Out2in::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::vector<ItemVO>& Out2in::getSrcIp()
{
    return srcIp_;
}

void Out2in::setSrcIp(const std::vector<ItemVO>& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool Out2in::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void Out2in::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

}
}
}
}
}


