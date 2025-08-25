
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceInfoResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceInfoResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/CloudServiceInfo.h>
#include <huaweicloud/cpcs/v1/model/CcspServiceInfo.h>
#include <huaweicloud/cpcs/v1/model/KmsResourceInfo.h>
#include <huaweicloud/cpcs/v1/model/AppResourceInfo.h>
#include <huaweicloud/cpcs/v1/model/VsmResourceInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResourceInfoResponse();
    virtual ~ShowResourceInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceInfoResponse members

    /// <summary>
    /// 
    /// </summary>

    CloudServiceInfo getCloudService() const;
    bool cloudServiceIsSet() const;
    void unsetcloudService();
    void setCloudService(const CloudServiceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CcspServiceInfo getCcspService() const;
    bool ccspServiceIsSet() const;
    void unsetccspService();
    void setCcspService(const CcspServiceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    VsmResourceInfo getVsm() const;
    bool vsmIsSet() const;
    void unsetvsm();
    void setVsm(const VsmResourceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AppResourceInfo getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const AppResourceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    KmsResourceInfo getKms() const;
    bool kmsIsSet() const;
    void unsetkms();
    void setKms(const KmsResourceInfo& value);


protected:
    CloudServiceInfo cloudService_;
    bool cloudServiceIsSet_;
    CcspServiceInfo ccspService_;
    bool ccspServiceIsSet_;
    VsmResourceInfo vsm_;
    bool vsmIsSet_;
    AppResourceInfo app_;
    bool appIsSet_;
    KmsResourceInfo kms_;
    bool kmsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceInfoResponse_H_
