
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupBatchAddMemberDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupBatchAddMemberDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GroupBatchAddMemberDto
    : public ModelBase
{
public:
    GroupBatchAddMemberDto();
    virtual ~GroupBatchAddMemberDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupBatchAddMemberDto members

    /// <summary>
    /// **参数解释：** 用户iam_id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户userId。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户昵称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRepoRoleId() const;
    bool repoRoleIdIsSet() const;
    void unsetrepoRoleId();
    void setRepoRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目角色id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getReqRoleId() const;
    bool reqRoleIdIsSet() const;
    void unsetreqRoleId();
    void setReqRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRepoRoleName() const;
    bool repoRoleNameIsSet() const;
    void unsetrepoRoleName();
    void setRepoRoleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目角色名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getReqRoleName() const;
    bool reqRoleNameIsSet() const;
    void unsetreqRoleName();
    void setReqRoleName(const std::string& value);


protected:
    std::string iamId_;
    bool iamIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string repoRoleId_;
    bool repoRoleIdIsSet_;
    std::string reqRoleId_;
    bool reqRoleIdIsSet_;
    std::string repoRoleName_;
    bool repoRoleNameIsSet_;
    std::string reqRoleName_;
    bool reqRoleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupBatchAddMemberDto_H_
