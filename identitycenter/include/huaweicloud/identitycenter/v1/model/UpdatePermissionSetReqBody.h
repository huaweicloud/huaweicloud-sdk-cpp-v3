
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdatePermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdatePermissionSetReqBody_H_


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
/// UpdatePermissionSet请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdatePermissionSetReqBody
    : public ModelBase
{
public:
    UpdatePermissionSetReqBody();
    virtual ~UpdatePermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePermissionSetReqBody members

    /// <summary>
    /// 权限集描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 用于在联合身份验证过程中重定向应用程序中的用户
    /// </summary>

    std::string getRelayState() const;
    bool relayStateIsSet() const;
    void unsetrelayState();
    void setRelayState(const std::string& value);

    /// <summary>
    /// 应用程序用户会话在ISO-8601标准中有效的时间长度
    /// </summary>

    std::string getSessionDuration() const;
    bool sessionDurationIsSet() const;
    void unsetsessionDuration();
    void setSessionDuration(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string relayState_;
    bool relayStateIsSet_;
    std::string sessionDuration_;
    bool sessionDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdatePermissionSetReqBody_H_
