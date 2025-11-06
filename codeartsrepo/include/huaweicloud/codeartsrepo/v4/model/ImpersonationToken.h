
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ImpersonationToken_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ImpersonationToken_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This feature was introduced in  9.0
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ImpersonationToken
    : public ModelBase
{
public:
    ImpersonationToken();
    virtual ~ImpersonationToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImpersonationToken members

    /// <summary>
    /// **参数解释：** 唯一标识id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否撤销。
    /// </summary>

    bool isRevoked() const;
    bool revokedIsSet() const;
    void unsetrevoked();
    void setRevoked(bool value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** scope权限。 **取值范围：** 字符串长度不少于0，不超过1000。
    /// </summary>

    std::vector<std::string>& getScopes();
    bool scopesIsSet() const;
    void unsetscopes();
    void setScopes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 是否可用。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);

    /// <summary>
    /// **参数解释：** 过期时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getExpiresAt() const;
    bool expiresAtIsSet() const;
    void unsetexpiresAt();
    void setExpiresAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为个人token。
    /// </summary>

    bool isImpersonation() const;
    bool impersonationIsSet() const;
    void unsetimpersonation();
    void setImpersonation(bool value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool revoked_;
    bool revokedIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::vector<std::string> scopes_;
    bool scopesIsSet_;
    bool active_;
    bool activeIsSet_;
    std::string expiresAt_;
    bool expiresAtIsSet_;
    bool impersonation_;
    bool impersonationIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ImpersonationToken_H_
