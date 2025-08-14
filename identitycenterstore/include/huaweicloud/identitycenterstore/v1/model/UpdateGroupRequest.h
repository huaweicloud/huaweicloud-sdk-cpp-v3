
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateGroupRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateGroupRequest_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupReqBody.h>
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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UpdateGroupRequest
    : public ModelBase
{
public:
    UpdateGroupRequest();
    virtual ~UpdateGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGroupRequest members

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
    /// 身份源中IdentityCenter用户组的全局唯一标识符（ID）
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateGroupReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateGroupReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    UpdateGroupReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGroupRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateGroupRequest_H_
