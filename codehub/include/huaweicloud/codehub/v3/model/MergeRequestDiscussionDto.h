
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestDiscussionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestDiscussionDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/UserBasicDto.h>
#include <string>
#include <huaweicloud/codehub/v3/model/MergeRequestBasicDiscussionDto.h>
#include <huaweicloud/codehub/v3/model/MergeRequestVersionParamsDto.h>
#include <vector>
#include <huaweicloud/codehub/v3/model/NoteDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeRequestDiscussionDto
    : public ModelBase
{
public:
    MergeRequestDiscussionDto();
    virtual ~MergeRequestDiscussionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestDiscussionDto members

    /// <summary>
    /// 评论id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// individual_note
    /// </summary>

    bool isIndividualNote() const;
    bool individualNoteIsSet() const;
    void unsetindividualNote();
    void setIndividualNote(bool value);

    /// <summary>
    /// 主评和回复列表
    /// </summary>

    std::vector<NoteDto>& getNotes();
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::vector<NoteDto>& value);

    /// <summary>
    /// 仓库id
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// 目标类型
    /// </summary>

    std::string getNoteableType() const;
    bool noteableTypeIsSet() const;
    void unsetnoteableType();
    void setNoteableType(const std::string& value);

    /// <summary>
    /// 关联的提交id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// 仓库路径
    /// </summary>

    std::string getProjectFullPath() const;
    bool projectFullPathIsSet() const;
    void unsetprojectFullPath();
    void setProjectFullPath(const std::string& value);

    /// <summary>
    /// 变更前文件模式
    /// </summary>

    std::string getAMode() const;
    bool aModeIsSet() const;
    void unsetaMode();
    void setAMode(const std::string& value);

    /// <summary>
    /// 变更后文件模式
    /// </summary>

    std::string getBMode() const;
    bool bModeIsSet() const;
    void unsetbMode();
    void setBMode(const std::string& value);

    /// <summary>
    /// 此次变更是否删除文件
    /// </summary>

    bool isDeletedFile() const;
    bool deletedFileIsSet() const;
    void unsetdeletedFile();
    void setDeletedFile(bool value);

    /// <summary>
    /// 此次变更是否新增文件
    /// </summary>

    bool isNewFile() const;
    bool newFileIsSet() const;
    void unsetnewFile();
    void setNewFile(bool value);

    /// <summary>
    /// 检视意见是否解决
    /// </summary>

    bool isResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(bool value);

    /// <summary>
    /// 检视意见是否存档
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// 检视意见分类
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// 检视意见分类中文名
    /// </summary>

    std::string getReviewCategoriesCn() const;
    bool reviewCategoriesCnIsSet() const;
    void unsetreviewCategoriesCn();
    void setReviewCategoriesCn(const std::string& value);

    /// <summary>
    /// 检视意见分类英文名
    /// </summary>

    std::string getReviewCategoriesEn() const;
    bool reviewCategoriesEnIsSet() const;
    void unsetreviewCategoriesEn();
    void setReviewCategoriesEn(const std::string& value);

    /// <summary>
    /// 检视意见模块
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// 严重程度
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// 严重程度中文名
    /// </summary>

    std::string getSeverityCn() const;
    bool severityCnIsSet() const;
    void unsetseverityCn();
    void setSeverityCn(const std::string& value);

    /// <summary>
    /// 严重程度英文名
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
    /// 变更文件
    /// </summary>

    std::string getDiffFile() const;
    bool diffFileIsSet() const;
    void unsetdiffFile();
    void setDiffFile(const std::string& value);

    /// <summary>
    /// 新增行数
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// 删除行数
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
    int32_t projectId_;
    bool projectIdIsSet_;
    std::string noteableType_;
    bool noteableTypeIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string projectFullPath_;
    bool projectFullPathIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestDiscussionDto_H_
