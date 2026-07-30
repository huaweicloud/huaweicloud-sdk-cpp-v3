
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolDriver_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolDriver_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池驱动数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolDriver
    : public ModelBase
{
public:
    PoolDriver();
    virtual ~PoolDriver();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolDriver members

    /// <summary>
    /// **参数解释**：资源池默认的GPU驱动版本。物理资源池中包含GPU规格时有效。 **取值范围**：不涉及。
    /// </summary>

    std::string getGpuVersion() const;
    bool gpuVersionIsSet() const;
    void unsetgpuVersion();
    void setGpuVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池默认的NPU驱动版本。物理资源池中包含NPU规格时有效。 **取值范围**：不涉及。
    /// </summary>

    std::string getNpuVersion() const;
    bool npuVersionIsSet() const;
    void unsetnpuVersion();
    void setNpuVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池驱动升级策略。 **取值范围**：可选值如下： - force：强制升级，立即升级节点驱动，可能影响节点上正在运行的作业。 - idle：安全升级，待节点上没有作业运行时进行驱动升级。
    /// </summary>

    std::string getUpdateStrategy() const;
    bool updateStrategyIsSet() const;
    void unsetupdateStrategy();
    void setUpdateStrategy(const std::string& value);


protected:
    std::string gpuVersion_;
    bool gpuVersionIsSet_;
    std::string npuVersion_;
    bool npuVersionIsSet_;
    std::string updateStrategy_;
    bool updateStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolDriver_H_
