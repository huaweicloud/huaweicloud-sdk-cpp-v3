
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePluginRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePluginRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PluginSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建插件实例的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreatePluginRequestBody
    : public ModelBase
{
public:
    CreatePluginRequestBody();
    virtual ~CreatePluginRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePluginRequestBody members

    /// <summary>
    /// **参数解释**：API资源类型，固定值“Plugin”，该值不可修改。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：API版本，固定值“v2”，该值不可修改。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PluginSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PluginSpec& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PluginSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePluginRequestBody_H_
