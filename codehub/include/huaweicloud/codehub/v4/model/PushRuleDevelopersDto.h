
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PushRuleDevelopersDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PushRuleDevelopersDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PushRuleDevelopersDto
    : public ModelBase
{
public:
    PushRuleDevelopersDto();
    virtual ~PushRuleDevelopersDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PushRuleDevelopersDto members

    /// <summary>
    /// **参数解释：** 主键ID。
    /// </summary>

    Object getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const Object& value);

    /// <summary>
    /// **参数解释：** 用户ID。
    /// </summary>

    Object getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const Object& value);

    /// <summary>
    /// **参数解释：** 用户名。
    /// </summary>

    Object getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const Object& value);

    /// <summary>
    /// **参数解释：** 昵称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);


protected:
    Object id_;
    bool idIsSet_;
    Object userId_;
    bool userIdIsSet_;
    Object userName_;
    bool userNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PushRuleDevelopersDto_H_
