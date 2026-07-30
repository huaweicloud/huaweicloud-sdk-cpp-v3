
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NodeResource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点状态数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeStatus
    : public ModelBase
{
public:
    NodeStatus();
    virtual ~NodeStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeStatus members

    /// <summary>
    /// **参数解释**：节点当前状态。 **取值范围**：可选值如下： - Available：节点可用。 - Creating：节点创建中。 - Deleting：节点删除中。 - Abnormal：节点异常。 - Checking: 节点自检中。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释**：节点所在的az。 **取值范围**：不涉及。
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的IP地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getPrivateIp() const;
    bool privateIpIsSet() const;
    void unsetprivateIp();
    void setPrivateIp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeResource getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const NodeResource& value);

    /// <summary>
    /// 
    /// </summary>

    NodeResource getAvailableResources() const;
    bool availableResourcesIsSet() const;
    void unsetavailableResources();
    void setAvailableResources(const NodeResource& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string az_;
    bool azIsSet_;
    std::string privateIp_;
    bool privateIpIsSet_;
    NodeResource resources_;
    bool resourcesIsSet_;
    NodeResource availableResources_;
    bool availableResourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeStatus_H_
