

#include "huaweicloud/drs/v3/model/QueryDataGuardMonitorResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryDataGuardMonitorResponse::QueryDataGuardMonitorResponse()
{
    bandwidth_ = "";
    bandwidthIsSet_ = false;
    cpuUsedPercent_ = "";
    cpuUsedPercentIsSet_ = false;
    dstDelay_ = 0L;
    dstDelayIsSet_ = false;
    dstIo_ = "";
    dstIoIsSet_ = false;
    dstNormal_ = false;
    dstNormalIsSet_ = false;
    dstOffset_ = "";
    dstOffsetIsSet_ = false;
    dstRps_ = "";
    dstRpsIsSet_ = false;
    memUsedInMB_ = "";
    memUsedInMBIsSet_ = false;
    nodeMemInMB_ = 0L;
    nodeMemInMBIsSet_ = false;
    nodeOffset_ = "";
    nodeOffsetIsSet_ = false;
    nodeVolumeInGB_ = 0L;
    nodeVolumeInGBIsSet_ = false;
    srDelay_ = 0L;
    srDelayIsSet_ = false;
    srOffset_ = "";
    srOffsetIsSet_ = false;
    srcIo_ = "";
    srcIoIsSet_ = false;
    srcNormal_ = false;
    srcNormalIsSet_ = false;
    srcRps_ = "";
    srcRpsIsSet_ = false;
    transInMB_ = "";
    transInMBIsSet_ = false;
    transLines_ = "";
    transLinesIsSet_ = false;
    volumeUsedInGB_ = "";
    volumeUsedInGBIsSet_ = false;
    migrationBytesPerSecond_ = 0L;
    migrationBytesPerSecondIsSet_ = false;
}

QueryDataGuardMonitorResponse::~QueryDataGuardMonitorResponse() = default;

void QueryDataGuardMonitorResponse::validate()
{
}

web::json::value QueryDataGuardMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(cpuUsedPercentIsSet_) {
        val[utility::conversions::to_string_t("cpuUsed_percent")] = ModelBase::toJson(cpuUsedPercent_);
    }
    if(dstDelayIsSet_) {
        val[utility::conversions::to_string_t("dst_delay")] = ModelBase::toJson(dstDelay_);
    }
    if(dstIoIsSet_) {
        val[utility::conversions::to_string_t("dst_io")] = ModelBase::toJson(dstIo_);
    }
    if(dstNormalIsSet_) {
        val[utility::conversions::to_string_t("dst_normal")] = ModelBase::toJson(dstNormal_);
    }
    if(dstOffsetIsSet_) {
        val[utility::conversions::to_string_t("dst_offset")] = ModelBase::toJson(dstOffset_);
    }
    if(dstRpsIsSet_) {
        val[utility::conversions::to_string_t("dst_rps")] = ModelBase::toJson(dstRps_);
    }
    if(memUsedInMBIsSet_) {
        val[utility::conversions::to_string_t("mem_used_inMB")] = ModelBase::toJson(memUsedInMB_);
    }
    if(nodeMemInMBIsSet_) {
        val[utility::conversions::to_string_t("node_mem_inMB")] = ModelBase::toJson(nodeMemInMB_);
    }
    if(nodeOffsetIsSet_) {
        val[utility::conversions::to_string_t("node_offset")] = ModelBase::toJson(nodeOffset_);
    }
    if(nodeVolumeInGBIsSet_) {
        val[utility::conversions::to_string_t("node_volume_inGB")] = ModelBase::toJson(nodeVolumeInGB_);
    }
    if(srDelayIsSet_) {
        val[utility::conversions::to_string_t("sr_delay")] = ModelBase::toJson(srDelay_);
    }
    if(srOffsetIsSet_) {
        val[utility::conversions::to_string_t("sr_offset")] = ModelBase::toJson(srOffset_);
    }
    if(srcIoIsSet_) {
        val[utility::conversions::to_string_t("src_io")] = ModelBase::toJson(srcIo_);
    }
    if(srcNormalIsSet_) {
        val[utility::conversions::to_string_t("src_normal")] = ModelBase::toJson(srcNormal_);
    }
    if(srcRpsIsSet_) {
        val[utility::conversions::to_string_t("src_rps")] = ModelBase::toJson(srcRps_);
    }
    if(transInMBIsSet_) {
        val[utility::conversions::to_string_t("trans_inMB")] = ModelBase::toJson(transInMB_);
    }
    if(transLinesIsSet_) {
        val[utility::conversions::to_string_t("trans_lines")] = ModelBase::toJson(transLines_);
    }
    if(volumeUsedInGBIsSet_) {
        val[utility::conversions::to_string_t("volume_used_inGB")] = ModelBase::toJson(volumeUsedInGB_);
    }
    if(migrationBytesPerSecondIsSet_) {
        val[utility::conversions::to_string_t("migration_bytes_per_second")] = ModelBase::toJson(migrationBytesPerSecond_);
    }

    return val;
}

