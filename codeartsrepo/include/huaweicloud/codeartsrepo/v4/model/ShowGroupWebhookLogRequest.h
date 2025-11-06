
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupWebhookLogRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupWebhookLogRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowGroupWebhookLogRequest
    : public ModelBase
{
public:
    ShowGroupWebhookLogRequest();
    virtual ~ShowGroupWebhookLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupWebhookLogRequest members

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

    /// <summary>
    /// **参数解释：**  Webhook 日志id。
    /// </summary>

    int32_t getLogId() const;
    bool logIdIsSet() const;
    void unsetlogId();
    void setLogId(int32_t value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    int32_t hookId_;
    bool hookIdIsSet_;
    int32_t logId_;
    bool logIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowGroupWebhookLogRequest& dereference_from_shared_ptr(std::shared_ptr<ShowGroupWebhookLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupWebhookLogRequest_H_
