
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNetworkResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNetworkResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkStatus.h>
#include <huaweicloud/modelarts/v1/model/NetworkMetadata.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NetworkSpec.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNetworkResponse
    : public ModelBase, public HttpResponse
{
public:
    PatchNetworkResponse();
    virtual ~PatchNetworkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNetworkResponse members

    /// <summary>
    /// **参数解释**：资源的API版本。 **取值范围**：可选值如下： - v1：当前资源版本为v1。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源的类型。 **取值范围**：可选值如下： - Network：网络。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NetworkMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NetworkSpec& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NetworkStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    NetworkMetadata metadata_;
    bool metadataIsSet_;
    NetworkSpec spec_;
    bool specIsSet_;
    NetworkStatus status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNetworkResponse_H_
