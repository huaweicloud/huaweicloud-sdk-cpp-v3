
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotClusterUpgradeInfoResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotClusterUpgradeInfoResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Metadata.h>
#include <huaweicloud/cce/v3/model/UpgradeInfoSpec.h>
#include <string>
#include <huaweicloud/cce/v3/model/UpgradeInfoStatus.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotClusterUpgradeInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutopilotClusterUpgradeInfoResponse();
    virtual ~ShowAutopilotClusterUpgradeInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotClusterUpgradeInfoResponse members

    /// <summary>
    /// 类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Metadata& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeInfoSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const UpgradeInfoSpec& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeInfoStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const UpgradeInfoStatus& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    Metadata metadata_;
    bool metadataIsSet_;
    UpgradeInfoSpec spec_;
    bool specIsSet_;
    UpgradeInfoStatus status_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotClusterUpgradeInfoResponse_H_
