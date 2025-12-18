
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowWebHookConfigResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowWebHookConfigResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/RestResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowWebHookConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWebHookConfigResponse();
    virtual ~ShowWebHookConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWebHookConfigResponse members

    /// <summary>
    /// 结果码。
    /// </summary>

    int32_t getReturnCode() const;
    bool returnCodeIsSet() const;
    void unsetreturnCode();
    void setReturnCode(int32_t value);

    /// <summary>
    /// 结果描述。
    /// </summary>

    std::string getReturnDesc() const;
    bool returnDescIsSet() const;
    void unsetreturnDesc();
    void setReturnDesc(const std::string& value);

    /// <summary>
    /// 订阅配置记录ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 订阅ID。
    /// </summary>

    std::string getSubscriberId() const;
    bool subscriberIdIsSet() const;
    void unsetsubscriberId();
    void setSubscriberId(const std::string& value);

    /// <summary>
    /// 订阅url。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 事件推送状态。 * 0：已启用 * 1：未启动 * 2：已锁定 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t returnCode_;
    bool returnCodeIsSet_;
    std::string returnDesc_;
    bool returnDescIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string subscriberId_;
    bool subscriberIdIsSet_;
    std::string url_;
    bool urlIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowWebHookConfigResponse_H_
