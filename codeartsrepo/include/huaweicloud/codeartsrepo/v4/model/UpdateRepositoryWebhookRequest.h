
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateRepositoryWebhookRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateRepositoryWebhookRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/WebhookParamsDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateRepositoryWebhookRequest
    : public ModelBase
{
public:
    UpdateRepositoryWebhookRequest();
    virtual ~UpdateRepositoryWebhookRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepositoryWebhookRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：**  Webhook id。
    /// </summary>

    int32_t getHookId() const;
    bool hookIdIsSet() const;
    void unsethookId();
    void setHookId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    WebhookParamsDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WebhookParamsDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t hookId_;
    bool hookIdIsSet_;
    WebhookParamsDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRepositoryWebhookRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRepositoryWebhookRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateRepositoryWebhookRequest_H_
