
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_extendParams_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_extendParams_H_


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
/// **参数解释**：资源池自定义配置参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel_extendParams
    : public ModelBase
{
public:
    PoolSpecModel_extendParams();
    virtual ~PoolSpecModel_extendParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel_extendParams members

    /// <summary>
    /// **参数解释**：资源池创建的节点的容器引擎空间大小。值为0时表示不限制大小。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDockerBaseSize() const;
    bool dockerBaseSizeIsSet() const;
    void unsetdockerBaseSize();
    void setDockerBaseSize(const std::string& value);

    /// <summary>
    /// **参数描述**：磁盘分组名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getVolumeGroup() const;
    bool volumeGroupIsSet() const;
    void unsetvolumeGroup();
    void setVolumeGroup(const std::string& value);

    /// <summary>
    /// **参数描述**：模型运行时环境。 **取值范围**：不涉及。
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);


protected:
    std::string dockerBaseSize_;
    bool dockerBaseSizeIsSet_;
    std::string volumeGroup_;
    bool volumeGroupIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_extendParams_H_
