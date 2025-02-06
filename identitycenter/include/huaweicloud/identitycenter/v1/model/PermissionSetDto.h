
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PermissionSetDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PermissionSetDto_H_


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
/// 包含权限集详细信息的对象
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  PermissionSetDto
    : public ModelBase
{
public:
    PermissionSetDto();
    virtual ~PermissionSetDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionSetDto members

    /// <summary>
    /// 权限集的创建时间
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// 权限集的描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 权限集的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 权限集的唯一标识
    /// </summary>

    std::string getPermissionSetId() const;
    bool permissionSetIdIsSet() const;
    void unsetpermissionSetId();
    void setPermissionSetId(const std::string& value);

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
    /// 权限集的统一资源名称（URN）
    /// </summary>

    std::string getPermissionUrn() const;
    bool permissionUrnIsSet() const;
    void unsetpermissionUrn();
    void setPermissionUrn(const std::string& value);


protected:
    int64_t createdDate_;
    bool createdDateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string permissionSetId_;
    bool permissionSetIdIsSet_;
    std::string relayState_;
    bool relayStateIsSet_;
    std::string sessionDuration_;
    bool sessionDurationIsSet_;
    std::string permissionUrn_;
    bool permissionUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PermissionSetDto_H_
