
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteTagResourceRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteTagResourceRequest_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/DeleteTagResourceReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DeleteTagResourceRequest
    : public ModelBase
{
public:
    DeleteTagResourceRequest();
    virtual ~DeleteTagResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTagResourceRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 资源类型 identitycenter:permissionset（权限集）
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 权限集的唯一标识符（ID）。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteTagResourceReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteTagResourceReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    DeleteTagResourceReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTagResourceRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTagResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteTagResourceRequest_H_
