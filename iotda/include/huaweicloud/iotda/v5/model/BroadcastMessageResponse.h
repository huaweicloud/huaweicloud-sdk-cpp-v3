
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BroadcastMessageResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BroadcastMessageResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  BroadcastMessageResponse
    : public ModelBase, public HttpResponse
{
public:
    BroadcastMessageResponse();
    virtual ~BroadcastMessageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BroadcastMessageResponse members

    /// <summary>
    /// **参数说明**：资源空间ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：接收广播消息的完整Topic名称
    /// </summary>

    std::string getTopicFullName() const;
    bool topicFullNameIsSet() const;
    void unsettopicFullName();
    void setTopicFullName(const std::string& value);

    /// <summary>
    /// 消息id，由物联网平台生成，用于标识该消息。
    /// </summary>

    std::string getMessageId() const;
    bool messageIdIsSet() const;
    void unsetmessageId();
    void setMessageId(const std::string& value);

    /// <summary>
    /// 消息的创建时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string topicFullName_;
    bool topicFullNameIsSet_;
    std::string messageId_;
    bool messageIdIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BroadcastMessageResponse_H_
