
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePriority_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePriority_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeSelector.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 节点优先级批量配置，通过节点标签选择器匹配节点并为匹配的节点设置升级优先级。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePriority
    : public ModelBase
{
public:
    NodePriority();
    virtual ~NodePriority();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePriority members

    /// <summary>
    /// 
    /// </summary>

    NodeSelector getNodeSelector() const;
    bool nodeSelectorIsSet() const;
    void unsetnodeSelector();
    void setNodeSelector(const NodeSelector& value);

    /// <summary>
    /// **参数解释：** 该批次节点的优先级，数值越大优先级越高 **约束限制：** 不涉及 **取值范围：** 非负整数 **默认取值：** 0
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


protected:
    NodeSelector nodeSelector_;
    bool nodeSelectorIsSet_;
    int32_t priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePriority_H_
