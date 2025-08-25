
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotPreCheckResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotPreCheckResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PrecheckSpec.h>
#include <huaweicloud/cce/v3/model/PrecheckStatus.h>
#include <string>
#include <huaweicloud/cce/v3/model/PrecheckTaskMetadata.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotPreCheckResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutopilotPreCheckResponse();
    virtual ~ShowAutopilotPreCheckResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotPreCheckResponse members

    /// <summary>
    /// api版本，默认为v3
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 资源类型，默认为PreCheckTask
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrecheckTaskMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PrecheckTaskMetadata& value);

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
    PrecheckTaskMetadata metadata_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotPreCheckResponse_H_
