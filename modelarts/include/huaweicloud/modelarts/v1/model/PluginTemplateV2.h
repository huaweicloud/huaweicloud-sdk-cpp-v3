
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateV2_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateV2_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PluginTemplateMetadata.h>
#include <huaweicloud/modelarts/v1/model/PluginTemplateSpecV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件模板的详细信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginTemplateV2
    : public ModelBase
{
public:
    PluginTemplateV2();
    virtual ~PluginTemplateV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginTemplateV2 members

    /// <summary>
    /// **参数解释**：API版本。 **取值范围**：可选值如下： - v2
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源类型。 **取值范围**：可选值如下： - PluginTemplate：插件模板
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PluginTemplateMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PluginTemplateMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    PluginTemplateSpecV2 getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PluginTemplateSpecV2& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PluginTemplateMetadata metadata_;
    bool metadataIsSet_;
    PluginTemplateSpecV2 spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateV2_H_
