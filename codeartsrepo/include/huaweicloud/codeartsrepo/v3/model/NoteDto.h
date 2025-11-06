
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_NoteDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_NoteDto_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/UserBasicDto.h>
#include <huaweicloud/codeartsrepo/v3/model/PositionDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  NoteDto
    : public ModelBase
{
public:
    NoteDto();
    virtual ~NoteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NoteDto members

    /// <summary>
    /// note id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// note类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 检视意见内容
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);

    /// <summary>
    /// 附件
    /// </summary>

    std::string getAttachment() const;
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserBasicDto& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 是否是系统生成的日志
    /// </summary>

    bool isSystem() const;
    bool systemIsSet() const;
    void unsetsystem();
    void setSystem(bool value);

    /// <summary>
    /// 目标id
    /// </summary>

    int32_t getNoteableId() const;
    bool noteableIdIsSet() const;
    void unsetnoteableId();
    void setNoteableId(int32_t value);

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
    /// 是否可解决
    /// </summary>

    bool isResolvable() const;
    bool resolvableIsSet() const;
    void unsetresolvable();
    void setResolvable(bool value);

    /// <summary>
    /// 是否是回复
    /// </summary>

    bool isIsReply() const;
    bool isReplyIsSet() const;
    void unsetisReply();
    void setIsReply(bool value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getResolvedBy() const;
    bool resolvedByIsSet() const;
    void unsetresolvedBy();
    void setResolvedBy(const UserBasicDto& value);

    /// <summary>
    /// 目标iid
    /// </summary>

    int32_t getNoteableIid() const;
    bool noteableIidIsSet() const;
    void unsetnoteableIid();
    void setNoteableIid(int32_t value);

    /// <summary>
    /// 讨论id
    /// </summary>

    std::string getDiscussionId() const;
    bool discussionIdIsSet() const;
    void unsetdiscussionId();
    void setDiscussionId(const std::string& value);

    /// <summary>
    /// 所属项目
    /// </summary>

    std::string getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const std::string& value);

    /// <summary>
    /// 变更文件
    /// </summary>

    std::string getDiffFile() const;
    bool diffFileIsSet() const;
    void unsetdiffFile();
    void setDiffFile(const std::string& value);

    /// <summary>
    /// 变更内容
    /// </summary>

    std::string getDiff() const;
    bool diffIsSet() const;
    void unsetdiff();
    void setDiff(const std::string& value);

    /// <summary>
    /// 是否存档
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
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 行号
    /// </summary>

    std::string getLine() const;
    bool lineIsSet() const;
    void unsetline();
    void setLine(const std::string& value);

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

    PositionDto getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const PositionDto& value);

    /// <summary>
    /// 是否解决
    /// </summary>

    bool isResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(bool value);

    /// <summary>
    /// 是否过时
    /// </summary>

    bool isIsOutdated() const;
    bool isOutdatedIsSet() const;
    void unsetisOutdated();
    void setIsOutdated(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string body_;
    bool bodyIsSet_;
    std::string attachment_;
    bool attachmentIsSet_;
    UserBasicDto author_;
    bool authorIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool system_;
    bool systemIsSet_;
    int32_t noteableId_;
    bool noteableIdIsSet_;
    std::string noteableType_;
    bool noteableTypeIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    bool resolvable_;
    bool resolvableIsSet_;
    bool isReply_;
    bool isReplyIsSet_;
    UserBasicDto resolvedBy_;
    bool resolvedByIsSet_;
    int32_t noteableIid_;
    bool noteableIidIsSet_;
    std::string discussionId_;
    bool discussionIdIsSet_;
    std::string project_;
    bool projectIsSet_;
    std::string diffFile_;
    bool diffFileIsSet_;
    std::string diff_;
    bool diffIsSet_;
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
    std::string filePath_;
    bool filePathIsSet_;
    std::string line_;
    bool lineIsSet_;
    UserBasicDto assignee_;
    bool assigneeIsSet_;
    UserBasicDto proposer_;
    bool proposerIsSet_;
    PositionDto position_;
    bool positionIsSet_;
    bool resolved_;
    bool resolvedIsSet_;
    bool isOutdated_;
    bool isOutdatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_NoteDto_H_
