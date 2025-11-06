
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GeneralCommitRuleBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GeneralCommitRuleBodyDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GeneralCommitRuleBodyDto
    : public ModelBase
{
public:
    GeneralCommitRuleBodyDto();
    virtual ~GeneralCommitRuleBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralCommitRuleBodyDto members

    /// <summary>
    /// **参数解释：** 是否拒绝未Signed-off-by签名的提交。 **约束限制：** 不涉及。 **取值范围：** - true，拒绝未Signed-off-by签名的提交。 - false，允许未Signed-off-by签名的提交。 **默认取值：** 不涉及。
    /// </summary>

    bool isRejectUnsignedCommits() const;
    bool rejectUnsignedCommitsIsSet() const;
    void unsetrejectUnsignedCommits();
    void setRejectUnsignedCommits(bool value);

    /// <summary>
    /// **参数解释：** 是否拒绝未GPG签名的提交。 **约束限制：** 不涉及。 **取值范围：** - true，拒绝未GPG签名的提交。 - false，允许未GPG签名的提交。 **默认取值：** 不涉及。
    /// </summary>

    bool isRejectNotSignedByGpg() const;
    bool rejectNotSignedByGpgIsSet() const;
    void unsetrejectNotSignedByGpg();
    void setRejectNotSignedByGpg(bool value);

    /// <summary>
    /// **参数解释：** 是否不允许删除Tags。 **约束限制：** 不涉及。 **取值范围：** - true，不允许删除Tags。 - false，允许删除Tags。 **默认取值：** 不涉及。
    /// </summary>

    bool isDenyDeleteTag() const;
    bool denyDeleteTagIsSet() const;
    void unsetdenyDeleteTag();
    void setDenyDeleteTag(bool value);

    /// <summary>
    /// **参数解释：** 是否阻止包含涉密文件的提交。 **约束限制：** 不涉及。 **取值范围：** - true，阻止包含涉密文件的提交。 - false，允许包含涉密文件的提交。 **默认取值：** 不涉及。
    /// </summary>

    bool isPreventSecrets() const;
    bool preventSecretsIsSet() const;
    void unsetpreventSecrets();
    void setPreventSecrets(bool value);

    /// <summary>
    /// **参数解释：** 是否禁止强制推送。 **约束限制：** 不涉及。 **取值范围：** - true，禁止强制推送。 - false，允许强制推送。 **默认取值：** 不涉及。
    /// </summary>

    bool isDenyForcePush() const;
    bool denyForcePushIsSet() const;
    void unsetdenyForcePush();
    void setDenyForcePush(bool value);


protected:
    bool rejectUnsignedCommits_;
    bool rejectUnsignedCommitsIsSet_;
    bool rejectNotSignedByGpg_;
    bool rejectNotSignedByGpgIsSet_;
    bool denyDeleteTag_;
    bool denyDeleteTagIsSet_;
    bool preventSecrets_;
    bool preventSecretsIsSet_;
    bool denyForcePush_;
    bool denyForcePushIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GeneralCommitRuleBodyDto_H_
