
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MessageResult_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MessageResult_H_


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
/// 下发的消息响应结果
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  MessageResult
    : public ModelBase
{
public:
    MessageResult();
    virtual ~MessageResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MessageResult members

    /// <summary>
    /// 消息状态, PENDING，DELIVERED，FAILED和TIMEOUT。如果设备不在线，则平台缓存消息，并且返回PENDING，等设备数据上报之后再下发；如果设备在线，则消息直接进行下发，下发成功后接口返回DELIVERED，失败返回FAILED；如果消息在平台默认时间内（1天）还没有下发给设备，则平台会将消息设置为超时，状态为TIMEOUT。另外应用可以订阅消息的执行结果，平台会将消息结果推送给订阅的应用。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 消息的创建时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 消息结束时间, \&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串，包含消息转换到DELIVERED，FAILED和TIMEOUT状态的时间。
    /// </summary>

    std::string getFinishedTime() const;
    bool finishedTimeIsSet() const;
    void unsetfinishedTime();
    void setFinishedTime(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string finishedTime_;
    bool finishedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MessageResult_H_
