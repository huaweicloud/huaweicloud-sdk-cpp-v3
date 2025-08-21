

#include "huaweicloud/cfw/v1/model/SessionVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SessionVO::SessionVO()
{
    app_ = "";
    appIsSet_ = false;
    bytes_ = 0.0;
    bytesIsSet_ = false;
    dstAssociateInstanceType_ = "";
    dstAssociateInstanceTypeIsSet_ = false;
    dstDeviceName_ = "";
    dstDeviceNameIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    dstPort_ = "";
    dstPortIsSet_ = false;
    dstHost_ = "";
    dstHostIsSet_ = false;
    dstRegionId_ = "";
    dstRegionIdIsSet_ = false;
    dstRegionName_ = "";
    dstRegionNameIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    requestByte_ = 0.0;
    requestByteIsSet_ = false;
    responseByte_ = 0.0;
    responseByteIsSet_ = false;
    sessions_ = 0L;
    sessionsIsSet_ = false;
    srcAssociateInstanceType_ = "";
    srcAssociateInstanceTypeIsSet_ = false;
    srcDeviceName_ = "";
    srcDeviceNameIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcRegionId_ = "";
    srcRegionIdIsSet_ = false;
    srcRegionName_ = "";
    srcRegionNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
}

SessionVO::~SessionVO() = default;

void SessionVO::validate()
{
}

