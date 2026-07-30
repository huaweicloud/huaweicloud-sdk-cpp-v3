
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigTemplateResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigTemplateResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigtemplatesSpec.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigtemplateMetaV2.h>
#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolNodeConfigTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPoolNodeConfigTemplateResponse();
    virtual ~ShowPoolNodeConfigTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolNodeConfigTemplateResponse members

    /// <summary>
    /// **参数解释**：API版本。 **取值范围**：固定为v2。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：配置类型。 **取值范围**：固定为NodeConfigTemplate。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigtemplateMetaV2 getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodeconfigtemplateMetaV2& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigtemplatesSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodeconfigtemplatesSpec& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    NodeconfigtemplateMetaV2 metadata_;
    bool metadataIsSet_;
    NodeconfigtemplatesSpec spec_;
    bool specIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigTemplateResponse_H_
