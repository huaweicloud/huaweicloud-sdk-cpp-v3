

#include "huaweicloud/cfw/v1/model/In2Out.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




In2Out::In2Out()
{
    dstHostIsSet_ = false;
    dstIpIsSet_ = false;
    dstPortIsSet_ = false;
    srcIpIsSet_ = false;
}

In2Out::~In2Out() = default;

void In2Out::validate()
{
}

web::json::value In2Out::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dstHostIsSet_) {
        val[utility::conversions::to_string_t("dst_host")] = ModelBase::toJson(dstHost_);
    }
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
bool In2Out::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dst_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_host"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstHost(refVal);
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


std::vector<ItemVO>& In2Out::getDstHost()
{
    return dstHost_;
}

void In2Out::setDstHost(const std::vector<ItemVO>& value)
{
    dstHost_ = value;
    dstHostIsSet_ = true;
}

bool In2Out::dstHostIsSet() const
{
    return dstHostIsSet_;
}

void In2Out::unsetdstHost()
{
    dstHostIsSet_ = false;
}

std::vector<ItemVO>& In2Out::getDstIp()
{
    return dstIp_;
}

void In2Out::setDstIp(const std::vector<ItemVO>& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool In2Out::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void In2Out::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::vector<ItemVO>& In2Out::getDstPort()
{
    return dstPort_;
}

void In2Out::setDstPort(const std::vector<ItemVO>& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool In2Out::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void In2Out::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::vector<ItemVO>& In2Out::getSrcIp()
{
    return srcIp_;
}

void In2Out::setSrcIp(const std::vector<ItemVO>& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool In2Out::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void In2Out::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

}
}
}
}
}


