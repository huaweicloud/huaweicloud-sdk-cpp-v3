
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestRelatedWorkItemDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestRelatedWorkItemDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeRequestRelatedWorkItemDto
    : public ModelBase
{
public:
    MergeRequestRelatedWorkItemDto();
    virtual ~MergeRequestRelatedWorkItemDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestRelatedWorkItemDto members

    /// <summary>
    /// 关联id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 仓库id
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// 合并请求id
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// 目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// 合并请求标题
    /// </summary>

    std::string getMergeRequestTitle() const;
    bool mergeRequestTitleIsSet() const;
    void unsetmergeRequestTitle();
    void setMergeRequestTitle(const std::string& value);

    /// <summary>
    /// 合并请求url
    /// </summary>

    std::string getMergeRequestUrl() const;
    bool mergeRequestUrlIsSet() const;
    void unsetmergeRequestUrl();
    void setMergeRequestUrl(const std::string& value);

    /// <summary>
    /// 合并请求状态
    /// </summary>

    std::string getMergeRequestState() const;
    bool mergeRequestStateIsSet() const;
    void unsetmergeRequestState();
    void setMergeRequestState(const std::string& value);

    /// <summary>
    /// 关联单id
    /// </summary>

    std::string getRelatedId() const;
    bool relatedIdIsSet() const;
    void unsetrelatedId();
    void setRelatedId(const std::string& value);

    /// <summary>
    /// 关联单标题
    /// </summary>

    std::string getRelatedTitle() const;
    bool relatedTitleIsSet() const;
    void unsetrelatedTitle();
    void setRelatedTitle(const std::string& value);

    /// <summary>
    /// 关联单url
    /// </summary>

    std::string getRelatedUrl() const;
    bool relatedUrlIsSet() const;
    void unsetrelatedUrl();
    void setRelatedUrl(const std::string& value);

    /// <summary>
    /// 关联结果
    /// </summary>

    int32_t getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(int32_t value);

    /// <summary>
    /// 关联结果信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// 话题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 跟单人
    /// </summary>

    Object getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const Object& value);

    /// <summary>
    /// 状态
    /// </summary>

    Object getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const Object& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    int32_t repoId_;
    bool repoIdIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string mergeRequestTitle_;
    bool mergeRequestTitleIsSet_;
    std::string mergeRequestUrl_;
    bool mergeRequestUrlIsSet_;
    std::string mergeRequestState_;
    bool mergeRequestStateIsSet_;
    std::string relatedId_;
    bool relatedIdIsSet_;
    std::string relatedTitle_;
    bool relatedTitleIsSet_;
    std::string relatedUrl_;
    bool relatedUrlIsSet_;
    int32_t result_;
    bool resultIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    Object tracker_;
    bool trackerIsSet_;
    Object status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestRelatedWorkItemDto_H_