bool QueryDataGuardMonitorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuUsed_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuUsed_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUsedPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_normal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstNormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_rps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_rps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstRps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_used_inMB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_used_inMB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemUsedInMB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_mem_inMB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_mem_inMB"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeMemInMB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_volume_inGB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_volume_inGB"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeVolumeInGB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sr_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sr_delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sr_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sr_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_normal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcNormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_rps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_rps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcRps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_inMB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_inMB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransInMB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_lines"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_used_inGB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_used_inGB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeUsedInGB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migration_bytes_per_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migration_bytes_per_second"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrationBytesPerSecond(refVal);
        }
    }
    return ok;
}

std::string QueryDataGuardMonitorResponse::getBandwidth() const
{
    return bandwidth_;
}

void QueryDataGuardMonitorResponse::setBandwidth(const std::string& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void QueryDataGuardMonitorResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getCpuUsedPercent() const
{
    return cpuUsedPercent_;
}

void QueryDataGuardMonitorResponse::setCpuUsedPercent(const std::string& value)
{
    cpuUsedPercent_ = value;
    cpuUsedPercentIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::cpuUsedPercentIsSet() const
{
    return cpuUsedPercentIsSet_;
}

void QueryDataGuardMonitorResponse::unsetcpuUsedPercent()
{
    cpuUsedPercentIsSet_ = false;
}

int64_t QueryDataGuardMonitorResponse::getDstDelay() const
{
    return dstDelay_;
}

void QueryDataGuardMonitorResponse::setDstDelay(int64_t value)
{
    dstDelay_ = value;
    dstDelayIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::dstDelayIsSet() const
{
    return dstDelayIsSet_;
}

void QueryDataGuardMonitorResponse::unsetdstDelay()
{
    dstDelayIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getDstIo() const
{
    return dstIo_;
}

void QueryDataGuardMonitorResponse::setDstIo(const std::string& value)
{
    dstIo_ = value;
    dstIoIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::dstIoIsSet() const
{
    return dstIoIsSet_;
}

void QueryDataGuardMonitorResponse::unsetdstIo()
{
    dstIoIsSet_ = false;
}

bool QueryDataGuardMonitorResponse::isDstNormal() const
{
    return dstNormal_;
}

void QueryDataGuardMonitorResponse::setDstNormal(bool value)
{
    dstNormal_ = value;
    dstNormalIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::dstNormalIsSet() const
{
    return dstNormalIsSet_;
}

void QueryDataGuardMonitorResponse::unsetdstNormal()
{
    dstNormalIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getDstOffset() const
{
    return dstOffset_;
}

void QueryDataGuardMonitorResponse::setDstOffset(const std::string& value)
{
    dstOffset_ = value;
    dstOffsetIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::dstOffsetIsSet() const
{
    return dstOffsetIsSet_;
}

void QueryDataGuardMonitorResponse::unsetdstOffset()
{
    dstOffsetIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getDstRps() const
{
    return dstRps_;
}

void QueryDataGuardMonitorResponse::setDstRps(const std::string& value)
{
    dstRps_ = value;
    dstRpsIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::dstRpsIsSet() const
{
    return dstRpsIsSet_;
}

void QueryDataGuardMonitorResponse::unsetdstRps()
{
    dstRpsIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getMemUsedInMB() const
{
    return memUsedInMB_;
}

void QueryDataGuardMonitorResponse::setMemUsedInMB(const std::string& value)
{
    memUsedInMB_ = value;
    memUsedInMBIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::memUsedInMBIsSet() const
{
    return memUsedInMBIsSet_;
}

void QueryDataGuardMonitorResponse::unsetmemUsedInMB()
{
    memUsedInMBIsSet_ = false;
}

int64_t QueryDataGuardMonitorResponse::getNodeMemInMB() const
{
    return nodeMemInMB_;
}

void QueryDataGuardMonitorResponse::setNodeMemInMB(int64_t value)
{
    nodeMemInMB_ = value;
    nodeMemInMBIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::nodeMemInMBIsSet() const
{
    return nodeMemInMBIsSet_;
}

void QueryDataGuardMonitorResponse::unsetnodeMemInMB()
{
    nodeMemInMBIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getNodeOffset() const
{
    return nodeOffset_;
}

void QueryDataGuardMonitorResponse::setNodeOffset(const std::string& value)
{
    nodeOffset_ = value;
    nodeOffsetIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::nodeOffsetIsSet() const
{
    return nodeOffsetIsSet_;
}

void QueryDataGuardMonitorResponse::unsetnodeOffset()
{
    nodeOffsetIsSet_ = false;
}

int64_t QueryDataGuardMonitorResponse::getNodeVolumeInGB() const
{
    return nodeVolumeInGB_;
}

void QueryDataGuardMonitorResponse::setNodeVolumeInGB(int64_t value)
{
    nodeVolumeInGB_ = value;
    nodeVolumeInGBIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::nodeVolumeInGBIsSet() const
{
    return nodeVolumeInGBIsSet_;
}

void QueryDataGuardMonitorResponse::unsetnodeVolumeInGB()
{
    nodeVolumeInGBIsSet_ = false;
}

int64_t QueryDataGuardMonitorResponse::getSrDelay() const
{
    return srDelay_;
}

void QueryDataGuardMonitorResponse::setSrDelay(int64_t value)
{
    srDelay_ = value;
    srDelayIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::srDelayIsSet() const
{
    return srDelayIsSet_;
}

void QueryDataGuardMonitorResponse::unsetsrDelay()
{
    srDelayIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getSrOffset() const
{
    return srOffset_;
}

void QueryDataGuardMonitorResponse::setSrOffset(const std::string& value)
{
    srOffset_ = value;
    srOffsetIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::srOffsetIsSet() const
{
    return srOffsetIsSet_;
}

void QueryDataGuardMonitorResponse::unsetsrOffset()
{
    srOffsetIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getSrcIo() const
{
    return srcIo_;
}

void QueryDataGuardMonitorResponse::setSrcIo(const std::string& value)
{
    srcIo_ = value;
    srcIoIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::srcIoIsSet() const
{
    return srcIoIsSet_;
}

void QueryDataGuardMonitorResponse::unsetsrcIo()
{
    srcIoIsSet_ = false;
}

bool QueryDataGuardMonitorResponse::isSrcNormal() const
{
    return srcNormal_;
}

void QueryDataGuardMonitorResponse::setSrcNormal(bool value)
{
    srcNormal_ = value;
    srcNormalIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::srcNormalIsSet() const
{
    return srcNormalIsSet_;
}

void QueryDataGuardMonitorResponse::unsetsrcNormal()
{
    srcNormalIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getSrcRps() const
{
    return srcRps_;
}

void QueryDataGuardMonitorResponse::setSrcRps(const std::string& value)
{
    srcRps_ = value;
    srcRpsIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::srcRpsIsSet() const
{
    return srcRpsIsSet_;
}

void QueryDataGuardMonitorResponse::unsetsrcRps()
{
    srcRpsIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getTransInMB() const
{
    return transInMB_;
}

void QueryDataGuardMonitorResponse::setTransInMB(const std::string& value)
{
    transInMB_ = value;
    transInMBIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::transInMBIsSet() const
{
    return transInMBIsSet_;
}

void QueryDataGuardMonitorResponse::unsettransInMB()
{
    transInMBIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getTransLines() const
{
    return transLines_;
}

void QueryDataGuardMonitorResponse::setTransLines(const std::string& value)
{
    transLines_ = value;
    transLinesIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::transLinesIsSet() const
{
    return transLinesIsSet_;
}

void QueryDataGuardMonitorResponse::unsettransLines()
{
    transLinesIsSet_ = false;
}

std::string QueryDataGuardMonitorResponse::getVolumeUsedInGB() const
{
    return volumeUsedInGB_;
}

void QueryDataGuardMonitorResponse::setVolumeUsedInGB(const std::string& value)
{
    volumeUsedInGB_ = value;
    volumeUsedInGBIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::volumeUsedInGBIsSet() const
{
    return volumeUsedInGBIsSet_;
}

void QueryDataGuardMonitorResponse::unsetvolumeUsedInGB()
{
    volumeUsedInGBIsSet_ = false;
}

int64_t QueryDataGuardMonitorResponse::getMigrationBytesPerSecond() const
{
    return migrationBytesPerSecond_;
}

void QueryDataGuardMonitorResponse::setMigrationBytesPerSecond(int64_t value)
{
    migrationBytesPerSecond_ = value;
    migrationBytesPerSecondIsSet_ = true;
}

bool QueryDataGuardMonitorResponse::migrationBytesPerSecondIsSet() const
{
    return migrationBytesPerSecondIsSet_;
}

void QueryDataGuardMonitorResponse::unsetmigrationBytesPerSecond()
{
    migrationBytesPerSecondIsSet_ = false;
}

}
}
}
}
}


