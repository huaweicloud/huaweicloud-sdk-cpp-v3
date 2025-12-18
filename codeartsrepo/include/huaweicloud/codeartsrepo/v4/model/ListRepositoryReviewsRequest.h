
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryReviewsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryReviewsRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListRepositoryReviewsRequest
    : public ModelBase
{
public:
    ListRepositoryReviewsRequest();
    virtual ~ListRepositoryReviewsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryReviewsRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 意见类型。 **取值范围：** - Commit，提交。 - MergeRequest，合并请求。  
    /// </summary>

    std::string getNoteableType() const;
    bool noteableTypeIsSet() const;
    void unsetnoteableType();
    void setNoteableType(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询评论内容。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 开始日期。
    /// </summary>

    utility::datetime getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 结束日期。
    /// </summary>

    utility::datetime getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 是否仅返回带有提交计数和diffs计数的结果。 **取值范围：** - true，仅返回带有提交计数和diffs计数的结果。 - false，按照compare_view参数返回结果信息。
    /// </summary>

    bool isOnlyCount() const;
    bool onlyCountIsSet() const;
    void unsetonlyCount();
    void setOnlyCount(bool value);

    /// <summary>
    /// **参数解释：** 搜索的检视意见分类。 **取值范围：** 字符串长度不少于1，不超过200。
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 搜索的检视意见模块。 **取值范围：** 字符串长度不少于1，不超过200。
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见严重程度
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见指派人id。
    /// </summary>

    int32_t getAssigneeId() const;
    bool assigneeIdIsSet() const;
    void unsetassigneeId();
    void setAssigneeId(int32_t value);

    /// <summary>
    /// **参数解释：** 检视意见检视人id。
    /// </summary>

    int32_t getProposerId() const;
    bool proposerIdIsSet() const;
    void unsetproposerId();
    void setProposerId(int32_t value);

    /// <summary>
    /// **参数解释：** 目标分支名称。 **取值范围：** 字符串长度不少于1，不超过2000。
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否包含回复。 **取值范围：** - true，包含。 - false，不包含。
    /// </summary>

    bool isIncludeReply() const;
    bool includeReplyIsSet() const;
    void unsetincludeReply();
    void setIncludeReply(bool value);

    /// <summary>
    /// **参数解释：** 排序方式。 **取值范围：** - created，创建时间。 - updated，更新时间。
    /// </summary>

    std::string getOrderBy() const;
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见返回排序 - asc 按创建时间正序返回 - desc 按创建时间倒序返回
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释：** 偏移量，从0开始。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 返回数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string noteableType_;
    bool noteableTypeIsSet_;
    std::string search_;
    bool searchIsSet_;
    utility::datetime startDate_;
    bool startDateIsSet_;
    utility::datetime endDate_;
    bool endDateIsSet_;
    bool onlyCount_;
    bool onlyCountIsSet_;
    std::string reviewCategories_;
    bool reviewCategoriesIsSet_;
    std::string reviewModules_;
    bool reviewModulesIsSet_;
    std::string severity_;
    bool severityIsSet_;
    int32_t assigneeId_;
    bool assigneeIdIsSet_;
    int32_t proposerId_;
    bool proposerIdIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    bool includeReply_;
    bool includeReplyIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    std::string sort_;
    bool sortIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRepositoryReviewsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRepositoryReviewsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryReviewsRequest_H_
