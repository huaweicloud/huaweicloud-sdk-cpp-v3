
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeConfigTemplateSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeConfigTemplateSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AffinityOS.h>
#include <huaweicloud/modelarts/v1/model/DockerLvmConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点配置模板信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeConfigTemplateSpec
    : public ModelBase
{
public:
    NodeConfigTemplateSpec();
    virtual ~NodeConfigTemplateSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeConfigTemplateSpec members

    /// <summary>
    /// **参数解释**： 资源池节点上单容器的可用磁盘空间大小，单位G。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getDockerBaseSize() const;
    bool dockerBaseSizeIsSet() const;
    void unsetdockerBaseSize();
    void setDockerBaseSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    DockerLvmConfig getDockerLvmConfig() const;
    bool dockerLvmConfigIsSet() const;
    void unsetdockerLvmConfig();
    void setDockerLvmConfig(const DockerLvmConfig& value);

    /// <summary>
    /// **参数解释**：该规格支持的Modelarts内置操作系统列表。
    /// </summary>

    std::vector<AffinityOS>& getOsList();
    bool osListIsSet() const;
    void unsetosList();
    void setOsList(const std::vector<AffinityOS>& value);


protected:
    int32_t dockerBaseSize_;
    bool dockerBaseSizeIsSet_;
    DockerLvmConfig dockerLvmConfig_;
    bool dockerLvmConfigIsSet_;
    std::vector<AffinityOS> osList_;
    bool osListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeConfigTemplateSpec_H_
