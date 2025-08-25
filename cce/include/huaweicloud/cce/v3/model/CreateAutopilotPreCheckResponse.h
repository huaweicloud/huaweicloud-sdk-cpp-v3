
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotPreCheckResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotPreCheckResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PrecheckSpec.h>
#include <huaweicloud/cce/v3/model/PrecheckStatus.h>
#include <string>
#include <huaweicloud/cce/v3/model/PrecheckCluserResponseMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateAutopilotPreCheckResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAutopilotPreCheckResponse();
    virtual ~CreateAutopilotPreCheckResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAutopilotPreCheckResponse members

    /// <summary>
    /// API版本
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrecheckCluserResponseMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PrecheckCluserResponseMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    PrecheckSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PrecheckSpec& value);

    /// <summary>
    /// 
    /// </summary>

    PrecheckStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const PrecheckStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PrecheckCluserResponseMetadata metadata_;
    bool metadataIsSet_;
    PrecheckSpec spec_;
    bool specIsSet_;
    PrecheckStatus status_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotPreCheckResponse_H_
