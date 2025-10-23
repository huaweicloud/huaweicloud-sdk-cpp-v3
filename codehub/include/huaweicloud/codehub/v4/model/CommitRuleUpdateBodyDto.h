
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitRuleUpdateBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitRuleUpdateBodyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/CommitRuleCreateBodyDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CommitRuleUpdateBodyDto
    : public ModelBase
{
public:
    CommitRuleUpdateBodyDto();
    virtual ~CommitRuleUpdateBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitRuleUpdateBodyDto members

    /// <summary>
    /// **参数解释：** 规则名称。 **约束限制：** 必填。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支规则。 **约束限制：** 必填。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息匹配规则。 所有提交消息都必须进行正则表达式匹配， 例如: \\d+\\..*。 若符合正则匹配，则允许提交。若此字段为空，则允许任何提交消息。 您也可以设置在提交信息中必须包含工作项单号，实现代码的E2E追溯。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCommitMessageRegex() const;
    bool commitMessageRegexIsSet() const;
    void unsetcommitMessageRegex();
    void setCommitMessageRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息负面匹配规则。 所有提交消息都必须进行正则表达式匹配，例如: \\d+\\..*。 符合正则匹配，则不允许提交。若此字段为空，则允许任何提交消息。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCommitMessageNegativeRegex() const;
    bool commitMessageNegativeRegexIsSet() const;
    void unsetcommitMessageNegativeRegex();
    void setCommitMessageNegativeRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交人的正则表达式。 提交人必须进行正则表达式匹配， 例如: /([a-zA-Z]\\d){7}/。如果此字段为空，则允许任何提交人。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAuthorRegex() const;
    bool authorRegexIsSet() const;
    void unsetauthorRegex();
    void setAuthorRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交人邮箱地址的正则表达式。 所有提交者邮箱地址都必须进行正则表达式匹配， 例如: @my-company.com$。如果此字段为空，则允许任何提交邮箱地址。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAuthorEmailRegex() const;
    bool authorEmailRegexIsSet() const;
    void unsetauthorEmailRegex();
    void setAuthorEmailRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 禁止提交的文件名称的正则表达式。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getProhibitedFileNameRegex() const;
    bool prohibitedFileNameRegexIsSet() const;
    void unsetprohibitedFileNameRegex();
    void setProhibitedFileNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 单文件大小限制（MB）。 单文件大小超过上述规格的添加或更新推送将被拒绝，Repo建议的最佳上限值为50MB。 系统支持单文件提交的最大值为300MB。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 50
    /// </summary>

    int32_t getMaxFileSize() const;
    bool maxFileSizeIsSet() const;
    void unsetmaxFileSize();
    void setMaxFileSize(int32_t value);

    /// <summary>
    /// **参数解释：** 禁止新增二进制文件（对特权用户无效）。 **约束限制：** 不涉及。 **取值范围：** - true，禁止新增二进制文件。 - false，允许新增二进制文件。 **默认取值：** 不涉及。
    /// </summary>

    bool isBinaryGateEnabled() const;
    bool binaryGateEnabledIsSet() const;
    void unsetbinaryGateEnabled();
    void setBinaryGateEnabled(bool value);

    /// <summary>
    /// **参数解释：** 允许修改二进制文件（对特权用户无效）。 **约束限制：** 不涉及。 **取值范围：** - true，允许修改二进制文件。 - false，禁止修改二进制文件。 **默认取值：** 不涉及。
    /// </summary>

    bool isAllowedModifyBinary() const;
    bool allowedModifyBinaryIsSet() const;
    void unsetallowedModifyBinary();
    void setAllowedModifyBinary(bool value);

    /// <summary>
    /// **参数解释：** 二进制文件白名单（可直接入库的文件）。 所有被推送的二进制文件名必须进行正则表达式匹配， 例如: (\\.png|\\.xls|\\.xlsx|\\.docx|\\.doc)$ 。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAllowedBinaryFileNameRegex() const;
    bool allowedBinaryFileNameRegexIsSet() const;
    void unsetallowedBinaryFileNameRegex();
    void setAllowedBinaryFileNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 特权用户ID列表（特权用户可直接推送所有二进制文件入库。 只有特权用户能推送二进制文件。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getPrivilegedUserIds();
    bool privilegedUserIdsIsSet() const;
    void unsetprivilegedUserIds();
    void setPrivilegedUserIds(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 规则生效时间， 例如: 2025-8-19。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEffectiveDate() const;
    bool effectiveDateIsSet() const;
    void unseteffectiveDate();
    void setEffectiveDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 跳过规则检测。 **约束限制：** 仅CR仓库支持此参数。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    bool isSkipRuleCheck() const;
    bool skipRuleCheckIsSet() const;
    void unsetskipRuleCheck();
    void setSkipRuleCheck(bool value);

    /// <summary>
    /// **参数解释：** 跳过规则检测失效时间， 例如: 2025-8-19 10:00:00。 **约束限制：** 仅CR仓库支持此参数。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSkipRuleEndDate() const;
    bool skipRuleEndDateIsSet() const;
    void unsetskipRuleEndDate();
    void setSkipRuleEndDate(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string commitMessageRegex_;
    bool commitMessageRegexIsSet_;
    std::string commitMessageNegativeRegex_;
    bool commitMessageNegativeRegexIsSet_;
    std::string authorRegex_;
    bool authorRegexIsSet_;
    std::string authorEmailRegex_;
    bool authorEmailRegexIsSet_;
    std::string prohibitedFileNameRegex_;
    bool prohibitedFileNameRegexIsSet_;
    int32_t maxFileSize_;
    bool maxFileSizeIsSet_;
    bool binaryGateEnabled_;
    bool binaryGateEnabledIsSet_;
    bool allowedModifyBinary_;
    bool allowedModifyBinaryIsSet_;
    std::string allowedBinaryFileNameRegex_;
    bool allowedBinaryFileNameRegexIsSet_;
    std::vector<int32_t> privilegedUserIds_;
    bool privilegedUserIdsIsSet_;
    std::string effectiveDate_;
    bool effectiveDateIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitRuleUpdateBodyDto_H_
