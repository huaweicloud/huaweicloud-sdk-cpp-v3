
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_user_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_user_H_


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
/// 工作项操作的用户
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueRecordV4_user
    : public ModelBase
{
public:
    IssueRecordV4_user();
    virtual ~IssueRecordV4_user();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueRecordV4_user members

    /// <summary>
    /// 用户数字id
    /// </summary>

    int32_t getUserNumId() const;
    bool userNumIdIsSet() const;
    void unsetuserNumId();
    void setUserNumId(int32_t value);

    /// <summary>
    /// 登录名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 用户32位的uuid
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    int32_t userNumId_;
    bool userNumIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_user_H_
