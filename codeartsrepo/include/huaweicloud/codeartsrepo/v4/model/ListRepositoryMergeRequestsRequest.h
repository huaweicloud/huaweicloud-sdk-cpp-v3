
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryMergeRequestsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryMergeRequestsRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListRepositoryMergeRequestsRequest
    : public ModelBase
{
public:
    ListRepositoryMergeRequestsRequest();
    virtual ~ListRepositoryMergeRequestsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryMergeRequestsRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

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

    /// <summary>
    /// **参数解释：** 返回指定状态的合并请求。 **约束限制：** - all，表示所有状态。 - opened，表示开启中状态 - closed，表示已关闭状态 - merged，表示已合并状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式。 **取值范围：** - created_at，创建时间。 - updated_at，更新时间。
    /// </summary>

    std::string getOrderBy() const;
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式。 **约束限制：** - asc，升序。 - desc，降序。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释：** 返回由指定ID用户创建的合并请求。 多个ID以逗号&#39;,&#39;分隔，返回满足条件的合并请求并集。
    /// </summary>

    std::string getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(const std::string& value);

    /// <summary>
    /// **参数解释：** 返回指定源分支的合并请求。
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 返回指定目标分支的合并请求。
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求关键字搜索。 返回标题或者描述包含对应关键字的合并请求。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询指定源仓库的数据。
    /// </summary>

    int32_t getSourceRepositoryId() const;
    bool sourceRepositoryIdIsSet() const;
    void unsetsourceRepositoryId();
    void setSourceRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 是否仅返回合并请求计数。 **取值范围：** - true，仅返回合并请求计数。 - false，返回合并请求详细信息。
    /// </summary>

    bool isOnlyCount() const;
    bool onlyCountIsSet() const;
    void unsetonlyCount();
    void setOnlyCount(bool value);

    /// <summary>
    /// **参数解释：** 查询包含指定labels的合并请求。
    /// </summary>

    std::string getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string authorId_;
    bool authorIdIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string search_;
    bool searchIsSet_;
    int32_t sourceRepositoryId_;
    bool sourceRepositoryIdIsSet_;
    bool onlyCount_;
    bool onlyCountIsSet_;
    std::string labels_;
    bool labelsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRepositoryMergeRequestsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRepositoryMergeRequestsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryMergeRequestsRequest_H_
