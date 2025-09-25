
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryReviewAuthorsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryReviewAuthorsRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListRepositoryReviewAuthorsRequest
    : public ModelBase
{
public:
    ListRepositoryReviewAuthorsRequest();
    virtual ~ListRepositoryReviewAuthorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryReviewAuthorsRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
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
    /// **参数解释：** 解决状态。 **取值范围：** - resolved，已解决。 - unresolved，未解决。   - all，全部。
    /// </summary>

    std::string getResolvedStatus() const;
    bool resolvedStatusIsSet() const;
    void unsetresolvedStatus();
    void setResolvedStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 根据检视人名字或用户名筛选意见。
    /// </summary>

    std::string getReviewersFilter() const;
    bool reviewersFilterIsSet() const;
    void unsetreviewersFilter();
    void setReviewersFilter(const std::string& value);

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
    std::string resolvedStatus_;
    bool resolvedStatusIsSet_;
    std::string reviewersFilter_;
    bool reviewersFilterIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRepositoryReviewAuthorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRepositoryReviewAuthorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryReviewAuthorsRequest_H_
