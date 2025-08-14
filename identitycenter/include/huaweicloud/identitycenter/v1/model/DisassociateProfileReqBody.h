
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisassociateProfileReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisassociateProfileReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 解除与用户或组绑定的所有账号授权关联的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DisassociateProfileReqBody
    : public ModelBase
{
public:
    DisassociateProfileReqBody();
    virtual ~DisassociateProfileReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateProfileReqBody members

    /// <summary>
    /// 用户或用户组的唯一标识ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 解除绑定的实体类型，可为用户或者用户组
    /// </summary>

    std::string getAccessorType() const;
    bool accessorTypeIsSet() const;
    void unsetaccessorType();
    void setAccessorType(const std::string& value);

    /// <summary>
    /// 关联到IAM身份中心实例的身份源的全局唯一标识符（ID）。
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string accessorType_;
    bool accessorTypeIsSet_;
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DisassociateProfileReqBody_H_
