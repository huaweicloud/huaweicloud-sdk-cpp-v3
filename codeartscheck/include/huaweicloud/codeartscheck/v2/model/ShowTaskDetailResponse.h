
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
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务名字
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 创建者id
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 代码仓地址
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// 代码仓分支,如果是MR模式，为源分支
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);

    /// <summary>
    /// 上一次检查时间
    /// </summary>

    std::string getLastCheckTime() const;
    bool lastCheckTimeIsSet() const;
    void unsetlastCheckTime();
    void setLastCheckTime(const std::string& value);

    /// <summary>
    /// 代码总行数
    /// </summary>

    int32_t getCodeLineTotal() const;
    bool codeLineTotalIsSet() const;
    void unsetcodeLineTotal();
    void setCodeLineTotal(int32_t value);

    /// <summary>
    /// 代码有效行数
    /// </summary>

    int32_t getCodeLine() const;
    bool codeLineIsSet() const;
    void unsetcodeLine();
    void setCodeLine(int32_t value);

    /// <summary>
    /// 代码质量
    /// </summary>

    double getCodeQuality() const;
    bool codeQualityIsSet() const;
    void unsetcodeQuality();
    void setCodeQuality(double value);

    /// <summary>
    /// 问题数
    /// </summary>

    int32_t getIssueCount() const;
    bool issueCountIsSet() const;
    void unsetissueCount();
    void setIssueCount(int32_t value);

    /// <summary>
    /// 危险系数
    /// </summary>

    double getRiskCoefficient() const;
    bool riskCoefficientIsSet() const;
    void unsetriskCoefficient();
    void setRiskCoefficient(double value);

    /// <summary>
    /// 重复比例
    /// </summary>

    std::string getDuplicationRatio() const;
    bool duplicationRatioIsSet() const;
    void unsetduplicationRatio();
    void setDuplicationRatio(const std::string& value);

    /// <summary>
    /// 复杂度
    /// </summary>

    int32_t getComplexityCount() const;
    bool complexityCountIsSet() const;
    void unsetcomplexityCount();
    void setComplexityCount(int32_t value);

    /// <summary>
    /// 重复行数
    /// </summary>

    int32_t getDuplicatedLines() const;
    bool duplicatedLinesIsSet() const;
    void unsetduplicatedLines();
    void setDuplicatedLines(int32_t value);

    /// <summary>
    /// 注释行数
    /// </summary>

    int32_t getCommentLines() const;
    bool commentLinesIsSet() const;
    void unsetcommentLines();
    void setCommentLines(int32_t value);

    /// <summary>
    /// 注释比例
    /// </summary>

    std::string getCommentRatio() const;
    bool commentRatioIsSet() const;
    void unsetcommentRatio();
    void setCommentRatio(const std::string& value);

    /// <summary>
    /// 重复块
    /// </summary>

    int32_t getDuplicatedBlocks() const;
    bool duplicatedBlocksIsSet() const;
    void unsetduplicatedBlocks();
    void setDuplicatedBlocks(int32_t value);

    /// <summary>
    /// 上次执行时间
    /// </summary>

    std::string getLastExecTime() const;
    bool lastExecTimeIsSet() const;
    void unsetlastExecTime();
    void setLastExecTime(const std::string& value);

    /// <summary>
    /// 检查类型
    /// </summary>

    std::string getCheckType() const;
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 代码平均复杂度
    /// </summary>

    std::string getCyclomaticComplexityPerMethod() const;
    bool cyclomaticComplexityPerMethodIsSet() const;
    void unsetcyclomaticComplexityPerMethod();
    void setCyclomaticComplexityPerMethod(const std::string& value);

    /// <summary>
    /// 代码平均复杂度(文件)
    /// </summary>

    std::string getCyclomaticComplexityPerFile() const;
    bool cyclomaticComplexityPerFileIsSet() const;
    void unsetcyclomaticComplexityPerFile();
    void setCyclomaticComplexityPerFile(const std::string& value);

    /// <summary>
    /// 致命问题数
    /// </summary>

    std::string getCriticalCount() const;
    bool criticalCountIsSet() const;
    void unsetcriticalCount();
    void setCriticalCount(const std::string& value);

    /// <summary>
    /// 严重问题数
    /// </summary>

    std::string getMajorCount() const;
    bool majorCountIsSet() const;
    void unsetmajorCount();
    void setMajorCount(const std::string& value);

    /// <summary>
    /// 一般问题数
    /// </summary>

    std::string getMinorCount() const;
    bool minorCountIsSet() const;
    void unsetminorCount();
    void setMinorCount(const std::string& value);

    /// <summary>
    /// 提示问题数
    /// </summary>

    std::string getSuggestionCount() const;
    bool suggestionCountIsSet() const;
    void unsetsuggestionCount();
    void setSuggestionCount(const std::string& value);

    /// <summary>
    /// 门禁质量是否通过
    /// </summary>

    std::string getIsAccess() const;
    bool isAccessIsSet() const;
    void unsetisAccess();
    void setIsAccess(const std::string& value);

    /// <summary>
    /// 任务触发方式
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 文件重复率
    /// </summary>

    std::string getFileDuplicationRatio() const;
    bool fileDuplicationRatioIsSet() const;
    void unsetfileDuplicationRatio();
    void setFileDuplicationRatio(const std::string& value);


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
    std::string triggerType_;
    bool triggerTypeIsSet_;
    std::string fileDuplicationRatio_;
    bool fileDuplicationRatioIsSet_;

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
