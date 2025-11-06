
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ImportMrParamsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ImportMrParamsDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/DiffRefsParamDto.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/ApproverParamDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ImportMrParamsDto
    : public ModelBase
{
public:
    ImportMrParamsDto();
    virtual ~ImportMrParamsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportMrParamsDto members

    /// <summary>
    /// 合并请求iid
    /// </summary>

    int32_t getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(int32_t value);

    /// <summary>
    /// 导入唯一标识
    /// </summary>

    std::string getSourceUniqKey() const;
    bool sourceUniqKeyIsSet() const;
    void unsetsourceUniqKey();
    void setSourceUniqKey(const std::string& value);

    /// <summary>
    /// 作者id
    /// </summary>

    int32_t getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(int32_t value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 源分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// 目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// 目标仓库
    /// </summary>

    std::string getTargetRepositoryId() const;
    bool targetRepositoryIdIsSet() const;
    void unsettargetRepositoryId();
    void setTargetRepositoryId(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    Object getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const Object& value);

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
    /// 合并时间
    /// </summary>

    std::string getMergedAt() const;
    bool mergedAtIsSet() const;
    void unsetmergedAt();
    void setMergedAt(const std::string& value);

    /// <summary>
    /// 关闭时间
    /// </summary>

    std::string getClosedAt() const;
    bool closedAtIsSet() const;
    void unsetclosedAt();
    void setClosedAt(const std::string& value);

    /// <summary>
    /// 审核人列表
    /// </summary>

    std::vector<ApproverParamDto>& getApprovers();
    bool approversIsSet() const;
    void unsetapprovers();
    void setApprovers(const std::vector<ApproverParamDto>& value);

    /// <summary>
    /// 合并请求变更commit列表
    /// </summary>

    std::vector<DiffRefsParamDto>& getDiffRefs();
    bool diffRefsIsSet() const;
    void unsetdiffRefs();
    void setDiffRefs(const std::vector<DiffRefsParamDto>& value);

    /// <summary>
    /// squash合并
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// 合并mr后删除源分支
    /// </summary>

    bool isRemoveSourceBranch() const;
    bool removeSourceBranchIsSet() const;
    void unsetremoveSourceBranch();
    void setRemoveSourceBranch(bool value);

    /// <summary>
    /// 源分支是否被删除
    /// </summary>

    bool isBranchIsDeleted() const;
    bool branchIsDeletedIsSet() const;
    void unsetbranchIsDeleted();
    void setBranchIsDeleted(bool value);

    /// <summary>
    /// 源合并请求是否是fork合并请求
    /// </summary>

    bool isFork() const;
    bool forkIsSet() const;
    void unsetfork();
    void setFork(bool value);

    /// <summary>
    /// 导入来源
    /// </summary>

    std::string getImportSourceFrom() const;
    bool importSourceFromIsSet() const;
    void unsetimportSourceFrom();
    void setImportSourceFrom(const std::string& value);


protected:
    int32_t iid_;
    bool iidIsSet_;
    std::string sourceUniqKey_;
    bool sourceUniqKeyIsSet_;
    int32_t authorId_;
    bool authorIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string targetRepositoryId_;
    bool targetRepositoryIdIsSet_;
    Object labels_;
    bool labelsIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string mergedAt_;
    bool mergedAtIsSet_;
    std::string closedAt_;
    bool closedAtIsSet_;
    std::vector<ApproverParamDto> approvers_;
    bool approversIsSet_;
    std::vector<DiffRefsParamDto> diffRefs_;
    bool diffRefsIsSet_;
    bool squash_;
    bool squashIsSet_;
    bool removeSourceBranch_;
    bool removeSourceBranchIsSet_;
    bool branchIsDeleted_;
    bool branchIsDeletedIsSet_;
    bool fork_;
    bool forkIsSet_;
    std::string importSourceFrom_;
    bool importSourceFromIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ImportMrParamsDto_H_
