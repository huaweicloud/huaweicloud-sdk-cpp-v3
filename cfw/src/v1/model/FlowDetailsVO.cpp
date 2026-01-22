

#include "huaweicloud/cfw/v1/model/FlowDetailsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FlowDetailsVO::FlowDetailsVO()
{
    appsIsSet_ = false;
    associateInstanceType_ = "";
    associateInstanceTypeIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    item_ = "";
    itemIsSet_ = false;
    lastTime_ = 0L;
    lastTimeIsSet_ = false;
    aggStartTime_ = 0L;
    aggStartTimeIsSet_ = false;
    aggEndTime_ = 0L;
    aggEndTimeIsSet_ = false;
    portsIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    requestByte_ = 0.0;
    requestByteIsSet_ = false;
    responseByte_ = 0.0;
    responseByteIsSet_ = false;
    sessions_ = 0L;
    sessionsIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    srcIpIsSet_ = false;
    dstIpIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

FlowDetailsVO::~FlowDetailsVO() = default;

void FlowDetailsVO::validate()
{
}

web::json::value FlowDetailsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appsIsSet_) {
        val[utility::conversions::to_string_t("apps")] = ModelBase::toJson(apps_);
    }
    if(associateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_type")] = ModelBase::toJson(associateInstanceType_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(lastTimeIsSet_) {
        val[utility::conversions::to_string_t("last_time")] = ModelBase::toJson(lastTime_);
    }
    if(aggStartTimeIsSet_) {
        val[utility::conversions::to_string_t("agg_start_time")] = ModelBase::toJson(aggStartTime_);
    }
    if(aggEndTimeIsSet_) {
        val[utility::conversions::to_string_t("agg_end_time")] = ModelBase::toJson(aggEndTime_);
    }
    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool FlowDetailsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apps"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agg_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agg_start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAggStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agg_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agg_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAggEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dst_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIp(refVal);
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
    return ok;
}


std::vector<ItemVO>& FlowDetailsVO::getApps()
{
    return apps_;
}

void FlowDetailsVO::setApps(const std::vector<ItemVO>& value)
{
    apps_ = value;
    appsIsSet_ = true;
}

bool FlowDetailsVO::appsIsSet() const
{
    return appsIsSet_;
}

void FlowDetailsVO::unsetapps()
{
    appsIsSet_ = false;
}

std::string FlowDetailsVO::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void FlowDetailsVO::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool FlowDetailsVO::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void FlowDetailsVO::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string FlowDetailsVO::getDeviceName() const
{
    return deviceName_;
}

void FlowDetailsVO::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool FlowDetailsVO::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void FlowDetailsVO::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string FlowDetailsVO::getItem() const
{
    return item_;
}

void FlowDetailsVO::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool FlowDetailsVO::itemIsSet() const
{
    return itemIsSet_;
}

void FlowDetailsVO::unsetitem()
{
    itemIsSet_ = false;
}

int64_t FlowDetailsVO::getLastTime() const
{
    return lastTime_;
}

void FlowDetailsVO::setLastTime(int64_t value)
{
    lastTime_ = value;
    lastTimeIsSet_ = true;
}

bool FlowDetailsVO::lastTimeIsSet() const
{
    return lastTimeIsSet_;
}

void FlowDetailsVO::unsetlastTime()
{
    lastTimeIsSet_ = false;
}

int64_t FlowDetailsVO::getAggStartTime() const
{
    return aggStartTime_;
}

void FlowDetailsVO::setAggStartTime(int64_t value)
{
    aggStartTime_ = value;
    aggStartTimeIsSet_ = true;
}

bool FlowDetailsVO::aggStartTimeIsSet() const
{
    return aggStartTimeIsSet_;
}

void FlowDetailsVO::unsetaggStartTime()
{
    aggStartTimeIsSet_ = false;
}

int64_t FlowDetailsVO::getAggEndTime() const
{
    return aggEndTime_;
}

void FlowDetailsVO::setAggEndTime(int64_t value)
{
    aggEndTime_ = value;
    aggEndTimeIsSet_ = true;
}

bool FlowDetailsVO::aggEndTimeIsSet() const
{
    return aggEndTimeIsSet_;
}

void FlowDetailsVO::unsetaggEndTime()
{
    aggEndTimeIsSet_ = false;
}

std::vector<ItemVO>& FlowDetailsVO::getPorts()
{
    return ports_;
}

void FlowDetailsVO::setPorts(const std::vector<ItemVO>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool FlowDetailsVO::portsIsSet() const
{
    return portsIsSet_;
}

void FlowDetailsVO::unsetports()
{
    portsIsSet_ = false;
}

std::string FlowDetailsVO::getRegion() const
{
    return region_;
}

void FlowDetailsVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool FlowDetailsVO::regionIsSet() const
{
    return regionIsSet_;
}

void FlowDetailsVO::unsetregion()
{
    regionIsSet_ = false;
}

double FlowDetailsVO::getRequestByte() const
{
    return requestByte_;
}

void FlowDetailsVO::setRequestByte(double value)
{
    requestByte_ = value;
    requestByteIsSet_ = true;
}

bool FlowDetailsVO::requestByteIsSet() const
{
    return requestByteIsSet_;
}

void FlowDetailsVO::unsetrequestByte()
{
    requestByteIsSet_ = false;
}

double FlowDetailsVO::getResponseByte() const
{
    return responseByte_;
}

void FlowDetailsVO::setResponseByte(double value)
{
    responseByte_ = value;
    responseByteIsSet_ = true;
}

bool FlowDetailsVO::responseByteIsSet() const
{
    return responseByteIsSet_;
}

void FlowDetailsVO::unsetresponseByte()
{
    responseByteIsSet_ = false;
}

int64_t FlowDetailsVO::getSessions() const
{
    return sessions_;
}

void FlowDetailsVO::setSessions(int64_t value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool FlowDetailsVO::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void FlowDetailsVO::unsetsessions()
{
    sessionsIsSet_ = false;
}

std::string FlowDetailsVO::getTags() const
{
    return tags_;
}

void FlowDetailsVO::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool FlowDetailsVO::tagsIsSet() const
{
    return tagsIsSet_;
}

void FlowDetailsVO::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ItemVO>& FlowDetailsVO::getSrcIp()
{
    return srcIp_;
}

void FlowDetailsVO::setSrcIp(const std::vector<ItemVO>& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool FlowDetailsVO::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void FlowDetailsVO::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

std::vector<ItemVO>& FlowDetailsVO::getDstIp()
{
    return dstIp_;
}

void FlowDetailsVO::setDstIp(const std::vector<ItemVO>& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool FlowDetailsVO::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void FlowDetailsVO::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::string FlowDetailsVO::getProtocol() const
{
    return protocol_;
}

void FlowDetailsVO::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool FlowDetailsVO::protocolIsSet() const
{
    return protocolIsSet_;
}

void FlowDetailsVO::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


