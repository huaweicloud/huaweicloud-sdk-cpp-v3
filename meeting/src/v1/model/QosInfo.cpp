

#include "huaweicloud/meeting/v1/model/QosInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosInfo::QosInfo()
{
    type_ = "";
    typeIsSet_ = false;
    sendIsSet_ = false;
    receiveIsSet_ = false;
    cpuIsSet_ = false;
}

QosInfo::~QosInfo() = default;

void QosInfo::validate()
{
}

web::json::value QosInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sendIsSet_) {
        val[utility::conversions::to_string_t("send")] = ModelBase::toJson(send_);
    }
    if(receiveIsSet_) {
        val[utility::conversions::to_string_t("receive")] = ModelBase::toJson(receive_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }

    return val;
}
bool QosInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send"));
        if(!fieldValue.is_null())
        {
            QosSendReceiveInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("receive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receive"));
        if(!fieldValue.is_null())
        {
            QosSendReceiveInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            QosCpuInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    return ok;
}


std::string QosInfo::getType() const
{
    return type_;
}

void QosInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QosInfo::typeIsSet() const
{
    return typeIsSet_;
}

void QosInfo::unsettype()
{
    typeIsSet_ = false;
}

QosSendReceiveInfo QosInfo::getSend() const
{
    return send_;
}

void QosInfo::setSend(const QosSendReceiveInfo& value)
{
    send_ = value;
    sendIsSet_ = true;
}

bool QosInfo::sendIsSet() const
{
    return sendIsSet_;
}

void QosInfo::unsetsend()
{
    sendIsSet_ = false;
}

QosSendReceiveInfo QosInfo::getReceive() const
{
    return receive_;
}

void QosInfo::setReceive(const QosSendReceiveInfo& value)
{
    receive_ = value;
    receiveIsSet_ = true;
}

bool QosInfo::receiveIsSet() const
{
    return receiveIsSet_;
}

void QosInfo::unsetreceive()
{
    receiveIsSet_ = false;
}

QosCpuInfo QosInfo::getCpu() const
{
    return cpu_;
}

void QosInfo::setCpu(const QosCpuInfo& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool QosInfo::cpuIsSet() const
{
    return cpuIsSet_;
}

void QosInfo::unsetcpu()
{
    cpuIsSet_ = false;
}

}
}
}
}
}


