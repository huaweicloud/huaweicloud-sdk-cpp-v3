
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolSpecModel_containernetwork.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PoolSpecModel_network.h>
#include <huaweicloud/modelarts/v1/model/PoolSpecModel_resources.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/PoolDriver.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 物理池创建请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel
    : public ModelBase
{
public:
    PoolSpecModel();
    virtual ~PoolSpecModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel members

    /// <summary>
    /// **参数解释**：资源池类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - Dedicate：物理资源池，独立的网络，支持网络打通，定制驱动，定制作业类型。 - Logical：逻辑资源池。没有独立的网络，不支持网络打通，资源池创建和扩缩容相较物理资源池更快。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池支持的作业类型。
    /// </summary>

    std::vector<std::string>& getScope();
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资源池中的资源规格信列表，包括资源规格和相应规格的资源数量。
    /// </summary>

    std::vector<PoolSpecModel_resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<PoolSpecModel_resources>& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_containernetwork getContainernetwork() const;
    bool containernetworkIsSet() const;
    void unsetcontainernetwork();
    void setContainernetwork(const PoolSpecModel_containernetwork& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_network getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const PoolSpecModel_network& value);

    /// <summary>
    /// **参数解释**：资源池支持的作业规格列表。参数为作业规格名称。
    /// </summary>

    std::vector<std::string>& getJobFlavors();
    bool jobFlavorsIsSet() const;
    void unsetjobFlavors();
    void setJobFlavors(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PoolDriver getDriver() const;
    bool driverIsSet() const;
    void unsetdriver();
    void setDriver(const PoolDriver& value);

    /// <summary>
    /// **参数解释**：资源池的受限状态。状态可以叠加，比如9代表转包周期受限和冻结状态。 **取值范围**：可选值如下： - 0：代表不受限 - 1：转包周期受限 - 2：规格变更受限 - 4：服务受限 - 8：冻结 - 16：公安冻结（不可退订）
    /// </summary>

    int32_t getControlMode() const;
    bool controlModeIsSet() const;
    void unsetcontrolMode();
    void setControlMode(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> scope_;
    bool scopeIsSet_;
    std::vector<PoolSpecModel_resources> resources_;
    bool resourcesIsSet_;
    PoolSpecModel_containernetwork containernetwork_;
    bool containernetworkIsSet_;
    PoolSpecModel_network network_;
    bool networkIsSet_;
    std::vector<std::string> jobFlavors_;
    bool jobFlavorsIsSet_;
    PoolDriver driver_;
    bool driverIsSet_;
    int32_t controlMode_;
    bool controlModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_H_
