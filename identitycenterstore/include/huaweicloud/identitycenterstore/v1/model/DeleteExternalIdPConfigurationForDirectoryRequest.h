
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DeleteExternalIdPConfigurationForDirectoryRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DeleteExternalIdPConfigurationForDirectoryRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  DeleteExternalIdPConfigurationForDirectoryRequest
    : public ModelBase
{
public:
    DeleteExternalIdPConfigurationForDirectoryRequest();
    virtual ~DeleteExternalIdPConfigurationForDirectoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteExternalIdPConfigurationForDirectoryRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 外部身份提供商的全局唯一标识符（ID）
    /// </summary>

    std::string getIdpId() const;
    bool idpIdIsSet() const;
    void unsetidpId();
    void setIdpId(const std::string& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string idpId_;
    bool idpIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteExternalIdPConfigurationForDirectoryRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteExternalIdPConfigurationForDirectoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DeleteExternalIdPConfigurationForDirectoryRequest_H_
