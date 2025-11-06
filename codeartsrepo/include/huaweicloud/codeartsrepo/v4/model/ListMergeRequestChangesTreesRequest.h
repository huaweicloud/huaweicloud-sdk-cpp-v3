
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestChangesTreesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestChangesTreesRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestChangesTreesRequest
    : public ModelBase
{
public:
    ListMergeRequestChangesTreesRequest();
    virtual ~ListMergeRequestChangesTreesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestChangesTreesRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：**  合并请求 iid。
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// **参数解释：** 审核人ID。
    /// </summary>

    int32_t getApprovalUserId() const;
    bool approvalUserIdIsSet() const;
    void unsetapprovalUserId();
    void setApprovalUserId(int32_t value);

    /// <summary>
    /// **参数解释：** commit ID。 **取值范围：** 字符串长度不少于1，不超过40。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件变更对比源版本id
    /// </summary>

    int32_t getFromDiffId() const;
    bool fromDiffIdIsSet() const;
    void unsetfromDiffId();
    void setFromDiffId(int32_t value);

    /// <summary>
    /// **参数解释：** 文件变更对比目标版本id
    /// </summary>

    int32_t getToDiffId() const;
    bool toDiffIdIsSet() const;
    void unsettoDiffId();
    void setToDiffId(int32_t value);

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
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    int32_t approvalUserId_;
    bool approvalUserIdIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    int32_t fromDiffId_;
    bool fromDiffIdIsSet_;
    int32_t toDiffId_;
    bool toDiffIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMergeRequestChangesTreesRequest& dereference_from_shared_ptr(std::shared_ptr<ListMergeRequestChangesTreesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestChangesTreesRequest_H_
