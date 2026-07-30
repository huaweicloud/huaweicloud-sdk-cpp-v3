
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthorizationResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthorizationResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/AuthorizationRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AuthorizationResponse
    : public ModelBase
{
public:
    AuthorizationResponse();
    virtual ~AuthorizationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthorizationResponse members

    /// <summary>
    /// **参数解释**：用户ID，获取方法请参见[获取用户ID和名称](modelarts_03_0006.xml)。当user_id为all时，表示对所有IAM子用户进行授权，如果已有部分用户已授权，则更新授权。仅当授权类型为委托时，需要该字段。 **约束限制**：不涉及。 **取值范围**：字符串长度在3到32个字符之间，支持大小写字母、数字、中划线。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：授权类型。推荐使用委托方式。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - agency：委托 - credential：访问密钥（AK/SK）  **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：授权内容。 **约束限制**： - 当授权类型是委托，该字段为委托名称。 - 当授权类型是访问密钥，该字段为访问密钥ID（AK）。  **取值范围**：长度限制64个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释**：秘密访问密钥（SK）。 **约束限制**：仅当授权类型为访问密钥时，需要该字段。 **取值范围**：字符串长度为40，支持大小写字母、数字。 **默认取值**：不涉及。
    /// </summary>

    std::string getSecretKey() const;
    bool secretKeyIsSet() const;
    void unsetsecretKey();
    void setSecretKey(const std::string& value);

    /// <summary>
    /// **参数解释**：用户名。 **约束限制**：当user_id为all-users时，显示为所有用户。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：用户类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - iam：授权对象类型是IAM子用户，必传字段user_id。 - federate：授权对象类型是联邦用户，必传字段user_name，user_id不传。 - federation-group：授权对象类型是联邦用户组，必传字段user_id，值为联邦用户组的id。 - grant：授权对象类型是委托用户，必传字段user_id，值为委托用户的委托id。 - all-users：授权对象类型是所有用户，必传字段user_id值是all。  **默认取值**：IAM。
    /// </summary>

    std::string getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(const std::string& value);

    /// <summary>
    /// **参数解释**：创建时间戳。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string secretKey_;
    bool secretKeyIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string userType_;
    bool userTypeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthorizationResponse_H_
