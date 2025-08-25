
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/LineStatus.h>
#include <huaweicloud/cce/v3/model/PointStatus.h>
#include <huaweicloud/cce/v3/model/WorkFlowPhase.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  WorkFlowStatus
    : public ModelBase
{
public:
    WorkFlowStatus();
    virtual ~WorkFlowStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkFlowStatus members

    /// <summary>
    /// 
    /// </summary>

    WorkFlowPhase getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const WorkFlowPhase& value);

    /// <summary>
    /// 升级流程中的各个任务项的执行状态
    /// </summary>

    std::vector<PointStatus>& getPointStatuses();
    bool pointStatusesIsSet() const;
    void unsetpointStatuses();
    void setPointStatuses(const std::vector<PointStatus>& value);

    /// <summary>
    /// 表示该升级流程的任务执行线路
    /// </summary>

    std::vector<LineStatus>& getLineStatuses();
    bool lineStatusesIsSet() const;
    void unsetlineStatuses();
    void setLineStatuses(const std::vector<LineStatus>& value);


protected:
    WorkFlowPhase phase_;
    bool phaseIsSet_;
    std::vector<PointStatus> pointStatuses_;
    bool pointStatusesIsSet_;
    std::vector<LineStatus> lineStatuses_;
    bool lineStatusesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowStatus_H_
