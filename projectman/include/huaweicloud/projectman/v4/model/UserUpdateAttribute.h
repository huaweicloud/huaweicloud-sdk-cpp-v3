
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserUpdateAttribute_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserUpdateAttribute_H_


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
/// 更细工作项时输入的用户信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UserUpdateAttribute
    : public ModelBase
{
public:
    UserUpdateAttribute();
    virtual ~UserUpdateAttribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserUpdateAttribute members

    /// <summary>
    /// **参数解释**： 用户ID，可通过[查询项目成员列表](ListProjectUsers.xml)接口获取，响应消息体中的**id**字段的值就是用户ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户名称。 **约束限制**： 当**id**属性有值时，优先使用**id**和项目成员进行匹配，匹配失败再按**name**匹配。 **取值范围**： 2~64个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户昵称。 **约束限制**： 当**id**，**name**属性有值时，优先使用**id**，**name**和项目成员进行匹配，匹配失败再按**nick_name**匹配。 **取值范围**： 2~30个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserUpdateAttribute_H_
