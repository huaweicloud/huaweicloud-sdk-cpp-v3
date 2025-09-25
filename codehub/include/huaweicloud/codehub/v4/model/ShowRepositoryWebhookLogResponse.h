
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryWebhookLogResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryWebhookLogResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codehub/v4/model/WebhookLogDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowRepositoryWebhookLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryWebhookLogResponse();
    virtual ~ShowRepositoryWebhookLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryWebhookLogResponse members

    /// <summary>
    /// **参数解释：** Webhook 日志id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** Webhook id。
    /// </summary>

    int32_t getWebHookId() const;
    bool webHookIdIsSet() const;
    void unsetwebHookId();
    void setWebHookId(int32_t value);

    /// <summary>
    /// **参数解释：** 触发类型。
    /// </summary>

    std::string getTrigger() const;
    bool triggerIsSet() const;
    void unsettrigger();
    void setTrigger(const std::string& value);

    /// <summary>
    /// **参数解释：** 请求地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 响应状态，默认是响应码，如果webhook地址未返回或者其他异常情况，则记录为internal error
    /// </summary>

    std::string getResponseStatus() const;
    bool responseStatusIsSet() const;
    void unsetresponseStatus();
    void setResponseStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 响应耗时，单位是秒
    /// </summary>

    double getExecutionDuration() const;
    bool executionDurationIsSet() const;
    void unsetexecutionDuration();
    void setExecutionDuration(double value);

    /// <summary>
    /// **参数解释：** Webhook每次发送消息的时候，会在请求体中带上uuid字段，此处为该记录的uuid字段
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 请求头，此处会将敏感信息如传递的token隐藏
    /// </summary>

    Object getRequestHeaders() const;
    bool requestHeadersIsSet() const;
    void unsetrequestHeaders();
    void setRequestHeaders(const Object& value);

    /// <summary>
    /// **参数解释：** 请求体，此处会将用户邮箱隐藏
    /// </summary>

    Object getRequestData() const;
    bool requestDataIsSet() const;
    void unsetrequestData();
    void setRequestData(const Object& value);

    /// <summary>
    /// **参数解释：** 响应头
    /// </summary>

    Object getResponseHeaders() const;
    bool responseHeadersIsSet() const;
    void unsetresponseHeaders();
    void setResponseHeaders(const Object& value);

    /// <summary>
    /// **参数解释：** 响应体
    /// </summary>

    Object getResponseBody() const;
    bool responseBodyIsSet() const;
    void unsetresponseBody();
    void setResponseBody(const Object& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t webHookId_;
    bool webHookIdIsSet_;
    std::string trigger_;
    bool triggerIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string responseStatus_;
    bool responseStatusIsSet_;
    double executionDuration_;
    bool executionDurationIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    Object requestHeaders_;
    bool requestHeadersIsSet_;
    Object requestData_;
    bool requestDataIsSet_;
    Object responseHeaders_;
    bool responseHeadersIsSet_;
    Object responseBody_;
    bool responseBodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryWebhookLogResponse_H_
