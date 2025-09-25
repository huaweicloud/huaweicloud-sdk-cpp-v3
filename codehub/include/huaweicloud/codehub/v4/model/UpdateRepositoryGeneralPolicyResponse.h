
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryGeneralPolicyResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryGeneralPolicyResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/PushRuleDevelopersDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateRepositoryGeneralPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateRepositoryGeneralPolicyResponse();
    virtual ~UpdateRepositoryGeneralPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepositoryGeneralPolicyResponse members

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
    /// **参数解释：** 开发人员创建分支权限白名单。
    /// </summary>

    std::vector<PushRuleDevelopersDto>& getCreateBranchWhitelistUsers();
    bool createBranchWhitelistUsersIsSet() const;
    void unsetcreateBranchWhitelistUsers();
    void setCreateBranchWhitelistUsers(const std::vector<PushRuleDevelopersDto>& value);


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
    std::vector<PushRuleDevelopersDto> createBranchWhitelistUsers_;
    bool createBranchWhitelistUsersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryGeneralPolicyResponse_H_
