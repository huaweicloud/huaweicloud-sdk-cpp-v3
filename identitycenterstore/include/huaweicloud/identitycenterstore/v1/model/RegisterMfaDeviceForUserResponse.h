
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_RegisterMfaDeviceForUserResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_RegisterMfaDeviceForUserResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  RegisterMfaDeviceForUserResponse
    : public ModelBase, public HttpResponse
{
public:
    RegisterMfaDeviceForUserResponse();
    virtual ~RegisterMfaDeviceForUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterMfaDeviceForUserResponse members

    /// <summary>
    /// 身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 身份源中用户唯一标识符（ID）
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 注册MFA需要的一次性随机字符
    /// </summary>

    std::string getWorkFlow() const;
    bool workFlowIsSet() const;
    void unsetworkFlow();
    void setWorkFlow(const std::string& value);

    /// <summary>
    /// MFA注册重定向地址
    /// </summary>

    std::string getRedirectUrl() const;
    bool redirectUrlIsSet() const;
    void unsetredirectUrl();
    void setRedirectUrl(const std::string& value);


protected:
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string workFlow_;
    bool workFlowIsSet_;
    std::string redirectUrl_;
    bool redirectUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_RegisterMfaDeviceForUserResponse_H_
