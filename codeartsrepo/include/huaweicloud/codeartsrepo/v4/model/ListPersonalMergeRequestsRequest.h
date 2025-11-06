
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalMergeRequestsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalMergeRequestsRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListPersonalMergeRequestsRequest
    : public ModelBase
{
public:
    ListPersonalMergeRequestsRequest();
    virtual ~ListPersonalMergeRequestsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPersonalMergeRequestsRequest members

    /// <summary>
    /// **参数解释：** 合并请求状态 **约束限制：** - all，返回所有状态的合并请求。 - opened，返回开启中的合并请求。 - closed，返回关闭的合并请求。 - locked，返回锁定的合并请求。 - merged，返回已合并的合并请求。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式 **约束限制：** - created_at，根据创建时间排序。 - updated_at，根据更新时间排序。 - merged_at，根据合并时间排序。
    /// </summary>

    std::string getOrderBy() const;
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序顺序 **约束限制：**   - asc，正序排序。   - desc，倒序排序。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求关联标签
    /// </summary>

    std::string getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定时间前创建
    /// </summary>

    utility::datetime getCreatedBefore() const;
    bool createdBeforeIsSet() const;
    void unsetcreatedBefore();
    void setCreatedBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 指定时间后创建
    /// </summary>

    utility::datetime getCreatedAfter() const;
    bool createdAfterIsSet() const;
    void unsetcreatedAfter();
    void setCreatedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 指定时间后更新
    /// </summary>

    utility::datetime getUpdatedAfter() const;
    bool updatedAfterIsSet() const;
    void unsetupdatedAfter();
    void setUpdatedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 指定时间前更新
    /// </summary>

    utility::datetime getUpdatedBefore() const;
    bool updatedBeforeIsSet() const;
    void unsetupdatedBefore();
    void setUpdatedBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 结果集属性，根据给定的参数返回不同的结果， simple，返回简单数据，basic返回基本数据。
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求创建人
    /// </summary>

    std::string getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(const std::string& value);

    /// <summary>
    /// **参数解释：**   - created_by_me 我创建的合并请求   - assigned_to_me 待我合并的合并请求   - need_my_review 待我检视的合并请求   - need_my_approve 待我审核的合并请求   - all 所有有权限访问的合并请求
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求原分支
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求目标分支
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 根据合并请求标题、描述信息过滤关键字
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求标题是否有WIP关键字
    /// </summary>

    std::string getWip() const;
    bool wipIsSet() const;
    void unsetwip();
    void setWip(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求合并人
    /// </summary>

    std::string getMergedBy() const;
    bool mergedByIsSet() const;
    void unsetmergedBy();
    void setMergedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定时间后合入
    /// </summary>

    utility::datetime getMergedAfter() const;
    bool mergedAfterIsSet() const;
    void unsetmergedAfter();
    void setMergedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 指定时间前合入
    /// </summary>

    utility::datetime getMergedBefore() const;
    bool mergedBeforeIsSet() const;
    void unsetmergedBefore();
    void setMergedBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 分页参数偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 分页参数结果数量限制
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 是否只返回合并请求总数
    /// </summary>

    bool isOnlyCount() const;
    bool onlyCountIsSet() const;
    void unsetonlyCount();
    void setOnlyCount(bool value);


protected:
    std::string state_;
    bool stateIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string labels_;
    bool labelsIsSet_;
    utility::datetime createdBefore_;
    bool createdBeforeIsSet_;
    utility::datetime createdAfter_;
    bool createdAfterIsSet_;
    utility::datetime updatedAfter_;
    bool updatedAfterIsSet_;
    utility::datetime updatedBefore_;
    bool updatedBeforeIsSet_;
    std::string view_;
    bool viewIsSet_;
    std::string authorId_;
    bool authorIdIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string wip_;
    bool wipIsSet_;
    std::string mergedBy_;
    bool mergedByIsSet_;
    utility::datetime mergedAfter_;
    bool mergedAfterIsSet_;
    utility::datetime mergedBefore_;
    bool mergedBeforeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool onlyCount_;
    bool onlyCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPersonalMergeRequestsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPersonalMergeRequestsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalMergeRequestsRequest_H_
