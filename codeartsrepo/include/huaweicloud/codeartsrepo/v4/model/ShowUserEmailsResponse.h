
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowUserEmailsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowUserEmailsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowUserEmailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserEmailsResponse();
    virtual ~ShowUserEmailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserEmailsResponse members

    /// <summary>
    /// **参数解释：** 用户id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 用户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户长id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户状态 active 活跃用户 blocked 锁定禁用用户。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 最后活跃时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getLastActivityOn() const;
    bool lastActivityOnIsSet() const;
    void unsetlastActivityOn();
    void setLastActivityOn(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交邮箱。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCommitEmail() const;
    bool commitEmailIsSet() const;
    void unsetcommitEmail();
    void setCommitEmail(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string lastActivityOn_;
    bool lastActivityOnIsSet_;
    std::string commitEmail_;
    bool commitEmailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowUserEmailsResponse_H_
