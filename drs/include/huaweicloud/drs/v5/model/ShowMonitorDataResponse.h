
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowMonitorDataResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowMonitorDataResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowMonitorDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMonitorDataResponse();
    virtual ~ShowMonitorDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMonitorDataResponse members

    /// <summary>
    /// EIP带宽，单位：MB/S
    /// </summary>

    std::string getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const std::string& value);

    /// <summary>
    /// 源库连接状态是否正常。
    /// </summary>

    bool isIsSrcNormal() const;
    bool isSrcNormalIsSet() const;
    void unsetisSrcNormal();
    void setIsSrcNormal(bool value);

    /// <summary>
    /// 目标库连接状态是否正常。
    /// </summary>

    bool isIsDstNormal() const;
    bool isDstNormalIsSet() const;
    void unsetisDstNormal();
    void setIsDstNormal(bool value);

    /// <summary>
    /// 源库offSet位点。
    /// </summary>

    std::string getSrcOffset() const;
    bool srcOffsetIsSet() const;
    void unsetsrcOffset();
    void setSrcOffset(const std::string& value);

    /// <summary>
    /// 迁移实例offSet位点。
    /// </summary>

    std::string getNodeOffset() const;
    bool nodeOffsetIsSet() const;
    void unsetnodeOffset();
    void setNodeOffset(const std::string& value);

    /// <summary>
    /// 目标库offSet位点。
    /// </summary>

    std::string getDstOffset() const;
    bool dstOffsetIsSet() const;
    void unsetdstOffset();
    void setDstOffset(const std::string& value);

    /// <summary>
    /// 源库时延。
    /// </summary>

    int32_t getSrcDelay() const;
    bool srcDelayIsSet() const;
    void unsetsrcDelay();
    void setSrcDelay(int32_t value);

    /// <summary>
    /// 目标库时延。
    /// </summary>

    int32_t getDstDelay() const;
    bool dstDelayIsSet() const;
    void unsetdstDelay();
    void setDstDelay(int32_t value);

    /// <summary>
    /// 源库RPS。
    /// </summary>

    std::string getSrcRps() const;
    bool srcRpsIsSet() const;
    void unsetsrcRps();
    void setSrcRps(const std::string& value);

    /// <summary>
    /// 源库IO。
    /// </summary>

    std::string getSrcIo() const;
    bool srcIoIsSet() const;
    void unsetsrcIo();
    void setSrcIo(const std::string& value);

    /// <summary>
    /// 目标库RPS。
    /// </summary>

    std::string getDstRps() const;
    bool dstRpsIsSet() const;
    void unsetdstRps();
    void setDstRps(const std::string& value);

    /// <summary>
    /// 目标库IO。
    /// </summary>

    std::string getDstIo() const;
    bool dstIoIsSet() const;
    void unsetdstIo();
    void setDstIo(const std::string& value);

    /// <summary>
    /// 迁移数据量。单位：MB
    /// </summary>

    std::string getTransData() const;
    bool transDataIsSet() const;
    void unsettransData();
    void setTransData(const std::string& value);

    /// <summary>
    /// 迁移数据行数。
    /// </summary>

    std::string getTransLines() const;
    bool transLinesIsSet() const;
    void unsettransLines();
    void setTransLines(const std::string& value);

    /// <summary>
    /// 磁盘使用量。单位：GB
    /// </summary>

    std::string getUsedVolumes() const;
    bool usedVolumesIsSet() const;
    void unsetusedVolumes();
    void setUsedVolumes(const std::string& value);

    /// <summary>
    /// 内存使用量。单位：MB
    /// </summary>

    std::string getUsedMemory() const;
    bool usedMemoryIsSet() const;
    void unsetusedMemory();
    void setUsedMemory(const std::string& value);

    /// <summary>
    /// CPU使用百分比。
    /// </summary>

    std::string getUsedCpuPercent() const;
    bool usedCpuPercentIsSet() const;
    void unsetusedCpuPercent();
    void setUsedCpuPercent(const std::string& value);

    /// <summary>
    /// node磁盘总大小。单位：GB
    /// </summary>

    int32_t getNodeVolumeSize() const;
    bool nodeVolumeSizeIsSet() const;
    void unsetnodeVolumeSize();
    void setNodeVolumeSize(int32_t value);

    /// <summary>
    /// node内存总大小。单位：MB
    /// </summary>

    int32_t getNodeMemorySize() const;
    bool nodeMemorySizeIsSet() const;
    void unsetnodeMemorySize();
    void setNodeMemorySize(int32_t value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 同步速度。单位：byte/s
    /// </summary>

    int32_t getApplyRate() const;
    bool applyRateIsSet() const;
    void unsetapplyRate();
    void setApplyRate(int32_t value);


protected:
    std::string bandwidth_;
    bool bandwidthIsSet_;
    bool isSrcNormal_;
    bool isSrcNormalIsSet_;
    bool isDstNormal_;
    bool isDstNormalIsSet_;
    std::string srcOffset_;
    bool srcOffsetIsSet_;
    std::string nodeOffset_;
    bool nodeOffsetIsSet_;
    std::string dstOffset_;
    bool dstOffsetIsSet_;
    int32_t srcDelay_;
    bool srcDelayIsSet_;
    int32_t dstDelay_;
    bool dstDelayIsSet_;
    std::string srcRps_;
    bool srcRpsIsSet_;
    std::string srcIo_;
    bool srcIoIsSet_;
    std::string dstRps_;
    bool dstRpsIsSet_;
    std::string dstIo_;
    bool dstIoIsSet_;
    std::string transData_;
    bool transDataIsSet_;
    std::string transLines_;
    bool transLinesIsSet_;
    std::string usedVolumes_;
    bool usedVolumesIsSet_;
    std::string usedMemory_;
    bool usedMemoryIsSet_;
    std::string usedCpuPercent_;
    bool usedCpuPercentIsSet_;
    int32_t nodeVolumeSize_;
    bool nodeVolumeSizeIsSet_;
    int32_t nodeMemorySize_;
    bool nodeMemorySizeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int32_t applyRate_;
    bool applyRateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowMonitorDataResponse_H_