web::json::value SessionVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(bytesIsSet_) {
        val[utility::conversions::to_string_t("bytes")] = ModelBase::toJson(bytes_);
    }
    if(dstAssociateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("dst_associate_instance_type")] = ModelBase::toJson(dstAssociateInstanceType_);
    }
    if(dstDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("dst_device_name")] = ModelBase::toJson(dstDeviceName_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(dstHostIsSet_) {
        val[utility::conversions::to_string_t("dst_host")] = ModelBase::toJson(dstHost_);
    }
    if(dstRegionIdIsSet_) {
        val[utility::conversions::to_string_t("dst_region_id")] = ModelBase::toJson(dstRegionId_);
    }
    if(dstRegionNameIsSet_) {
        val[utility::conversions::to_string_t("dst_region_name")] = ModelBase::toJson(dstRegionName_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(requestByteIsSet_) {
        val[utility::conversions::to_string_t("request_byte")] = ModelBase::toJson(requestByte_);
    }
    if(responseByteIsSet_) {
        val[utility::conversions::to_string_t("response_byte")] = ModelBase::toJson(responseByte_);
    }
    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }
    if(srcAssociateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("src_associate_instance_type")] = ModelBase::toJson(srcAssociateInstanceType_);
    }
    if(srcDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("src_device_name")] = ModelBase::toJson(srcDeviceName_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }
    if(srcRegionNameIsSet_) {
        val[utility::conversions::to_string_t("src_region_name")] = ModelBase::toJson(srcRegionName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool SessionVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_byte"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_byte"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestByte(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_byte"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_byte"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseByte(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessions"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string SessionVO::getApp() const
{
    return app_;
}

void SessionVO::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool SessionVO::appIsSet() const
{
    return appIsSet_;
}

void SessionVO::unsetapp()
{
    appIsSet_ = false;
}

double SessionVO::getBytes() const
{
    return bytes_;
}

void SessionVO::setBytes(double value)
{
    bytes_ = value;
    bytesIsSet_ = true;
}

bool SessionVO::bytesIsSet() const
{
    return bytesIsSet_;
}

void SessionVO::unsetbytes()
{
    bytesIsSet_ = false;
}

std::string SessionVO::getDstAssociateInstanceType() const
{
    return dstAssociateInstanceType_;
}

void SessionVO::setDstAssociateInstanceType(const std::string& value)
{
    dstAssociateInstanceType_ = value;
    dstAssociateInstanceTypeIsSet_ = true;
}

bool SessionVO::dstAssociateInstanceTypeIsSet() const
{
    return dstAssociateInstanceTypeIsSet_;
}

void SessionVO::unsetdstAssociateInstanceType()
{
    dstAssociateInstanceTypeIsSet_ = false;
}

std::string SessionVO::getDstDeviceName() const
{
    return dstDeviceName_;
}

void SessionVO::setDstDeviceName(const std::string& value)
{
    dstDeviceName_ = value;
    dstDeviceNameIsSet_ = true;
}

bool SessionVO::dstDeviceNameIsSet() const
{
    return dstDeviceNameIsSet_;
}

void SessionVO::unsetdstDeviceName()
{
    dstDeviceNameIsSet_ = false;
}

std::string SessionVO::getDstIp() const
{
    return dstIp_;
}

void SessionVO::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool SessionVO::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void SessionVO::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::string SessionVO::getDstPort() const
{
    return dstPort_;
}

void SessionVO::setDstPort(const std::string& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool SessionVO::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void SessionVO::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string SessionVO::getDstHost() const
{
    return dstHost_;
}

void SessionVO::setDstHost(const std::string& value)
{
    dstHost_ = value;
    dstHostIsSet_ = true;
}

bool SessionVO::dstHostIsSet() const
{
    return dstHostIsSet_;
}

void SessionVO::unsetdstHost()
{
    dstHostIsSet_ = false;
}

std::string SessionVO::getDstRegionId() const
{
    return dstRegionId_;
}

void SessionVO::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool SessionVO::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void SessionVO::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string SessionVO::getDstRegionName() const
{
    return dstRegionName_;
}

void SessionVO::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool SessionVO::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void SessionVO::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
}

int64_t SessionVO::getEndTime() const
{
    return endTime_;
}

void SessionVO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SessionVO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SessionVO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SessionVO::getProtocol() const
{
    return protocol_;
}

void SessionVO::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool SessionVO::protocolIsSet() const
{
    return protocolIsSet_;
}

void SessionVO::unsetprotocol()
{
    protocolIsSet_ = false;
}

double SessionVO::getRequestByte() const
{
    return requestByte_;
}

void SessionVO::setRequestByte(double value)
{
    requestByte_ = value;
    requestByteIsSet_ = true;
}

bool SessionVO::requestByteIsSet() const
{
    return requestByteIsSet_;
}

void SessionVO::unsetrequestByte()
{
    requestByteIsSet_ = false;
}

double SessionVO::getResponseByte() const
{
    return responseByte_;
}

void SessionVO::setResponseByte(double value)
{
    responseByte_ = value;
    responseByteIsSet_ = true;
}

bool SessionVO::responseByteIsSet() const
{
    return responseByteIsSet_;
}

void SessionVO::unsetresponseByte()
{
    responseByteIsSet_ = false;
}

int64_t SessionVO::getSessions() const
{
    return sessions_;
}

void SessionVO::setSessions(int64_t value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool SessionVO::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void SessionVO::unsetsessions()
{
    sessionsIsSet_ = false;
}

std::string SessionVO::getSrcAssociateInstanceType() const
{
    return srcAssociateInstanceType_;
}

void SessionVO::setSrcAssociateInstanceType(const std::string& value)
{
    srcAssociateInstanceType_ = value;
    srcAssociateInstanceTypeIsSet_ = true;
}

bool SessionVO::srcAssociateInstanceTypeIsSet() const
{
    return srcAssociateInstanceTypeIsSet_;
}

void SessionVO::unsetsrcAssociateInstanceType()
{
    srcAssociateInstanceTypeIsSet_ = false;
}

std::string SessionVO::getSrcDeviceName() const
{
    return srcDeviceName_;
}

void SessionVO::setSrcDeviceName(const std::string& value)
{
    srcDeviceName_ = value;
    srcDeviceNameIsSet_ = true;
}

bool SessionVO::srcDeviceNameIsSet() const
{
    return srcDeviceNameIsSet_;
}

void SessionVO::unsetsrcDeviceName()
{
    srcDeviceNameIsSet_ = false;
}

std::string SessionVO::getSrcIp() const
{
    return srcIp_;
}

void SessionVO::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool SessionVO::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void SessionVO::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::string SessionVO::getSrcRegionId() const
{
    return srcRegionId_;
}

void SessionVO::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool SessionVO::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void SessionVO::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string SessionVO::getSrcRegionName() const
{
    return srcRegionName_;
}

void SessionVO::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool SessionVO::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void SessionVO::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

int64_t SessionVO::getStartTime() const
{
    return startTime_;
}

void SessionVO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SessionVO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SessionVO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


