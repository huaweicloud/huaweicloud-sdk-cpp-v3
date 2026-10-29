
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDetailResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskDetailResponse();
    virtual ~ShowTaskDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDetailResponse members

    /// <summary>
    /// **参数解释：** 旧版任务ID。即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务创建者用户ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓分支，如果是MR模式，为源分支。 **取值范围：** 不涉及。
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 上一次检查时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastCheckTime() const;
    bool lastCheckTimeIsSet() const;
    void unsetlastCheckTime();
    void setLastCheckTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 原始代码行数，包含空行和注释行。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCodeLineTotal() const;
    bool codeLineTotalIsSet() const;
    void unsetcodeLineTotal();
    void setCodeLineTotal(int32_t value);

    /// <summary>
    /// **参数解释：** 有效代码行数，不包含空行和注释行。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCodeLine() const;
    bool codeLineIsSet() const;
    void unsetcodeLine();
    void setCodeLine(int32_t value);

    /// <summary>
    /// **参数解释：** 代码质量。 **取值范围：** 不涉及。
    /// </summary>

    double getCodeQuality() const;
    bool codeQualityIsSet() const;
    void unsetcodeQuality();
    void setCodeQuality(double value);

    /// <summary>
    /// **参数解释：** [待处理问题数。](tag:hws,hws_hk)[待处理和重新打开（需打开忽略审核开关）问题数。](tag:fcs,hcs,hcs_sm,hcs_site,hcs_sitesm) **取值范围：** 不涉及。
    /// </summary>

    int32_t getIssueCount() const;
    bool issueCountIsSet() const;
    void unsetissueCount();
    void setIssueCount(int32_t value);

    /// <summary>
    /// **参数解释：** 危险系数。 **取值范围：** 不涉及。
    /// </summary>

    double getRiskCoefficient() const;
    bool riskCoefficientIsSet() const;
    void unsetriskCoefficient();
    void setRiskCoefficient(double value);

    /// <summary>
    /// **参数解释：** 代码重复率。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDuplicationRatio() const;
    bool duplicationRatioIsSet() const;
    void unsetduplicationRatio();
    void setDuplicationRatio(const std::string& value);

    /// <summary>
    /// **参数解释：** 圈复杂度总数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getComplexityCount() const;
    bool complexityCountIsSet() const;
    void unsetcomplexityCount();
    void setComplexityCount(int32_t value);

    /// <summary>
    /// **参数解释：** 重复行数总数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDuplicatedLines() const;
    bool duplicatedLinesIsSet() const;
    void unsetduplicatedLines();
    void setDuplicatedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 注释行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCommentLines() const;
    bool commentLinesIsSet() const;
    void unsetcommentLines();
    void setCommentLines(int32_t value);

    /// <summary>
    /// **参数解释：** 注释率。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommentRatio() const;
    bool commentRatioIsSet() const;
    void unsetcommentRatio();
    void setCommentRatio(const std::string& value);

    /// <summary>
    /// **参数解释：** 重复块个数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDuplicatedBlocks() const;
    bool duplicatedBlocksIsSet() const;
    void unsetduplicatedBlocks();
    void setDuplicatedBlocks(int32_t value);

    /// <summary>
    /// **参数解释：** 上一次执行时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastExecTime() const;
    bool lastExecTimeIsSet() const;
    void unsetlastExecTime();
    void setLastExecTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃字段。 **约束限制：** 不涉及。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCheckType() const;
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。使用UTC时间，格式为yyyy-MM-ddTHH:mm:ssZ。例如：2020-09-25T12:05:00Z。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 平均圈复杂度（方法）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCyclomaticComplexityPerMethod() const;
    bool cyclomaticComplexityPerMethodIsSet() const;
    void unsetcyclomaticComplexityPerMethod();
    void setCyclomaticComplexityPerMethod(const std::string& value);

    /// <summary>
    /// **参数解释：** 平均圈复杂度（文件）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCyclomaticComplexityPerFile() const;
    bool cyclomaticComplexityPerFileIsSet() const;
    void unsetcyclomaticComplexityPerFile();
    void setCyclomaticComplexityPerFile(const std::string& value);

    /// <summary>
    /// **参数解释：** 致命问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCriticalCount() const;
    bool criticalCountIsSet() const;
    void unsetcriticalCount();
    void setCriticalCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMajorCount() const;
    bool majorCountIsSet() const;
    void unsetmajorCount();
    void setMajorCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 一般问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMinorCount() const;
    bool minorCountIsSet() const;
    void unsetminorCount();
    void setMinorCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 提示问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSuggestionCount() const;
    bool suggestionCountIsSet() const;
    void unsetsuggestionCount();
    void setSuggestionCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 门禁质量是否通过。 **取值范围：** - 1：门禁通过。 - 0：门禁不通过。
    /// </summary>

    std::string getIsAccess() const;
    bool isAccessIsSet() const;
    void unsetisAccess();
    void setIsAccess(const std::string& value);

    /// <summary>
    /// **参数解释：** 门禁质量是否通过。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReviewResult() const;
    bool reviewResultIsSet() const;
    void unsetreviewResult();
    void setReviewResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务触发方式。 **取值范围：** - 0：手动触发。 - 1：定时触发。 - 2：代码提交触发。 - 3：合并请求触发。
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件重复率。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFileDuplicationRatio() const;
    bool fileDuplicationRatioIsSet() const;
    void unsetfileDuplicationRatio();
    void setFileDuplicationRatio(const std::string& value);

    /// <summary>
    /// **参数解释：** 新发现问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getNewCount() const;
    bool newCountIsSet() const;
    void unsetnewCount();
    void setNewCount(int32_t value);

    /// <summary>
    /// **参数解释：** 已解决和已修复问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getSolveCount() const;
    bool solveCountIsSet() const;
    void unsetsolveCount();
    void setSolveCount(int32_t value);

    /// <summary>
    /// **参数解释：** 已忽略问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDismissedCount() const;
    bool dismissedCountIsSet() const;
    void unsetdismissedCount();
    void setDismissedCount(int32_t value);

    /// <summary>
    /// **参数解释：** 重复文件数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDuplicatedFiles() const;
    bool duplicatedFilesIsSet() const;
    void unsetduplicatedFiles();
    void setDuplicatedFiles(int32_t value);

    /// <summary>
    /// **参数解释：** 新增致命问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNewCriticalCount() const;
    bool newCriticalCountIsSet() const;
    void unsetnewCriticalCount();
    void setNewCriticalCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 新增严重问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNewMajorCount() const;
    bool newMajorCountIsSet() const;
    void unsetnewMajorCount();
    void setNewMajorCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 新增一般问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNewMinorCount() const;
    bool newMinorCountIsSet() const;
    void unsetnewMinorCount();
    void setNewMinorCount(const std::string& value);

    /// <summary>
    /// **参数解释：** 新增提示问题数。不包括已忽略和已修复问题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNewSuggestionCount() const;
    bool newSuggestionCountIsSet() const;
    void unsetnewSuggestionCount();
    void setNewSuggestionCount(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitBranch_;
    bool gitBranchIsSet_;
    std::string lastCheckTime_;
    bool lastCheckTimeIsSet_;
    int32_t codeLineTotal_;
    bool codeLineTotalIsSet_;
    int32_t codeLine_;
    bool codeLineIsSet_;
    double codeQuality_;
    bool codeQualityIsSet_;
    int32_t issueCount_;
    bool issueCountIsSet_;
    double riskCoefficient_;
    bool riskCoefficientIsSet_;
    std::string duplicationRatio_;
    bool duplicationRatioIsSet_;
    int32_t complexityCount_;
    bool complexityCountIsSet_;
    int32_t duplicatedLines_;
    bool duplicatedLinesIsSet_;
    int32_t commentLines_;
    bool commentLinesIsSet_;
    std::string commentRatio_;
    bool commentRatioIsSet_;
    int32_t duplicatedBlocks_;
    bool duplicatedBlocksIsSet_;
    std::string lastExecTime_;
    bool lastExecTimeIsSet_;
    std::string checkType_;
    bool checkTypeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string cyclomaticComplexityPerMethod_;
    bool cyclomaticComplexityPerMethodIsSet_;
    std::string cyclomaticComplexityPerFile_;
    bool cyclomaticComplexityPerFileIsSet_;
    std::string criticalCount_;
    bool criticalCountIsSet_;
    std::string majorCount_;
    bool majorCountIsSet_;
    std::string minorCount_;
    bool minorCountIsSet_;
    std::string suggestionCount_;
    bool suggestionCountIsSet_;
    std::string isAccess_;
    bool isAccessIsSet_;
    std::string reviewResult_;
    bool reviewResultIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    std::string fileDuplicationRatio_;
    bool fileDuplicationRatioIsSet_;
    int32_t newCount_;
    bool newCountIsSet_;
    int32_t solveCount_;
    bool solveCountIsSet_;
    int32_t dismissedCount_;
    bool dismissedCountIsSet_;
    int32_t duplicatedFiles_;
    bool duplicatedFilesIsSet_;
    std::string newCriticalCount_;
    bool newCriticalCountIsSet_;
    std::string newMajorCount_;
    bool newMajorCountIsSet_;
    std::string newMinorCount_;
    bool newMinorCountIsSet_;
    std::string newSuggestionCount_;
    bool newSuggestionCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDetailResponse_H_
