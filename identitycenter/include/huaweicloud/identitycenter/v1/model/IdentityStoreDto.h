
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_IdentityStoreDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_IdentityStoreDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  IdentityStoreDto
    : public ModelBase
{
public:
    IdentityStoreDto();
    virtual ~IdentityStoreDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdentityStoreDto members

    /// <summary>
    /// 关联到IAM身份中心实例的身份源的全局唯一标识符（ID）。
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 身份源类型
    /// </summary>

    std::string getIdentityStoreType() const;
    bool identityStoreTypeIsSet() const;
    void unsetidentityStoreType();
    void setIdentityStoreType(const std::string& value);

    /// <summary>
    /// 登录认证类型
    /// </summary>

    std::string getAuthenticationType() const;
    bool authenticationTypeIsSet() const;
    void unsetauthenticationType();
    void setAuthenticationType(const std::string& value);

    /// <summary>
    /// 预配类型
    /// </summary>

    std::vector<std::string>& getProvisioningType();
    bool provisioningTypeIsSet() const;
    void unsetprovisioningType();
    void setProvisioningType(const std::vector<std::string>& value);

    /// <summary>
    /// 身份源是否启用状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string identityStoreType_;
    bool identityStoreTypeIsSet_;
    std::string authenticationType_;
    bool authenticationTypeIsSet_;
    std::vector<std::string> provisioningType_;
    bool provisioningTypeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_IdentityStoreDto_H_
