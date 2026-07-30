
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NodeconfigStatus.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigSpec.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigMeta.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolNodeConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPoolNodeConfigResponse();
    virtual ~ShowPoolNodeConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolNodeConfigResponse members

    /// <summary>
    /// **参数解释**： 固定为v2。 **取值范围**： 不涉及。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 固定为NodeConfig。 **取值范围**： 不涉及。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigMeta getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodeconfigMeta& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodeconfigSpec& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NodeconfigStatus& value);

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
    NodeconfigMeta metadata_;
    bool metadataIsSet_;
    NodeconfigSpec spec_;
    bool specIsSet_;
    NodeconfigStatus status_;
    bool statusIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigResponse_H_
