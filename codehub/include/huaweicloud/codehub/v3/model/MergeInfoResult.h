
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeInfoResult_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeInfoResult_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/ApprovalMergeRequestApproversItem.h>
#include <huaweicloud/codehub/v3/model/Author.h>
#include <huaweicloud/codehub/v3/model/MergeRequestAssigneeListItem.h>
#include <string>
#include <huaweicloud/codehub/v3/model/MergeRequestDiff.h>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeInfoResult
    : public ModelBase
{
public:
    MergeInfoResult();
    virtual ~MergeInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeInfoResult members

    /// <summary>
    /// 评审人
    /// </summary>

    std::vector<ApprovalMergeRequestApproversItem>& getApprovalMergeRequestApprovers();
    bool approvalMergeRequestApproversIsSet() const;
    void unsetapprovalMergeRequestApprovers();
    void setApprovalMergeRequestApprovers(const std::vector<ApprovalMergeRequestApproversItem>& value);

    /// <summary>
    /// 
    /// </summary>

    Author getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const Author& value);

    /// <summary>
    /// 关闭时间
    /// </summary>

    std::string getClosedAt() const;
    bool closedAtIsSet() const;
    void unsetclosedAt();
    void setClosedAt(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 合并请求描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getDevcloudSourceBranch() const;
    bool devcloudSourceBranchIsSet() const;
    void unsetdevcloudSourceBranch();
    void setDevcloudSourceBranch(const std::string& value);

    /// <summary>
    /// 合并请求id
    /// </summary>

    double getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(double value);

    /// <summary>
    /// 当前仓库内合并请求序号
    /// </summary>

    double getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(double value);

    /// <summary>
    /// 源分支是否存在
    /// </summary>

    bool isIsSourceBranchExist() const;
    bool isSourceBranchExistIsSet() const;
    void unsetisSourceBranchExist();
    void setIsSourceBranchExist(bool value);

    /// <summary>
    /// 检视人
    /// </summary>

    std::vector<MergeRequestAssigneeListItem>& getMergeRequestAssigneeList();
    bool mergeRequestAssigneeListIsSet() const;
    void unsetmergeRequestAssigneeList();
    void setMergeRequestAssigneeList(const std::vector<MergeRequestAssigneeListItem>& value);

    /// <summary>
    /// 
    /// </summary>

    MergeRequestDiff getMergeRequestDiff() const;
    bool mergeRequestDiffIsSet() const;
    void unsetmergeRequestDiff();
    void setMergeRequestDiff(const MergeRequestDiff& value);

    /// <summary>
    /// 是否可以被合并
    /// </summary>

    std::string getMergeStatus() const;
    bool mergeStatusIsSet() const;
    void unsetmergeStatus();
    void setMergeStatus(const std::string& value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// 合并请求状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::vector<ApprovalMergeRequestApproversItem> approvalMergeRequestApprovers_;
    bool approvalMergeRequestApproversIsSet_;
    Author author_;
    bool authorIsSet_;
    std::string closedAt_;
    bool closedAtIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string devcloudSourceBranch_;
    bool devcloudSourceBranchIsSet_;
    double id_;
    bool idIsSet_;
    double iid_;
    bool iidIsSet_;
    bool isSourceBranchExist_;
    bool isSourceBranchExistIsSet_;
    std::vector<MergeRequestAssigneeListItem> mergeRequestAssigneeList_;
    bool mergeRequestAssigneeListIsSet_;
    MergeRequestDiff mergeRequestDiff_;
    bool mergeRequestDiffIsSet_;
    std::string mergeStatus_;
    bool mergeStatusIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeInfoResult_H_
