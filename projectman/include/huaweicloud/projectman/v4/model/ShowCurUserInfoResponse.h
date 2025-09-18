
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCurUserInfoResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCurUserInfoResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowCurUserInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCurUserInfoResponse();
    virtual ~ShowCurUserInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCurUserInfoResponse members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 用户数字id
    /// </summary>

    int32_t getUserNumId() const;
    bool userNumIdIsSet() const;
    void unsetuserNumId();
    void setUserNumId(int32_t value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);

    /// <summary>
    /// 性别
    /// </summary>

    std::string getGender() const;
    bool genderIsSet() const;
    void unsetgender();
    void setGender(const std::string& value);

    /// <summary>
    /// 用户类型, User 云用户, Federation 联邦账号,
    /// </summary>

    std::string getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t userNumId_;
    bool userNumIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;
    std::string gender_;
    bool genderIsSet_;
    std::string userType_;
    bool userTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCurUserInfoResponse_H_
