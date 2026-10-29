
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectInfoV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectInfoV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/DefectEvents.h>
#include <huaweicloud/codeartscheck/v2/model/DefectFragmentV2.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  DefectInfoV2
    : public ModelBase
{
public:
    DefectInfoV2();
    virtual ~DefectInfoV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefectInfoV2 members

    /// <summary>
    /// **参数解释：** MergeKey，问题ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDefectId() const;
    bool defectIdIsSet() const;
    void unsetdefectId();
    void setDefectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃字段。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDefectCheckerName() const;
    bool defectCheckerNameIsSet() const;
    void unsetdefectCheckerName();
    void setDefectCheckerName(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题状态。 **取值范围：** - 0：待处理。 - 1：已解决。 - 2：已忽略。 [- 3：重新打开（需打开忽略审核开关）。](tag:fcs,hcs,hcs_sm,hcs_site,hcs_sitesm) [- 4：待审核（需打开忽略审核开关）。](tag:fcs,hcs,hcs_sm,hcs_site,hcs_sitesm)
    /// </summary>

    std::string getDefectStatus() const;
    bool defectStatusIsSet() const;
    void unsetdefectStatus();
    void setDefectStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题责任人。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDefectOwner() const;
    bool defectOwnerIsSet() const;
    void unsetdefectOwner();
    void setDefectOwner(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签，多个标签用逗号隔开。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRuleSystemTags() const;
    bool ruleSystemTagsIsSet() const;
    void unsetruleSystemTags();
    void setRuleSystemTags(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题所在文件行号。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLineNumber() const;
    bool lineNumberIsSet() const;
    void unsetlineNumber();
    void setLineNumber(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题详细描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDefectContent() const;
    bool defectContentIsSet() const;
    void unsetdefectContent();
    void setDefectContent(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题级别。 **取值范围：** - 0：致命。 - 1：严重。 - 2：一般。 - 3：提示。
    /// </summary>

    std::string getDefectLevel() const;
    bool defectLevelIsSet() const;
    void unsetdefectLevel();
    void setDefectLevel(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题文件路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 问题发现时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃字段。 **取值范围：** 不涉及。
    /// </summary>

    std::string getIssueKey() const;
    bool issueKeyIsSet() const;
    void unsetissueKey();
    void setIssueKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码片段内容。
    /// </summary>

    std::vector<DefectFragmentV2>& getFragment();
    bool fragmentIsSet() const;
    void unsetfragment();
    void setFragment(const std::vector<DefectFragmentV2>& value);

    /// <summary>
    /// **参数解释：** 调用链信息。
    /// </summary>

    std::vector<DefectEvents>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<DefectEvents>& value);


protected:
    std::string defectId_;
    bool defectIdIsSet_;
    std::string defectCheckerName_;
    bool defectCheckerNameIsSet_;
    std::string defectStatus_;
    bool defectStatusIsSet_;
    std::string defectOwner_;
    bool defectOwnerIsSet_;
    std::string ruleSystemTags_;
    bool ruleSystemTagsIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string lineNumber_;
    bool lineNumberIsSet_;
    std::string defectContent_;
    bool defectContentIsSet_;
    std::string defectLevel_;
    bool defectLevelIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string issueKey_;
    bool issueKeyIsSet_;
    std::vector<DefectFragmentV2> fragment_;
    bool fragmentIsSet_;
    std::vector<DefectEvents> events_;
    bool eventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectInfoV2_H_
