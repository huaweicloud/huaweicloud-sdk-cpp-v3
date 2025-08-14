
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateExternalIdPConfigurationForDirectoryRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateExternalIdPConfigurationForDirectoryRequest_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenterstore/v1/model/CreateIDPReqBody.h>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  CreateExternalIdPConfigurationForDirectoryRequest
    : public ModelBase
{
public:
    CreateExternalIdPConfigurationForDirectoryRequest();
    virtual ~CreateExternalIdPConfigurationForDirectoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateExternalIdPConfigurationForDirectoryRequest members

    /// <summary>
    /// 身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateIDPReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateIDPReqBody& value);


protected:
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    CreateIDPReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateExternalIdPConfigurationForDirectoryRequest& dereference_from_shared_ptr(std::shared_ptr<CreateExternalIdPConfigurationForDirectoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateExternalIdPConfigurationForDirectoryRequest_H_
