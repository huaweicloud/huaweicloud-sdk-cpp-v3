
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RemoveGroupWebhookRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RemoveGroupWebhookRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RemoveGroupWebhookRequest
    : public ModelBase
{
public:
    RemoveGroupWebhookRequest();
    virtual ~RemoveGroupWebhookRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveGroupWebhookRequest members

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// **参数解释：**  Webhook id。
    /// </summary>

    int32_t getHookId() const;
    bool hookIdIsSet() const;
    void unsethookId();
    void setHookId(int32_t value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    int32_t hookId_;
    bool hookIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemoveGroupWebhookRequest& dereference_from_shared_ptr(std::shared_ptr<RemoveGroupWebhookRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RemoveGroupWebhookRequest_H_
