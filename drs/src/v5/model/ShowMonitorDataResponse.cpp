

#include "huaweicloud/drs/v5/model/ShowMonitorDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowMonitorDataResponse::ShowMonitorDataResponse()
{
    bandwidth_ = "";
    bandwidthIsSet_ = false;
    isSrcNormal_ = false;
    isSrcNormalIsSet_ = false;
    isDstNormal_ = false;
    isDstNormalIsSet_ = false;
    srcOffset_ = "";
    srcOffsetIsSet_ = false;
    nodeOffset_ = "";
    nodeOffsetIsSet_ = false;
    dstOffset_ = "";
    dstOffsetIsSet_ = false;
    srcDelay_ = 0;
    srcDelayIsSet_ = false;
    dstDelay_ = 0;
    dstDelayIsSet_ = false;
    srcRps_ = "";
    srcRpsIsSet_ = false;
    srcIo_ = "";
    srcIoIsSet_ = false;
    dstRps_ = "";
    dstRpsIsSet_ = false;
    dstIo_ = "";
    dstIoIsSet_ = false;
    transData_ = "";
    transDataIsSet_ = false;
    transLines_ = "";
    transLinesIsSet_ = false;
    usedVolumes_ = "";
    usedVolumesIsSet_ = false;
    usedMemory_ = "";
    usedMemoryIsSet_ = false;
    usedCpuPercent_ = "";
    usedCpuPercentIsSet_ = false;
    nodeVolumeSize_ = 0;
    nodeVolumeSizeIsSet_ = false;
    nodeMemorySize_ = 0;
    nodeMemorySizeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    applyRate_ = 0;
    applyRateIsSet_ = false;
}

ShowMonitorDataResponse::~ShowMonitorDataResponse() = default;

void ShowMonitorDataResponse::validate()
{
}

web::json::value ShowMonitorDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(isSrcNormalIsSet_) {
        val[utility::conversions::to_string_t("is_src_normal")] = ModelBase::toJson(isSrcNormal_);
    }
    if(isDstNormalIsSet_) {
        val[utility::conversions::to_string_t("is_dst_normal")] = ModelBase::toJson(isDstNormal_);
    }
    if(srcOffsetIsSet_) {
        val[utility::conversions::to_string_t("src_offset")] = ModelBase::toJson(srcOffset_);
    }
    if(nodeOffsetIsSet_) {
        val[utility::conversions::to_string_t("node_offset")] = ModelBase::toJson(nodeOffset_);
    }
    if(dstOffsetIsSet_) {
        val[utility::conversions::to_string_t("dst_offset")] = ModelBase::toJson(dstOffset_);
    }
    if(srcDelayIsSet_) {
        val[utility::conversions::to_string_t("src_delay")] = ModelBase::toJson(srcDelay_);
    }
    if(dstDelayIsSet_) {
        val[utility::conversions::to_string_t("dst_delay")] = ModelBase::toJson(dstDelay_);
    }
    if(srcRpsIsSet_) {
        val[utility::conversions::to_string_t("src_rps")] = ModelBase::toJson(srcRps_);
    }
    if(srcIoIsSet_) {
        val[utility::conversions::to_string_t("src_io")] = ModelBase::toJson(srcIo_);
    }
    if(dstRpsIsSet_) {
        val[utility::conversions::to_string_t("dst_rps")] = ModelBase::toJson(dstRps_);
    }
    if(dstIoIsSet_) {
        val[utility::conversions::to_string_t("dst_io")] = ModelBase::toJson(dstIo_);
    }
    if(transDataIsSet_) {
        val[utility::conversions::to_string_t("trans_data")] = ModelBase::toJson(transData_);
    }
    if(transLinesIsSet_) {
        val[utility::conversions::to_string_t("trans_lines")] = ModelBase::toJson(transLines_);
    }
    if(usedVolumesIsSet_) {
        val[utility::conversions::to_string_t("used_volumes")] = ModelBase::toJson(usedVolumes_);
    }
    if(usedMemoryIsSet_) {
        val[utility::conversions::to_string_t("used_memory")] = ModelBase::toJson(usedMemory_);
    }
    if(usedCpuPercentIsSet_) {
        val[utility::conversions::to_string_t("used_cpu_percent")] = ModelBase::toJson(usedCpuPercent_);
    }
    if(nodeVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("node_volume_size")] = ModelBase::toJson(nodeVolumeSize_);
    }
    if(nodeMemorySizeIsSet_) {
        val[utility::conversions::to_string_t("node_memory_size")] = ModelBase::toJson(nodeMemorySize_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(applyRateIsSet_) {
        val[utility::conversions::to_string_t("apply_rate")] = ModelBase::toJson(applyRate_);
    }

    return val;
}
bool ShowMonitorDataResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_src_normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_src_normal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSrcNormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_dst_normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_dst_normal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDstNormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dst_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDelay(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcIo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dst_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("used_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_volumes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_cpu_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_cpu_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedCpuPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_memory_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_memory_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeMemorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyRate(refVal);
        }
    }
    return ok;
}


