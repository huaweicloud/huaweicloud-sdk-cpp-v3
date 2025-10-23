
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestDiscussionResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestDiscussionResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/MergeRequestBasicDiscussionDto.h>
#include <huaweicloud/codehub/v4/model/UserBasicDto.h>
#include <vector>
#include <huaweicloud/codehub/v4/model/NoteDto.h>
#include <huaweicloud/codehub/v4/model/MergeRequestVersionParamsDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateMergeRequestDiscussionResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateMergeRequestDiscussionResponse();
    virtual ~CreateMergeRequestDiscussionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestDiscussionResponse members

    /// <summary>
    /// **参数解释：** 检视意见id(主评论和回复共用)。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 个人检视意见(不需要解决)。
    /// </summary>

    bool isIndividualNote() const;
    bool individualNoteIsSet() const;
    void unsetindividualNote();
    void setIndividualNote(bool value);

    /// <summary>
    /// **参数解释：** 评论列表(主评+回复)。
    /// </summary>

    std::vector<NoteDto>& getNotes();
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::vector<NoteDto>& value);

    /// <summary>
    /// **参数解释：** 仓库id。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 意见类型。 **取值范围：** - MergeRequest: 合并请求下提的检视意见。 - Commit: 代码页或提交记录下提的检视意见。
    /// </summary>

    std::string getNoteableType() const;
    bool noteableTypeIsSet() const;
    void unsetnoteableType();
    void setNoteableType(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交记录id。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。
    /// </summary>

    std::string getRepositoryFullPath() const;
    bool repositoryFullPathIsSet() const;
    void unsetrepositoryFullPath();
    void setRepositoryFullPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件旧权限(默认100644)。
    /// </summary>

    std::string getAMode() const;
    bool aModeIsSet() const;
    void unsetaMode();
    void setAMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件新权限(默认100644)。
    /// </summary>

    std::string getBMode() const;
    bool bModeIsSet() const;
    void unsetbMode();
    void setBMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为删除文件。
    /// </summary>

    bool isDeletedFile() const;
    bool deletedFileIsSet() const;
    void unsetdeletedFile();
    void setDeletedFile(bool value);

    /// <summary>
    /// **参数解释：** 是否为新增文件。
    /// </summary>

    bool isNewFile() const;
    bool newFileIsSet() const;
    void unsetnewFile();
    void setNewFile(bool value);

    /// <summary>
    /// **参数解释：** 是否已解决。
    /// </summary>

    bool isResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(bool value);

    /// <summary>
    /// **参数解释：** 是否已归档。
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// **参数解释：** 意见分类key。
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类中文。
    /// </summary>

    std::string getReviewCategoriesCn() const;
    bool reviewCategoriesCnIsSet() const;
    void unsetreviewCategoriesCn();
    void setReviewCategoriesCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类英文。
    /// </summary>

    std::string getReviewCategoriesEn() const;
    bool reviewCategoriesEnIsSet() const;
    void unsetreviewCategoriesEn();
    void setReviewCategoriesEn(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见模块。
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重程度key。 **取值范围：** - suggestion: 建议。 - minor: 一般。 - major: 严重。 - fatal: 致命。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重程度中文。 **取值范围：** - 建议 - 一般 - 严重 - 致命
    /// </summary>

    std::string getSeverityCn() const;
    bool severityCnIsSet() const;
    void unsetseverityCn();
    void setSeverityCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 严重程度英文。 **取值范围：** - Suggestion: 建议。 - Minor: 一般。 - major: 严重。 - fatal: 致命。
    /// </summary>

    std::string getSeverityEn() const;
    bool severityEnIsSet() const;
    void unsetseverityEn();
    void setSeverityEn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getProposer() const;
    bool proposerIsSet() const;
    void unsetproposer();
    void setProposer(const UserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    MergeRequestVersionParamsDto getMergeRequestVersionParams() const;
    bool mergeRequestVersionParamsIsSet() const;
    void unsetmergeRequestVersionParams();
    void setMergeRequestVersionParams(const MergeRequestVersionParamsDto& value);

    /// <summary>
    /// **参数解释：** 变更页检视意见的代码片段。
    /// </summary>

    std::string getDiffFile() const;
    bool diffFileIsSet() const;
    void unsetdiffFile();
    void setDiffFile(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见所在文件的新增行数量。
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// **参数解释：** 检视意见所在文件的删除行数量。
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    bool individualNote_;
    bool individualNoteIsSet_;
    std::vector<NoteDto> notes_;
    bool notesIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string noteableType_;
    bool noteableTypeIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string repositoryFullPath_;
    bool repositoryFullPathIsSet_;
    std::string aMode_;
    bool aModeIsSet_;
    std::string bMode_;
    bool bModeIsSet_;
    bool deletedFile_;
    bool deletedFileIsSet_;
    bool newFile_;
    bool newFileIsSet_;
    bool resolved_;
    bool resolvedIsSet_;
    bool archived_;
    bool archivedIsSet_;
    std::string reviewCategories_;
    bool reviewCategoriesIsSet_;
    std::string reviewCategoriesCn_;
    bool reviewCategoriesCnIsSet_;
    std::string reviewCategoriesEn_;
    bool reviewCategoriesEnIsSet_;
    std::string reviewModules_;
    bool reviewModulesIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string severityCn_;
    bool severityCnIsSet_;
    std::string severityEn_;
    bool severityEnIsSet_;
    UserBasicDto assignee_;
    bool assigneeIsSet_;
    UserBasicDto proposer_;
    bool proposerIsSet_;
    MergeRequestVersionParamsDto mergeRequestVersionParams_;
    bool mergeRequestVersionParamsIsSet_;
    std::string diffFile_;
    bool diffFileIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestDiscussionResponse_H_
