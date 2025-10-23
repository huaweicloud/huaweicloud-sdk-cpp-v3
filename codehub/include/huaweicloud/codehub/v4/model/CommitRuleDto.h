
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitRuleDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitRuleDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codehub/v4/model/RepositoryUserBasicDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CommitRuleDto
    : public ModelBase
{
public:
    CommitRuleDto();
    virtual ~CommitRuleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitRuleDto members

    /// <summary>
    /// **参数解释：** 主键ID。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库ID。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 提交信息匹配规则。
    /// </summary>

    std::string getCommitMessageRegex() const;
    bool commitMessageRegexIsSet() const;
    void unsetcommitMessageRegex();
    void setCommitMessageRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息负面匹配规则。
    /// </summary>

    std::string getCommitMessageNegativeRegex() const;
    bool commitMessageNegativeRegexIsSet() const;
    void unsetcommitMessageNegativeRegex();
    void setCommitMessageNegativeRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 禁止提交的文件名称。
    /// </summary>

    std::string getProhibitedFileNameRegex() const;
    bool prohibitedFileNameRegexIsSet() const;
    void unsetprohibitedFileNameRegex();
    void setProhibitedFileNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交人邮箱地址。
    /// </summary>

    std::string getAuthorEmailRegex() const;
    bool authorEmailRegexIsSet() const;
    void unsetauthorEmailRegex();
    void setAuthorEmailRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 单文件大小限制（MB）。
    /// </summary>

    int32_t getMaxFileSize() const;
    bool maxFileSizeIsSet() const;
    void unsetmaxFileSize();
    void setMaxFileSize(int32_t value);

    /// <summary>
    /// **参数解释：** 允许的最大单文件大小（MB）。
    /// </summary>

    int32_t getAllowedMaxFileSize() const;
    bool allowedMaxFileSizeIsSet() const;
    void unsetallowedMaxFileSize();
    void setAllowedMaxFileSize(int32_t value);

    /// <summary>
    /// **参数解释：** 规则生效时间。
    /// </summary>

    std::string getEffectiveDate() const;
    bool effectiveDateIsSet() const;
    void unseteffectiveDate();
    void setEffectiveDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否禁止新增二进制文件（对特权用户无效）。 **约束限制：** 不涉及。 **取值范围：** - true，禁止新增二进制文件。 - false，允许新增二进制文件。
    /// </summary>

    bool isBinaryGateEnabled() const;
    bool binaryGateEnabledIsSet() const;
    void unsetbinaryGateEnabled();
    void setBinaryGateEnabled(bool value);

    /// <summary>
    /// **参数解释：** 特权用户（特权用户可直接推送所有二进制文件入库）。
    /// </summary>

    std::vector<RepositoryUserBasicDto>& getPrivilegedUsers();
    bool privilegedUsersIsSet() const;
    void unsetprivilegedUsers();
    void setPrivilegedUsers(const std::vector<RepositoryUserBasicDto>& value);

    /// <summary>
    /// **参数解释：** 是否允许修改二进制文件（对特权用户无效）。 **约束限制：** 不涉及。 **取值范围：** - true，允许修改二进制文件。 - false，禁止修改二进制文件。
    /// </summary>

    bool isAllowedModifyBinary() const;
    bool allowedModifyBinaryIsSet() const;
    void unsetallowedModifyBinary();
    void setAllowedModifyBinary(bool value);

    /// <summary>
    /// **参数解释：** 二进制文件白名单（可直接入库的文件）。
    /// </summary>

    std::string getAllowedBinaryFileNameRegex() const;
    bool allowedBinaryFileNameRegexIsSet() const;
    void unsetallowedBinaryFileNameRegex();
    void setAllowedBinaryFileNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交人。
    /// </summary>

    Object getAuthorRegex() const;
    bool authorRegexIsSet() const;
    void unsetauthorRegex();
    void setAuthorRegex(const Object& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支规则。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 跳过规则检测。 **约束限制：** 仅CR仓库支持此参数。
    /// </summary>

    bool isSkipRuleCheck() const;
    bool skipRuleCheckIsSet() const;
    void unsetskipRuleCheck();
    void setSkipRuleCheck(bool value);

    /// <summary>
    /// **参数解释：** 跳过规则检测失效时间， 例如: 2025-8-19。 **约束限制：** 仅CR仓库支持此参数。
    /// </summary>

    std::string getSkipRuleEndDate() const;
    bool skipRuleEndDateIsSet() const;
    void unsetskipRuleEndDate();
    void setSkipRuleEndDate(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string commitMessageRegex_;
    bool commitMessageRegexIsSet_;
    std::string commitMessageNegativeRegex_;
    bool commitMessageNegativeRegexIsSet_;
    std::string prohibitedFileNameRegex_;
    bool prohibitedFileNameRegexIsSet_;
    std::string authorEmailRegex_;
    bool authorEmailRegexIsSet_;
    int32_t maxFileSize_;
    bool maxFileSizeIsSet_;
    int32_t allowedMaxFileSize_;
    bool allowedMaxFileSizeIsSet_;
    std::string effectiveDate_;
    bool effectiveDateIsSet_;
    bool binaryGateEnabled_;
    bool binaryGateEnabledIsSet_;
    std::vector<RepositoryUserBasicDto> privilegedUsers_;
    bool privilegedUsersIsSet_;
    bool allowedModifyBinary_;
    bool allowedModifyBinaryIsSet_;
    std::string allowedBinaryFileNameRegex_;
    bool allowedBinaryFileNameRegexIsSet_;
    Object authorRegex_;
    bool authorRegexIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    bool skipRuleCheck_;
    bool skipRuleCheckIsSet_;
    std::string skipRuleEndDate_;
    bool skipRuleEndDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitRuleDto_H_
