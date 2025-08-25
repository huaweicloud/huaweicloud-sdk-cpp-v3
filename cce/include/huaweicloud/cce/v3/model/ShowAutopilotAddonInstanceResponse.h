
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotAddonInstanceResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotAddonInstanceResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddonMetadata.h>
#include <huaweicloud/cce/v3/model/InstanceSpec.h>
#include <string>
#include <huaweicloud/cce/v3/model/AddonInstanceStatus.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotAddonInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutopilotAddonInstanceResponse();
    virtual ~ShowAutopilotAddonInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotAddonInstanceResponse members

    /// <summary>
    /// API类型，固定值“Addon”，该值不可修改。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v3”，该值不可修改。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddonMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const AddonMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const InstanceSpec& value);

    /// <summary>
    /// 
    /// </summary>

    AddonInstanceStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const AddonInstanceStatus& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    AddonMetadata metadata_;
    bool metadataIsSet_;
    InstanceSpec spec_;
    bool specIsSet_;
    AddonInstanceStatus status_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotAddonInstanceResponse_H_
