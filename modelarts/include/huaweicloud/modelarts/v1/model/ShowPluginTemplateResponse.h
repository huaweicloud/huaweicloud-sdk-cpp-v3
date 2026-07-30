
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPluginTemplateResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPluginTemplateResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PluginTemplateSpec.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PluginTemplateMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPluginTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPluginTemplateResponse();
    virtual ~ShowPluginTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPluginTemplateResponse members

    /// <summary>
    /// **参数解释**：API版本。 **取值范围**：可选值如下： - v1。
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

    PluginTemplateSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PluginTemplateSpec& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PluginTemplateMetadata metadata_;
    bool metadataIsSet_;
    PluginTemplateSpec spec_;
    bool specIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPluginTemplateResponse_H_
