
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_nodeConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_nodeConfig_H_


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
/// **参数解释**：节点配置参数。 **约束限制**：该参数待下线。超节点禁传此参数，非超节点亦不推荐传递此参数。重置配置参数会从节点所在的nodepool自动取值， 若需要重置时修改某参数， 可先修改nodepool相关参数， 再进行重置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResetNodesRequest_nodeConfig
    : public ModelBase
{
public:
    ResetNodesRequest_nodeConfig();
    virtual ~ResetNodesRequest_nodeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetNodesRequest_nodeConfig members

    /// <summary>
    /// **参数解释**：节点的镜像名称，如果不设置则取name字段的值 **约束限制**：不涉及。
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的镜像名称，如果os字段不设置才取此字段的值。 **约束限制**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的镜像ID。 **约束限制**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的镜像类型。 **约束限制**：不涉及。
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的容器运行时。 **约束限制**：不涉及。 **取值范围**：只能是[docker, containerd]其中一个。
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);


protected:
    std::string os_;
    bool osIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_nodeConfig_H_
