
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeStageStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeStageStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeInfo.h>
#include <huaweicloud/cce/v3/model/PreCheckItemStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点检查状态
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeStageStatus
    : public ModelBase
{
public:
    NodeStageStatus();
    virtual ~NodeStageStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeStageStatus members

    /// <summary>
    /// 
    /// </summary>

    NodeInfo getNodeInfo() const;
    bool nodeInfoIsSet() const;
    void unsetnodeInfo();
    void setNodeInfo(const NodeInfo& value);

    /// <summary>
    /// 检查项状态集合
    /// </summary>

    std::vector<PreCheckItemStatus>& getItemsStatus();
    bool itemsStatusIsSet() const;
    void unsetitemsStatus();
    void setItemsStatus(const std::vector<PreCheckItemStatus>& value);


protected:
    NodeInfo nodeInfo_;
    bool nodeInfoIsSet_;
    std::vector<PreCheckItemStatus> itemsStatus_;
    bool itemsStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeStageStatus_H_
