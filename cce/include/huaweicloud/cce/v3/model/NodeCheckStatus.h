
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeCheckStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeCheckStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeStageStatus.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点限制检查状态
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeCheckStatus
    : public ModelBase
{
public:
    NodeCheckStatus();
    virtual ~NodeCheckStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeCheckStatus members

    /// <summary>
    /// 状态，取值如下 - Init: 初始化 - Running 运行中 - Success 成功 - Failed 失败
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 节点检查状态
    /// </summary>

    std::vector<NodeStageStatus>& getNodeStageStatus();
    bool nodeStageStatusIsSet() const;
    void unsetnodeStageStatus();
    void setNodeStageStatus(const std::vector<NodeStageStatus>& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::vector<NodeStageStatus> nodeStageStatus_;
    bool nodeStageStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeCheckStatus_H_
