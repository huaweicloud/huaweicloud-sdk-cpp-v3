
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryEventsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryEventsRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListRepositoryEventsRequest
    : public ModelBase
{
public:
    ListRepositoryEventsRequest();
    virtual ~ListRepositoryEventsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryEventsRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 操作者id。
    /// </summary>

    int32_t getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(int32_t value);

    /// <summary>
    /// **参数解释：** 动态类型。 **约束限制：** - all，表示全部。 - push，表示推送。
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);

    /// <summary>
    /// **参数解释：** 开始日期。
    /// </summary>

    utility::datetime getBefore() const;
    bool beforeIsSet() const;
    void unsetbefore();
    void setBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 结束日期。
    /// </summary>

    utility::datetime getAfter() const;
    bool afterIsSet() const;
    void unsetafter();
    void setAfter(const utility::datetime& value);

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
    int32_t authorId_;
    bool authorIdIsSet_;
    std::string filter_;
    bool filterIsSet_;
    utility::datetime before_;
    bool beforeIsSet_;
    utility::datetime after_;
    bool afterIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRepositoryEventsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRepositoryEventsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryEventsRequest_H_
