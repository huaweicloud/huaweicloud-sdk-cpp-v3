
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolSpecUpdate_resources.h>
#include <string>
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
/// 资源池描述信息更新参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecUpdate
    : public ModelBase
{
public:
    PoolSpecUpdate();
    virtual ~PoolSpecUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecUpdate members

    /// <summary>
    /// **参数解释**：更新启用的作业类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - Train：训练作业 - Infer：推理作业 - Notebook：Notebook作业 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getScope();
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：更新的资源规格列表。
    /// </summary>

    std::vector<PoolSpecUpdate_resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<PoolSpecUpdate_resources>& value);

    /// <summary>
    /// **参数解释**：资源池支持的作业规格信息列表。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
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
    std::vector<std::string> scope_;
    bool scopeIsSet_;
    std::vector<PoolSpecUpdate_resources> resources_;
    bool resourcesIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecUpdate_H_
