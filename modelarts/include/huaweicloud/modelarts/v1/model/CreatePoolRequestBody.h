
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PoolSpecCreation.h>
#include <huaweicloud/modelarts/v1/model/PoolMetadataCreation.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreatePoolRequestBody
    : public ModelBase
{
public:
    CreatePoolRequestBody();
    virtual ~CreatePoolRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePoolRequestBody members

    /// <summary>
    /// **参数解释**：API版本。 **约束限制**：不涉及。 **取值范围**：可选值如下： - v2 **默认取值**：不涉及。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - Pool：资源池 **默认取值**：不涉及。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolMetadataCreation getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PoolMetadataCreation& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecCreation getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PoolSpecCreation& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PoolMetadataCreation metadata_;
    bool metadataIsSet_;
    PoolSpecCreation spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolRequestBody_H_
