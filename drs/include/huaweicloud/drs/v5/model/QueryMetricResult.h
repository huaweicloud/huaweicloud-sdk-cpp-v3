
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryMetricResult_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryMetricResult_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Node节点指标项。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryMetricResult
    : public ModelBase
{
public:
    QueryMetricResult();
    virtual ~QueryMetricResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryMetricResult members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 上报时间。
    /// </summary>

    utility::datetime getTimeStamp() const;
    bool timeStampIsSet() const;
    void unsettimeStamp();
    void setTimeStamp(const utility::datetime& value);

    /// <summary>
    /// CPU使用率。
    /// </summary>

    std::string getCpuUtil() const;
    bool cpuUtilIsSet() const;
    void unsetcpuUtil();
    void setCpuUtil(const std::string& value);

    /// <summary>
    /// 内存使用率。
    /// </summary>

    std::string getMemUtil() const;
    bool memUtilIsSet() const;
    void unsetmemUtil();
    void setMemUtil(const std::string& value);

    /// <summary>
    /// 网络输入吞吐量。
    /// </summary>

    std::string getNetworkIncomingBytesRate() const;
    bool networkIncomingBytesRateIsSet() const;
    void unsetnetworkIncomingBytesRate();
    void setNetworkIncomingBytesRate(const std::string& value);

    /// <summary>
    /// 网络输出吞吐量。
    /// </summary>

    std::string getNetworkOutgoingBytesRate() const;
    bool networkOutgoingBytesRateIsSet() const;
    void unsetnetworkOutgoingBytesRate();
    void setNetworkOutgoingBytesRate(const std::string& value);

    /// <summary>
    /// 磁盘读吞吐量。
    /// </summary>

    std::string getDiskReadBytesRate() const;
    bool diskReadBytesRateIsSet() const;
    void unsetdiskReadBytesRate();
    void setDiskReadBytesRate(const std::string& value);

    /// <summary>
    /// 磁盘写吞吐量。
    /// </summary>

    std::string getDiskWriteBytesRate() const;
    bool diskWriteBytesRateIsSet() const;
    void unsetdiskWriteBytesRate();
    void setDiskWriteBytesRate(const std::string& value);

    /// <summary>
    /// 写目标库频率。
    /// </summary>

    std::string getApplyRowsRate() const;
    bool applyRowsRateIsSet() const;
    void unsetapplyRowsRate();
    void setApplyRowsRate(const std::string& value);

    /// <summary>
    /// DML TPS。
    /// </summary>

    std::string getApplyTransactionsRate() const;
    bool applyTransactionsRateIsSet() const;
    void unsetapplyTransactionsRate();
    void setApplyTransactionsRate(const std::string& value);

    /// <summary>
    /// DDL TPS。
    /// </summary>

    std::string getApplyDdlRate() const;
    bool applyDdlRateIsSet() const;
    void unsetapplyDdlRate();
    void setApplyDdlRate(const std::string& value);

    /// <summary>
    /// 事务平均执行时间。
    /// </summary>

    std::string getApplyAverageExecuteTime() const;
    bool applyAverageExecuteTimeIsSet() const;
    void unsetapplyAverageExecuteTime();
    void setApplyAverageExecuteTime(const std::string& value);

    /// <summary>
    /// 事务平均提交时间。
    /// </summary>

    std::string getApplyAverageCommitTime() const;
    bool applyAverageCommitTimeIsSet() const;
    void unsetapplyAverageCommitTime();
    void setApplyAverageCommitTime(const std::string& value);

    /// <summary>
    /// 同步状态。
    /// </summary>

    std::string getApplyCurrentState() const;
    bool applyCurrentStateIsSet() const;
    void unsetapplyCurrentState();
    void setApplyCurrentState(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    utility::datetime timeStamp_;
    bool timeStampIsSet_;
    std::string cpuUtil_;
    bool cpuUtilIsSet_;
    std::string memUtil_;
    bool memUtilIsSet_;
    std::string networkIncomingBytesRate_;
    bool networkIncomingBytesRateIsSet_;
    std::string networkOutgoingBytesRate_;
    bool networkOutgoingBytesRateIsSet_;
    std::string diskReadBytesRate_;
    bool diskReadBytesRateIsSet_;
    std::string diskWriteBytesRate_;
    bool diskWriteBytesRateIsSet_;
    std::string applyRowsRate_;
    bool applyRowsRateIsSet_;
    std::string applyTransactionsRate_;
    bool applyTransactionsRateIsSet_;
    std::string applyDdlRate_;
    bool applyDdlRateIsSet_;
    std::string applyAverageExecuteTime_;
    bool applyAverageExecuteTimeIsSet_;
    std::string applyAverageCommitTime_;
    bool applyAverageCommitTimeIsSet_;
    std::string applyCurrentState_;
    bool applyCurrentStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryMetricResult_H_
