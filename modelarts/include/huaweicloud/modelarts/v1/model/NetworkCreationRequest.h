
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkCreationRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkCreationRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NetworkMetadataCreation.h>
#include <huaweicloud/modelarts/v1/model/NetworkSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络创建信息，最终用户不感知子网。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkCreationRequest
    : public ModelBase
{
public:
    NetworkCreationRequest();
    virtual ~NetworkCreationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkCreationRequest members

    /// <summary>
    /// **参数解释**：API版本。 **约束限制**：不涉及。 **取值范围**：可选值如下： - v1 **默认取值**：不涉及。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - Network：网络 **默认取值**：不涉及。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadataCreation getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NetworkMetadataCreation& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NetworkSpec& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    NetworkMetadataCreation metadata_;
    bool metadataIsSet_;
    NetworkSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkCreationRequest_H_