std::string ShowMonitorDataResponse::getBandwidth() const
{
    return bandwidth_;
}

void ShowMonitorDataResponse::setBandwidth(const std::string& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool ShowMonitorDataResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void ShowMonitorDataResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

bool ShowMonitorDataResponse::isIsSrcNormal() const
{
    return isSrcNormal_;
}

void ShowMonitorDataResponse::setIsSrcNormal(bool value)
{
    isSrcNormal_ = value;
    isSrcNormalIsSet_ = true;
}

bool ShowMonitorDataResponse::isSrcNormalIsSet() const
{
    return isSrcNormalIsSet_;
}

void ShowMonitorDataResponse::unsetisSrcNormal()
{
    isSrcNormalIsSet_ = false;
}

bool ShowMonitorDataResponse::isIsDstNormal() const
{
    return isDstNormal_;
}

void ShowMonitorDataResponse::setIsDstNormal(bool value)
{
    isDstNormal_ = value;
    isDstNormalIsSet_ = true;
}

bool ShowMonitorDataResponse::isDstNormalIsSet() const
{
    return isDstNormalIsSet_;
}

void ShowMonitorDataResponse::unsetisDstNormal()
{
    isDstNormalIsSet_ = false;
}

std::string ShowMonitorDataResponse::getSrcOffset() const
{
    return srcOffset_;
}

void ShowMonitorDataResponse::setSrcOffset(const std::string& value)
{
    srcOffset_ = value;
    srcOffsetIsSet_ = true;
}

bool ShowMonitorDataResponse::srcOffsetIsSet() const
{
    return srcOffsetIsSet_;
}

void ShowMonitorDataResponse::unsetsrcOffset()
{
    srcOffsetIsSet_ = false;
}

std::string ShowMonitorDataResponse::getNodeOffset() const
{
    return nodeOffset_;
}

void ShowMonitorDataResponse::setNodeOffset(const std::string& value)
{
    nodeOffset_ = value;
    nodeOffsetIsSet_ = true;
}

bool ShowMonitorDataResponse::nodeOffsetIsSet() const
{
    return nodeOffsetIsSet_;
}

void ShowMonitorDataResponse::unsetnodeOffset()
{
    nodeOffsetIsSet_ = false;
}

std::string ShowMonitorDataResponse::getDstOffset() const
{
    return dstOffset_;
}

void ShowMonitorDataResponse::setDstOffset(const std::string& value)
{
    dstOffset_ = value;
    dstOffsetIsSet_ = true;
}

bool ShowMonitorDataResponse::dstOffsetIsSet() const
{
    return dstOffsetIsSet_;
}

void ShowMonitorDataResponse::unsetdstOffset()
{
    dstOffsetIsSet_ = false;
}

int32_t ShowMonitorDataResponse::getSrcDelay() const
{
    return srcDelay_;
}

void ShowMonitorDataResponse::setSrcDelay(int32_t value)
{
    srcDelay_ = value;
    srcDelayIsSet_ = true;
}

bool ShowMonitorDataResponse::srcDelayIsSet() const
{
    return srcDelayIsSet_;
}

void ShowMonitorDataResponse::unsetsrcDelay()
{
    srcDelayIsSet_ = false;
}

int32_t ShowMonitorDataResponse::getDstDelay() const
{
    return dstDelay_;
}

void ShowMonitorDataResponse::setDstDelay(int32_t value)
{
    dstDelay_ = value;
    dstDelayIsSet_ = true;
}

bool ShowMonitorDataResponse::dstDelayIsSet() const
{
    return dstDelayIsSet_;
}

void ShowMonitorDataResponse::unsetdstDelay()
{
    dstDelayIsSet_ = false;
}

std::string ShowMonitorDataResponse::getSrcRps() const
{
    return srcRps_;
}

void ShowMonitorDataResponse::setSrcRps(const std::string& value)
{
    srcRps_ = value;
    srcRpsIsSet_ = true;
}

bool ShowMonitorDataResponse::srcRpsIsSet() const
{
    return srcRpsIsSet_;
}

void ShowMonitorDataResponse::unsetsrcRps()
{
    srcRpsIsSet_ = false;
}

std::string ShowMonitorDataResponse::getSrcIo() const
{
    return srcIo_;
}

void ShowMonitorDataResponse::setSrcIo(const std::string& value)
{
    srcIo_ = value;
    srcIoIsSet_ = true;
}

bool ShowMonitorDataResponse::srcIoIsSet() const
{
    return srcIoIsSet_;
}

void ShowMonitorDataResponse::unsetsrcIo()
{
    srcIoIsSet_ = false;
}

std::string ShowMonitorDataResponse::getDstRps() const
{
    return dstRps_;
}

void ShowMonitorDataResponse::setDstRps(const std::string& value)
{
    dstRps_ = value;
    dstRpsIsSet_ = true;
}

bool ShowMonitorDataResponse::dstRpsIsSet() const
{
    return dstRpsIsSet_;
}

void ShowMonitorDataResponse::unsetdstRps()
{
    dstRpsIsSet_ = false;
}

std::string ShowMonitorDataResponse::getDstIo() const
{
    return dstIo_;
}

void ShowMonitorDataResponse::setDstIo(const std::string& value)
{
    dstIo_ = value;
    dstIoIsSet_ = true;
}

bool ShowMonitorDataResponse::dstIoIsSet() const
{
    return dstIoIsSet_;
}

void ShowMonitorDataResponse::unsetdstIo()
{
    dstIoIsSet_ = false;
}

std::string ShowMonitorDataResponse::getTransData() const
{
    return transData_;
}

void ShowMonitorDataResponse::setTransData(const std::string& value)
{
    transData_ = value;
    transDataIsSet_ = true;
}

bool ShowMonitorDataResponse::transDataIsSet() const
{
    return transDataIsSet_;
}

void ShowMonitorDataResponse::unsettransData()
{
    transDataIsSet_ = false;
}

std::string ShowMonitorDataResponse::getTransLines() const
{
    return transLines_;
}

void ShowMonitorDataResponse::setTransLines(const std::string& value)
{
    transLines_ = value;
    transLinesIsSet_ = true;
}

bool ShowMonitorDataResponse::transLinesIsSet() const
{
    return transLinesIsSet_;
}

void ShowMonitorDataResponse::unsettransLines()
{
    transLinesIsSet_ = false;
}

std::string ShowMonitorDataResponse::getUsedVolumes() const
{
    return usedVolumes_;
}

void ShowMonitorDataResponse::setUsedVolumes(const std::string& value)
{
    usedVolumes_ = value;
    usedVolumesIsSet_ = true;
}

bool ShowMonitorDataResponse::usedVolumesIsSet() const
{
    return usedVolumesIsSet_;
}

void ShowMonitorDataResponse::unsetusedVolumes()
{
    usedVolumesIsSet_ = false;
}

std::string ShowMonitorDataResponse::getUsedMemory() const
{
    return usedMemory_;
}

void ShowMonitorDataResponse::setUsedMemory(const std::string& value)
{
    usedMemory_ = value;
    usedMemoryIsSet_ = true;
}

bool ShowMonitorDataResponse::usedMemoryIsSet() const
{
    return usedMemoryIsSet_;
}

void ShowMonitorDataResponse::unsetusedMemory()
{
    usedMemoryIsSet_ = false;
}

std::string ShowMonitorDataResponse::getUsedCpuPercent() const
{
    return usedCpuPercent_;
}

void ShowMonitorDataResponse::setUsedCpuPercent(const std::string& value)
{
    usedCpuPercent_ = value;
    usedCpuPercentIsSet_ = true;
}

bool ShowMonitorDataResponse::usedCpuPercentIsSet() const
{
    return usedCpuPercentIsSet_;
}

void ShowMonitorDataResponse::unsetusedCpuPercent()
{
    usedCpuPercentIsSet_ = false;
}

int32_t ShowMonitorDataResponse::getNodeVolumeSize() const
{
    return nodeVolumeSize_;
}

void ShowMonitorDataResponse::setNodeVolumeSize(int32_t value)
{
    nodeVolumeSize_ = value;
    nodeVolumeSizeIsSet_ = true;
}

bool ShowMonitorDataResponse::nodeVolumeSizeIsSet() const
{
    return nodeVolumeSizeIsSet_;
}

void ShowMonitorDataResponse::unsetnodeVolumeSize()
{
    nodeVolumeSizeIsSet_ = false;
}

int32_t ShowMonitorDataResponse::getNodeMemorySize() const
{
    return nodeMemorySize_;
}

void ShowMonitorDataResponse::setNodeMemorySize(int32_t value)
{
    nodeMemorySize_ = value;
    nodeMemorySizeIsSet_ = true;
}

bool ShowMonitorDataResponse::nodeMemorySizeIsSet() const
{
    return nodeMemorySizeIsSet_;
}

void ShowMonitorDataResponse::unsetnodeMemorySize()
{
    nodeMemorySizeIsSet_ = false;
}

std::string ShowMonitorDataResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowMonitorDataResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowMonitorDataResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowMonitorDataResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t ShowMonitorDataResponse::getApplyRate() const
{
    return applyRate_;
}

void ShowMonitorDataResponse::setApplyRate(int32_t value)
{
    applyRate_ = value;
    applyRateIsSet_ = true;
}

bool ShowMonitorDataResponse::applyRateIsSet() const
{
    return applyRateIsSet_;
}

void ShowMonitorDataResponse::unsetapplyRate()
{
    applyRateIsSet_ = false;
}

}
}
}
}
}


