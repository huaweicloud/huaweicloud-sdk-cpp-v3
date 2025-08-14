
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdatePasswordPolicyReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdatePasswordPolicyReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/PasswordPolicyDto.h>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UpdatePasswordPolicyReqBody
    : public ModelBase
{
public:
    UpdatePasswordPolicyReqBody();
    virtual ~UpdatePasswordPolicyReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePasswordPolicyReqBody members

    /// <summary>
    /// 
    /// </summary>

    PasswordPolicyDto getPasswordPolicy() const;
    bool passwordPolicyIsSet() const;
    void unsetpasswordPolicy();
    void setPasswordPolicy(const PasswordPolicyDto& value);


protected:
    PasswordPolicyDto passwordPolicy_;
    bool passwordPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdatePasswordPolicyReqBody_H_
