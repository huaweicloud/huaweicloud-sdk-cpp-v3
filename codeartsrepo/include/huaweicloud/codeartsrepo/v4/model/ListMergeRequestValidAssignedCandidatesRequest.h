
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestValidAssignedCandidatesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestValidAssignedCandidatesRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestValidAssignedCandidatesRequest
    : public ModelBase
{
public:
    ListMergeRequestValidAssignedCandidatesRequest();
    virtual ~ListMergeRequestValidAssignedCandidatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestValidAssignedCandidatesRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/intl/zh-cn/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk_ch)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 目标分支。创建MR时，代码将要合入的分支。
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释：**  合并请求 iid。
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

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
    /// **参数解释：** 查询关键字，可模糊匹配用户名称、用户昵称、租户名称。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 批量匹配用户，一次可传多个用户的用户名和昵称，用\&quot;, \&quot;分隔，最多50个。示例：\&quot;zhangsan, lisi, wangwu\&quot;
    /// </summary>

    std::string getSearchByNameList() const;
    bool searchByNameListIsSet() const;
    void unsetsearchByNameList();
    void setSearchByNameList(const std::string& value);

    /// <summary>
    /// **参数解释：** 目标仓库id。创建MR时，代码将要合入的仓库。
    /// </summary>

    std::string getTargetRepositoryId() const;
    bool targetRepositoryIdIsSet() const;
    void unsettargetRepositoryId();
    void setTargetRepositoryId(const std::string& value);

    /// <summary>
    /// **参数解释：** approver: 获取审核人 assingee: 获取合并人
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);

    /// <summary>
    /// **参数解释：** true: 仅返回开发者。
    /// </summary>

    bool isOnlyDevelopers() const;
    bool onlyDevelopersIsSet() const;
    void unsetonlyDevelopers();
    void setOnlyDevelopers(bool value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string searchByNameList_;
    bool searchByNameListIsSet_;
    std::string targetRepositoryId_;
    bool targetRepositoryIdIsSet_;
    std::string view_;
    bool viewIsSet_;
    bool onlyDevelopers_;
    bool onlyDevelopersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMergeRequestValidAssignedCandidatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListMergeRequestValidAssignedCandidatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestValidAssignedCandidatesRequest_H_
