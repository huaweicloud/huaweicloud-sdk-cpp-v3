
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestListBasicDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestListBasicDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectSimpleDto.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/NotesCountDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求基本信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeRequestListBasicDto
    : public ModelBase
{
public:
    MergeRequestListBasicDto();
    virtual ~MergeRequestListBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestListBasicDto members

    /// <summary>
    /// **参数解释：** 合并请求ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求位于当前仓库序号。
    /// </summary>

    int32_t getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求源分支。
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求目标分支。
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求源仓库ID。
    /// </summary>

    int32_t getSourceRepositoryId() const;
    bool sourceRepositoryIdIsSet() const;
    void unsetsourceRepositoryId();
    void setSourceRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求检视模式。
    /// </summary>

    std::string getReviewMode() const;
    bool reviewModeIsSet() const;
    void unsetreviewMode();
    void setReviewMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求关闭时间。
    /// </summary>

    std::string getClosedAt() const;
    bool closedAtIsSet() const;
    void unsetclosedAt();
    void setClosedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getClosedBy() const;
    bool closedByIsSet() const;
    void unsetclosedBy();
    void setClosedBy(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求合并时间。
    /// </summary>

    std::string getMergedAt() const;
    bool mergedAtIsSet() const;
    void unsetmergedAt();
    void setMergedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getMergedBy() const;
    bool mergedByIsSet() const;
    void unsetmergedBy();
    void setMergedBy(const UserBasicDto& value);

    /// <summary>
    /// **参数解释：** 合并请求流水线状态。
    /// </summary>

    std::string getPipelineStatus() const;
    bool pipelineStatusIsSet() const;
    void unsetpipelineStatus();
    void setPipelineStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求代码质量状态。
    /// </summary>

    std::string getCodequalityStatus() const;
    bool codequalityStatusIsSet() const;
    void unsetcodequalityStatus();
    void setCodequalityStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求流水线状态。
    /// </summary>

    std::string getPipelineStatusWithCodeQuality() const;
    bool pipelineStatusWithCodeQualityIsSet() const;
    void unsetpipelineStatusWithCodeQuality();
    void setPipelineStatusWithCodeQuality(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求检视意见。
    /// </summary>

    int32_t getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ProjectSimpleDto getSourceRepository() const;
    bool sourceRepositoryIsSet() const;
    void unsetsourceRepository();
    void setSourceRepository(const ProjectSimpleDto& value);

    /// <summary>
    /// 
    /// </summary>

    ProjectSimpleDto getTargetRepository() const;
    bool targetRepositoryIsSet() const;
    void unsettargetRepository();
    void setTargetRepository(const ProjectSimpleDto& value);

    /// <summary>
    /// **参数解释：** 合并请求URL地址。
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求新增代码行数。
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求删除代码行数。
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求检视模式。
    /// </summary>

    std::string getMergeRequestType() const;
    bool mergeRequestTypeIsSet() const;
    void unsetmergeRequestType();
    void setMergeRequestType(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求git地址。
    /// </summary>

    std::string getSourceGitUrl() const;
    bool sourceGitUrlIsSet() const;
    void unsetsourceGitUrl();
    void setSourceGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求标签。
    /// </summary>

    std::vector<std::map<std::string, Object>>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::map<std::string, Object>>& value);

    /// <summary>
    /// **参数解释：** 合并请求分数。
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求最小合入分数。
    /// </summary>

    int32_t getMinMergedScore() const;
    bool minMergedScoreIsSet() const;
    void unsetminMergedScore();
    void setMinMergedScore(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求源项目ID。
    /// </summary>

    std::string getSourceProductId() const;
    bool sourceProductIdIsSet() const;
    void unsetsourceProductId();
    void setSourceProductId(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求目标项目ID。
    /// </summary>

    std::string getTargetProductId() const;
    bool targetProductIdIsSet() const;
    void unsettargetProductId();
    void setTargetProductId(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求项目名。
    /// </summary>

    std::string getProductName() const;
    bool productNameIsSet() const;
    void unsetproductName();
    void setProductName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NotesCountDto getNotesCount() const;
    bool notesCountIsSet() const;
    void unsetnotesCount();
    void setNotesCount(const NotesCountDto& value);

    /// <summary>
    /// **参数解释：** 合并请求审核结果。
    /// </summary>

    bool isModerationResult() const;
    bool moderationResultIsSet() const;
    void unsetmoderationResult();
    void setModerationResult(bool value);

    /// <summary>
    /// **参数解释：** 合并请求审核时间。
    /// </summary>

    int64_t getModerationTime() const;
    bool moderationTimeIsSet() const;
    void unsetmoderationTime();
    void setModerationTime(int64_t value);

    /// <summary>
    /// **参数解释：** 合并请求审核状态。
    /// </summary>

    int32_t getModerationStatus() const;
    bool moderationStatusIsSet() const;
    void unsetmoderationStatus();
    void setModerationStatus(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t iid_;
    bool iidIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t sourceRepositoryId_;
    bool sourceRepositoryIdIsSet_;
    std::string reviewMode_;
    bool reviewModeIsSet_;
    UserBasicDto author_;
    bool authorIsSet_;
    std::string closedAt_;
    bool closedAtIsSet_;
    UserBasicDto closedBy_;
    bool closedByIsSet_;
    std::string mergedAt_;
    bool mergedAtIsSet_;
    UserBasicDto mergedBy_;
    bool mergedByIsSet_;
    std::string pipelineStatus_;
    bool pipelineStatusIsSet_;
    std::string codequalityStatus_;
    bool codequalityStatusIsSet_;
    std::string pipelineStatusWithCodeQuality_;
    bool pipelineStatusWithCodeQualityIsSet_;
    int32_t notes_;
    bool notesIsSet_;
    ProjectSimpleDto sourceRepository_;
    bool sourceRepositoryIsSet_;
    ProjectSimpleDto targetRepository_;
    bool targetRepositoryIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;
    std::string mergeRequestType_;
    bool mergeRequestTypeIsSet_;
    std::string sourceGitUrl_;
    bool sourceGitUrlIsSet_;
    std::vector<std::map<std::string, Object>> labels_;
    bool labelsIsSet_;
    int32_t score_;
    bool scoreIsSet_;
    int32_t minMergedScore_;
    bool minMergedScoreIsSet_;
    std::string sourceProductId_;
    bool sourceProductIdIsSet_;
    std::string targetProductId_;
    bool targetProductIdIsSet_;
    std::string productName_;
    bool productNameIsSet_;
    NotesCountDto notesCount_;
    bool notesCountIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    int64_t moderationTime_;
    bool moderationTimeIsSet_;
    int32_t moderationStatus_;
    bool moderationStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestListBasicDto_H_
