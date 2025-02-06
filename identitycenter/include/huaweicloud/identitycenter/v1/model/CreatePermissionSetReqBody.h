
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreatePermissionSetReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreatePermissionSetReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/TagDto.h>
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
/// 创建权限集的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  CreatePermissionSetReqBody
    : public ModelBase
{
public:
    CreatePermissionSetReqBody();
    virtual ~CreatePermissionSetReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePermissionSetReqBody members

    /// <summary>
    /// 权限集描述.
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 权限集名称.
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

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

    /// <summary>
    /// 要附加到新权限集的标签
    /// </summary>

    std::vector<TagDto>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagDto>& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string relayState_;
    bool relayStateIsSet_;
    std::string sessionDuration_;
    bool sessionDurationIsSet_;
    std::vector<TagDto> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreatePermissionSetReqBody_H_
