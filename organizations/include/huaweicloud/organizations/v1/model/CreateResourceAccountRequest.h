
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/CreateResourceAccountReqBody.h>
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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateResourceAccountRequest
    : public ModelBase
{
public:
    CreateResourceAccountRequest();
    virtual ~CreateResourceAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResourceAccountRequest members

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

    CreateResourceAccountReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateResourceAccountReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    CreateResourceAccountReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateResourceAccountRequest& dereference_from_shared_ptr(std::shared_ptr<CreateResourceAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountRequest_H_
