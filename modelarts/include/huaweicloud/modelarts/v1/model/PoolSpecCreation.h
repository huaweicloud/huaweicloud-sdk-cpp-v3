
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecCreation_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecCreation_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolResourceFlavor.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PoolSpecCreation_network.h>
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
/// 资源池创建请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecCreation
    : public ModelBase
{
public:
    PoolSpecCreation();
    virtual ~PoolSpecCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecCreation members

    /// <summary>
    /// **参数解释**：资源池类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - Dedicate：物理资源池，独立的网络，支持网络打通，定制驱动，定制作业类型 - Logical：逻辑资源池。没有独立的网络，不支持网络打通，资源池创建和扩缩容相较物理资源池更快。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池支持的作业类型。 **约束限制**：不涉及。 **取值范围**：用户创建标准资源池时至少选择一种，物理资源池支持全部选择。可选值如下： - Train：训练作业 - Infer：推理作业 - Notebook：Notebook作业 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getScope();
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资源池中的资源规格信列表，包括资源规格和相应规格的资源数量。 **约束限制**：不涉及。
    /// </summary>

    std::vector<PoolResourceFlavor>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<PoolResourceFlavor>& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecCreation_network getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const PoolSpecCreation_network& value);

    /// <summary>
    /// **参数解释**：资源池支持的作业规格信息列表，内容为作业规格名称。 **约束限制**：不涉及。
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


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> scope_;
    bool scopeIsSet_;
    std::vector<PoolResourceFlavor> resources_;
    bool resourcesIsSet_;
    PoolSpecCreation_network network_;
    bool networkIsSet_;
    std::vector<std::string> jobFlavors_;
    bool jobFlavorsIsSet_;
    PoolDriver driver_;
    bool driverIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecCreation_H_
