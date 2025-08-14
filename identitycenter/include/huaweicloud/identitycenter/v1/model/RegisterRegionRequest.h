
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_RegisterRegionRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_RegisterRegionRequest_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/RegisterRegionReqBody.h>
#include <string>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  RegisterRegionRequest
    : public ModelBase
{
public:
    RegisterRegionRequest();
    virtual ~RegisterRegionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterRegionRequest members

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

    RegisterRegionReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RegisterRegionReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    RegisterRegionReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RegisterRegionRequest& dereference_from_shared_ptr(std::shared_ptr<RegisterRegionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_RegisterRegionRequest_H_
