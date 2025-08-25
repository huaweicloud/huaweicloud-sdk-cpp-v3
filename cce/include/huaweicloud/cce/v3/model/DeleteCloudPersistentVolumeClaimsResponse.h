
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteCloudPersistentVolumeClaimsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteCloudPersistentVolumeClaimsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PersistentVolumeClaimMetadata.h>
#include <huaweicloud/cce/v3/model/PersistentVolumeClaimSpec.h>
#include <string>
#include <huaweicloud/cce/v3/model/PersistentVolumeClaimStatus.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteCloudPersistentVolumeClaimsResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteCloudPersistentVolumeClaimsResponse();
    virtual ~DeleteCloudPersistentVolumeClaimsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteCloudPersistentVolumeClaimsResponse members

    /// <summary>
    /// API版本，固定值**v1**
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// API类型，固定值**PersistentVolumeClaim**
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PersistentVolumeClaimMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PersistentVolumeClaimMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    PersistentVolumeClaimSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PersistentVolumeClaimSpec& value);

    /// <summary>
    /// 
    /// </summary>

    PersistentVolumeClaimStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const PersistentVolumeClaimStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PersistentVolumeClaimMetadata metadata_;
    bool metadataIsSet_;
    PersistentVolumeClaimSpec spec_;
    bool specIsSet_;
    PersistentVolumeClaimStatus status_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteCloudPersistentVolumeClaimsResponse_H_
