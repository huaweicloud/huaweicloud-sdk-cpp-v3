
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GeneralPolicyBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GeneralPolicyBodyDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GeneralPolicyBodyDto
    : public ModelBase
{
public:
    GeneralPolicyBodyDto();
    virtual ~GeneralPolicyBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralPolicyBodyDto members

    /// <summary>
    /// **参数解释：** 是否禁止fork该仓库。 **约束限制：** 不涉及。 **取值范围：** - true，禁止fork。 - false，允许fork。 **默认取值：** 不涉及。
    /// </summary>

    bool isDisableFork() const;
    bool disableForkIsSet() const;
    void unsetdisableFork();
    void setDisableFork(bool value);

    /// <summary>
    /// **参数解释：** 是否预合并MR。 **约束限制：** 不涉及。 **取值范围：** - true，禁止预合并MR。 - false，允许预合并MR。 **默认取值：** 不涉及。
    /// </summary>

    bool isGeneratePreMergeRef() const;
    bool generatePreMergeRefIsSet() const;
    void unsetgeneratePreMergeRef();
    void setGeneratePreMergeRef(bool value);

    /// <summary>
    /// **参数解释：** 分支名规则。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBranchNameRegex() const;
    bool branchNameRegexIsSet() const;
    void unsetbranchNameRegex();
    void setBranchNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** Tag名规则。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTagNameRegex() const;
    bool tagNameRegexIsSet() const;
    void unsettagNameRegex();
    void setTagNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否禁止开发者创建分支。 **约束限制：** 不涉及。 **取值范围：** - true，禁止开发者创建分支。 - false，允许开发者创建分支。
    /// </summary>

    bool isForbiddenDeveloperCreateBranch() const;
    bool forbiddenDeveloperCreateBranchIsSet() const;
    void unsetforbiddenDeveloperCreateBranch();
    void setForbiddenDeveloperCreateBranch(bool value);

    /// <summary>
    /// **参数解释：** 开发人员创建分支权限例外白名单。多个用户ID使用逗号分隔。
    /// </summary>

    std::string getCreateBranchWhitelistUserIds() const;
    bool createBranchWhitelistUserIdsIsSet() const;
    void unsetcreateBranchWhitelistUserIds();
    void setCreateBranchWhitelistUserIds(const std::string& value);


protected:
    bool disableFork_;
    bool disableForkIsSet_;
    bool generatePreMergeRef_;
    bool generatePreMergeRefIsSet_;
    std::string branchNameRegex_;
    bool branchNameRegexIsSet_;
    std::string tagNameRegex_;
    bool tagNameRegexIsSet_;
    bool forbiddenDeveloperCreateBranch_;
    bool forbiddenDeveloperCreateBranchIsSet_;
    std::string createBranchWhitelistUserIds_;
    bool createBranchWhitelistUserIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GeneralPolicyBodyDto_H_
