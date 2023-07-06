
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDataGuardMonitorResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDataGuardMonitorResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容灾监控数据响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryDataGuardMonitorResponse
    : public ModelBase
{
public:
    QueryDataGuardMonitorResponse();
    virtual ~QueryDataGuardMonitorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryDataGuardMonitorResponse members

    /// <summary>
    /// 带宽。
    /// </summary>

    std::string getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const std::string& value);

    /// <summary>
    /// cpu百分比。
    /// </summary>

    std::string getCpuUsedPercent() const;
    bool cpuUsedPercentIsSet() const;
    void unsetcpuUsedPercent();
    void setCpuUsedPercent(const std::string& value);

    /// <summary>
    /// 目标库时延。
    /// </summary>

    int64_t getDstDelay() const;
    bool dstDelayIsSet() const;
    void unsetdstDelay();
    void setDstDelay(int64_t value);

    /// <summary>
    /// 目标io。
    /// </summary>

    std::string getDstIo() const;
    bool dstIoIsSet() const;
    void unsetdstIo();
    void setDstIo(const std::string& value);

    /// <summary>
    /// 目标库连接状态。
    /// </summary>

    bool isDstNormal() const;
    bool dstNormalIsSet() const;
    void unsetdstNormal();
    void setDstNormal(bool value);

    /// <summary>
    /// 目标库offSet位点。
    /// </summary>

    std::string getDstOffset() const;
    bool dstOffsetIsSet() const;
    void unsetdstOffset();
    void setDstOffset(const std::string& value);

    /// <summary>
    /// 目标rps。
    /// </summary>

    std::string getDstRps() const;
    bool dstRpsIsSet() const;
    void unsetdstRps();
    void setDstRps(const std::string& value);

    /// <summary>
    /// 内存使用。
    /// </summary>

    std::string getMemUsedInMB() const;
    bool memUsedInMBIsSet() const;
    void unsetmemUsedInMB();
    void setMemUsedInMB(const std::string& value);

    /// <summary>
    /// node内存总大小。
    /// </summary>

    int64_t getNodeMemInMB() const;
    bool nodeMemInMBIsSet() const;
    void unsetnodeMemInMB();
    void setNodeMemInMB(int64_t value);

    /// <summary>
    /// 迁移实例offSet位点。
    /// </summary>

    std::string getNodeOffset() const;
    bool nodeOffsetIsSet() const;
    void unsetnodeOffset();
    void setNodeOffset(const std::string& value);

    /// <summary>
    /// node磁盘总大小。
    /// </summary>

    int64_t getNodeVolumeInGB() const;
    bool nodeVolumeInGBIsSet() const;
    void unsetnodeVolumeInGB();
    void setNodeVolumeInGB(int64_t value);

    /// <summary>
    /// 源库时延。
    /// </summary>

    int64_t getSrDelay() const;
    bool srDelayIsSet() const;
    void unsetsrDelay();
    void setSrDelay(int64_t value);

    /// <summary>
    /// 源库offSet位点。
    /// </summary>

    std::string getSrOffset() const;
    bool srOffsetIsSet() const;
    void unsetsrOffset();
    void setSrOffset(const std::string& value);

    /// <summary>
    /// 源io。
    /// </summary>

    std::string getSrcIo() const;
    bool srcIoIsSet() const;
    void unsetsrcIo();
    void setSrcIo(const std::string& value);

    /// <summary>
    /// 源库连接状态。
    /// </summary>

    bool isSrcNormal() const;
    bool srcNormalIsSet() const;
    void unsetsrcNormal();
    void setSrcNormal(bool value);

    /// <summary>
    /// 源rps。
    /// </summary>

    std::string getSrcRps() const;
    bool srcRpsIsSet() const;
    void unsetsrcRps();
    void setSrcRps(const std::string& value);

    /// <summary>
    /// 迁移数据量。
    /// </summary>

    std::string getTransInMB() const;
    bool transInMBIsSet() const;
    void unsettransInMB();
    void setTransInMB(const std::string& value);

    /// <summary>
    /// 迁移数据行数。
    /// </summary>

    std::string getTransLines() const;
    bool transLinesIsSet() const;
    void unsettransLines();
    void setTransLines(const std::string& value);

    /// <summary>
    /// 磁盘使用。
    /// </summary>

    std::string getVolumeUsedInGB() const;
    bool volumeUsedInGBIsSet() const;
    void unsetvolumeUsedInGB();
    void setVolumeUsedInGB(const std::string& value);

    /// <summary>
    /// 每秒迁移字节大小。
    /// </summary>

    int64_t getMigrationBytesPerSecond() const;
    bool migrationBytesPerSecondIsSet() const;
    void unsetmigrationBytesPerSecond();
    void setMigrationBytesPerSecond(int64_t value);


protected:
    std::string bandwidth_;
    bool bandwidthIsSet_;
    std::string cpuUsedPercent_;
    bool cpuUsedPercentIsSet_;
    int64_t dstDelay_;
    bool dstDelayIsSet_;
    std::string dstIo_;
    bool dstIoIsSet_;
    bool dstNormal_;
    bool dstNormalIsSet_;
    std::string dstOffset_;
    bool dstOffsetIsSet_;
    std::string dstRps_;
    bool dstRpsIsSet_;
    std::string memUsedInMB_;
    bool memUsedInMBIsSet_;
    int64_t nodeMemInMB_;
    bool nodeMemInMBIsSet_;
    std::string nodeOffset_;
    bool nodeOffsetIsSet_;
    int64_t nodeVolumeInGB_;
    bool nodeVolumeInGBIsSet_;
    int64_t srDelay_;
    bool srDelayIsSet_;
    std::string srOffset_;
    bool srOffsetIsSet_;
    std::string srcIo_;
    bool srcIoIsSet_;
    bool srcNormal_;
    bool srcNormalIsSet_;
    std::string srcRps_;
    bool srcRpsIsSet_;
    std::string transInMB_;
    bool transInMBIsSet_;
    std::string transLines_;
    bool transLinesIsSet_;
    std::string volumeUsedInGB_;
    bool volumeUsedInGBIsSet_;
    int64_t migrationBytesPerSecond_;
    bool migrationBytesPerSecondIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDataGuardMonitorResponse_H_
