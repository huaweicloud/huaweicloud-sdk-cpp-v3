

#include "huaweicloud/cfw/v1/model/HttpQueryCfwFlowLogsResponseDTO_data_records.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpQueryCfwFlowLogsResponseDTO_data_records::HttpQueryCfwFlowLogsResponseDTO_data_records()
{
    bytes_ = 0.0;
    bytesIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    packets_ = 0;
    packetsIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    srcIp_ = "";
    srcIpIsSet_ = false;
    srcPort_ = 0;
    srcPortIsSet_ = false;
    dstIp_ = "";
    dstIpIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    dstPort_ = 0;
    dstPortIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    dstHost_ = "";
    dstHostIsSet_ = false;
    dstRegionId_ = "";
    dstRegionIdIsSet_ = false;
    dstRegionName_ = "";
    dstRegionNameIsSet_ = false;
    srcRegionId_ = "";
    srcRegionIdIsSet_ = false;
    srcRegionName_ = "";
    srcRegionNameIsSet_ = false;
}

HttpQueryCfwFlowLogsResponseDTO_data_records::~HttpQueryCfwFlowLogsResponseDTO_data_records() = default;

void HttpQueryCfwFlowLogsResponseDTO_data_records::validate()
{
}

web::json::value HttpQueryCfwFlowLogsResponseDTO_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bytesIsSet_) {
        val[utility::conversions::to_string_t("bytes")] = ModelBase::toJson(bytes_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(packetsIsSet_) {
        val[utility::conversions::to_string_t("packets")] = ModelBase::toJson(packets_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(srcIpIsSet_) {
        val[utility::conversions::to_string_t("src_ip")] = ModelBase::toJson(srcIp_);
    }
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }
    if(dstIpIsSet_) {
        val[utility::conversions::to_string_t("dst_ip")] = ModelBase::toJson(dstIp_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
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
    if(srcRegionIdIsSet_) {
        val[utility::conversions::to_string_t("src_region_id")] = ModelBase::toJson(srcRegionId_);
    }
    if(srcRegionNameIsSet_) {
        val[utility::conversions::to_string_t("src_region_name")] = ModelBase::toJson(srcRegionName_);
    }

    return val;
}
bool HttpQueryCfwFlowLogsResponseDTO_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packets"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
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
    return ok;
}


double HttpQueryCfwFlowLogsResponseDTO_data_records::getBytes() const
{
    return bytes_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setBytes(double value)
{
    bytes_ = value;
    bytesIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::bytesIsSet() const
{
    return bytesIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetbytes()
{
    bytesIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getDirection() const
{
    return direction_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::directionIsSet() const
{
    return directionIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t HttpQueryCfwFlowLogsResponseDTO_data_records::getPackets() const
{
    return packets_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setPackets(int32_t value)
{
    packets_ = value;
    packetsIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::packetsIsSet() const
{
    return packetsIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetpackets()
{
    packetsIsSet_ = false;
}

int64_t HttpQueryCfwFlowLogsResponseDTO_data_records::getStartTime() const
{
    return startTime_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t HttpQueryCfwFlowLogsResponseDTO_data_records::getEndTime() const
{
    return endTime_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getLogId() const
{
    return logId_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::logIdIsSet() const
{
    return logIdIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetlogId()
{
    logIdIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getSrcIp() const
{
    return srcIp_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setSrcIp(const std::string& value)
{
    srcIp_ = value;
    srcIpIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::srcIpIsSet() const
{
    return srcIpIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetsrcIp()
{
    srcIpIsSet_ = false;
}

int32_t HttpQueryCfwFlowLogsResponseDTO_data_records::getSrcPort() const
{
    return srcPort_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setSrcPort(int32_t value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getDstIp() const
{
    return dstIp_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setDstIp(const std::string& value)
{
    dstIp_ = value;
    dstIpIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::dstIpIsSet() const
{
    return dstIpIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetdstIp()
{
    dstIpIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getApp() const
{
    return app_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::appIsSet() const
{
    return appIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetapp()
{
    appIsSet_ = false;
}

int32_t HttpQueryCfwFlowLogsResponseDTO_data_records::getDstPort() const
{
    return dstPort_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setDstPort(int32_t value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getProtocol() const
{
    return protocol_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::protocolIsSet() const
{
    return protocolIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getDstHost() const
{
    return dstHost_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setDstHost(const std::string& value)
{
    dstHost_ = value;
    dstHostIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::dstHostIsSet() const
{
    return dstHostIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetdstHost()
{
    dstHostIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getDstRegionId() const
{
    return dstRegionId_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setDstRegionId(const std::string& value)
{
    dstRegionId_ = value;
    dstRegionIdIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::dstRegionIdIsSet() const
{
    return dstRegionIdIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetdstRegionId()
{
    dstRegionIdIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getDstRegionName() const
{
    return dstRegionName_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setDstRegionName(const std::string& value)
{
    dstRegionName_ = value;
    dstRegionNameIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::dstRegionNameIsSet() const
{
    return dstRegionNameIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetdstRegionName()
{
    dstRegionNameIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getSrcRegionId() const
{
    return srcRegionId_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setSrcRegionId(const std::string& value)
{
    srcRegionId_ = value;
    srcRegionIdIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::srcRegionIdIsSet() const
{
    return srcRegionIdIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetsrcRegionId()
{
    srcRegionIdIsSet_ = false;
}

std::string HttpQueryCfwFlowLogsResponseDTO_data_records::getSrcRegionName() const
{
    return srcRegionName_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::setSrcRegionName(const std::string& value)
{
    srcRegionName_ = value;
    srcRegionNameIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data_records::srcRegionNameIsSet() const
{
    return srcRegionNameIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data_records::unsetsrcRegionName()
{
    srcRegionNameIsSet_ = false;
}

}
}
}
}
}


