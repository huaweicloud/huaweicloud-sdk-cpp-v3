
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProjectWebhookLogsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProjectWebhookLogsRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListProjectWebhookLogsRequest
    : public ModelBase
{
public:
    ListProjectWebhookLogsRequest();
    virtual ~ListProjectWebhookLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectWebhookLogsRequest members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：**  Webhook id。
    /// </summary>

    int32_t getHookId() const;
    bool hookIdIsSet() const;
    void unsethookId();
    void setHookId(int32_t value);

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
    /// **参数解释：** 仓库ID
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** Webhook每次发送消息时会在请求体中带上uuid字段。uuid具有唯一性，合并请求相关的Webhook事件中的uuid会包含合并请求iid。此处可以使用完整的uuid或者合并请求iid。 **约束限制：** 可选。 **取值范围：** 字符串长度不少于1，不超过100。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** 检索执行时间段的起始时间
    /// </summary>

    utility::datetime getCreatedAfter() const;
    bool createdAfterIsSet() const;
    void unsetcreatedAfter();
    void setCreatedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 检索执行时间段的结束时间
    /// </summary>

    utility::datetime getCreatedBefore() const;
    bool createdBeforeIsSet() const;
    void unsetcreatedBefore();
    void setCreatedBefore(const utility::datetime& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t hookId_;
    bool hookIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    utility::datetime createdAfter_;
    bool createdAfterIsSet_;
    utility::datetime createdBefore_;
    bool createdBeforeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectWebhookLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectWebhookLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProjectWebhookLogsRequest_H_
