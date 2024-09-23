
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UntagResourceRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UntagResourceRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/UntagResourceReqBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UntagResourceRequest
    : public ModelBase
{
public:
    UntagResourceRequest();
    virtual ~UntagResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UntagResourceRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 根、组织单元、账号或策略的唯一标识符（ID）。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UntagResourceReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UntagResourceReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    UntagResourceReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UntagResourceRequest& dereference_from_shared_ptr(std::shared_ptr<UntagResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UntagResourceRequest_H_
