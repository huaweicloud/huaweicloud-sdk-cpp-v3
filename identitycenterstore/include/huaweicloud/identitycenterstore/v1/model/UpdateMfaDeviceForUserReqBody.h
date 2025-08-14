
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateMfaDeviceForUserReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateMfaDeviceForUserReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UpdateMfaDeviceForUserReqBody
    : public ModelBase
{
public:
    UpdateMfaDeviceForUserReqBody();
    virtual ~UpdateMfaDeviceForUserReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMfaDeviceForUserReqBody members

    /// <summary>
    /// MFA设备显示名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateMfaDeviceForUserReqBody_H_
