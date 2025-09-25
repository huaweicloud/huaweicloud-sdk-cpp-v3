
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_UserBasicDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_UserBasicDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v3/model/UserSafeDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  UserBasicDto
    : public ModelBase
{
public:
    UserBasicDto();
    virtual ~UserBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserBasicDto members

    /// <summary>
    /// 用户id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 姓名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 头像url
    /// </summary>

    std::string getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetavatarUrl();
    void setAvatarUrl(const std::string& value);

    /// <summary>
    /// 头像路径
    /// </summary>

    std::string getAvatarPath() const;
    bool avatarPathIsSet() const;
    void unsetavatarPath();
    void setAvatarPath(const std::string& value);

    /// <summary>
    /// 邮箱
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 中文名
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// 主页
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 租户名称
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string avatarUrl_;
    bool avatarUrlIsSet_;
    std::string avatarPath_;
    bool avatarPathIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_UserBasicDto_H_
