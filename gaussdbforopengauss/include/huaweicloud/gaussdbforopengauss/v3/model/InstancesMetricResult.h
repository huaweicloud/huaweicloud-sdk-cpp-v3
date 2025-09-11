
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstancesMetricResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstancesMetricResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdbforopengauss/v3/model/InstancesNodesResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  InstancesMetricResult
    : public ModelBase
{
public:
    InstancesMetricResult();
    virtual ~InstancesMetricResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstancesMetricResult members

    /// <summary>
    /// **参数解释**： 实例ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例状态。 **取值范围**： - creating，表示实例正在创建。 - normal，表示实例正常。 - abnormal，表示实例异常。 - createfail，表示实例创建失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例类型。 **取值范围**： 不涉及。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 引擎名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// **参数解释**： 引擎版本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 部署形态。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSolution() const;
    bool solutionIsSet() const;
    void unsetsolution();
    void setSolution(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例数据磁盘已使用大小。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDiskUsedSize() const;
    bool diskUsedSizeIsSet() const;
    void unsetdiskUsedSize();
    void setDiskUsedSize(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例数据磁盘总大小。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDiskTotalSize() const;
    bool diskTotalSizeIsSet() const;
    void unsetdiskTotalSize();
    void setDiskTotalSize(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例数据磁盘已使用百分比。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDiskUsage() const;
    bool diskUsageIsSet() const;
    void unsetdiskUsage();
    void setDiskUsage(const std::string& value);

    /// <summary>
    /// **参数解释**： 80% SQL的响应时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getP80() const;
    bool p80IsSet() const;
    void unsetp80();
    void setP80(const std::string& value);

    /// <summary>
    /// **参数解释**： 95% SQL的响应时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getP95() const;
    bool p95IsSet() const;
    void unsetp95();
    void setP95(const std::string& value);

    /// <summary>
    /// **参数解释**： 死锁次数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDeadlocks() const;
    bool deadlocksIsSet() const;
    void unsetdeadlocks();
    void setDeadlocks(const std::string& value);

    /// <summary>
    /// **参数解释**： buffer 命中率。 **取值范围**： 不涉及。
    /// </summary>

    std::string getBufferHitRatio() const;
    bool bufferHitRatioIsSet() const;
    void unsetbufferHitRatio();
    void setBufferHitRatio(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例节点信息列表。
    /// </summary>

    std::vector<InstancesNodesResult>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<InstancesNodesResult>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string solution_;
    bool solutionIsSet_;
    std::string diskUsedSize_;
    bool diskUsedSizeIsSet_;
    std::string diskTotalSize_;
    bool diskTotalSizeIsSet_;
    std::string diskUsage_;
    bool diskUsageIsSet_;
    std::string p80_;
    bool p80IsSet_;
    std::string p95_;
    bool p95IsSet_;
    std::string deadlocks_;
    bool deadlocksIsSet_;
    std::string bufferHitRatio_;
    bool bufferHitRatioIsSet_;
    std::vector<InstancesNodesResult> nodes_;
    bool nodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstancesMetricResult_H_
