
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowAsyncDeviceCommandResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowAsyncDeviceCommandResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowAsyncDeviceCommandResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAsyncDeviceCommandResponse();
    virtual ~ShowAsyncDeviceCommandResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAsyncDeviceCommandResponse members

    /// <summary>
    /// 设备ID，用于唯一标识一个设备，在注册设备时由物联网平台分配获得。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备命令ID，用于唯一标识一条命令，在下发设备命令时由物联网平台分配获得。
    /// </summary>

    std::string getCommandId() const;
    bool commandIdIsSet() const;
    void unsetcommandId();
    void setCommandId(const std::string& value);

    /// <summary>
    /// 设备命令所属的设备服务ID，在设备关联的产品模型中定义。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 设备命令名称，在设备关联的产品模型中定义。
    /// </summary>

    std::string getCommandName() const;
    bool commandNameIsSet() const;
    void unsetcommandName();
    void setCommandName(const std::string& value);

    /// <summary>
    /// 设备执行的命令，Json格式，里面是一个个健值对，如果service_id不为空，每个健都是profile中命令的参数名（paraName）;如果service_id为空则由用户自定义命令格式。设备命令示例：{\&quot;value\&quot;:\&quot;1\&quot;}，具体格式需要应用和设备约定。 
    /// </summary>

    Object getParas() const;
    bool parasIsSet() const;
    void unsetparas();
    void setParas(const Object& value);

    /// <summary>
    /// 物联网平台缓存命令的时长， 单位秒。
    /// </summary>

    int32_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int32_t value);

    /// <summary>
    /// 下发命令的状态。 ·PENDING表示未下发,在物联网平台缓存着 ·EXPIRED表示命令已经过期，即缓存的时间超过设定的expire_time ·SENT表示命令正在下发 ·DELIVERED表示命令已送达设备 ·SUCCESSFUL表示命令已经成功执行 ·FAILED表示命令执行失败 ·TIMEOUT表示命令下发之后，没有收到设备确认或者响应结果一定时间后超时 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 设备命令执行的详细结果，由设备返回，Json格式。 
    /// </summary>

    Object getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const Object& value);

    /// <summary>
    /// 命令的创建时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 物联网平台发送命令的时间，如果命令是立即下发， 则该时间与命令创建时间一致， 如果是缓存命令， 则是命令实际下发的时间。\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getSentTime() const;
    bool sentTimeIsSet() const;
    void unsetsentTime();
    void setSentTime(const std::string& value);

    /// <summary>
    /// 物联网平台将命令送达到设备的时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getDeliveredTime() const;
    bool deliveredTimeIsSet() const;
    void unsetdeliveredTime();
    void setDeliveredTime(const std::string& value);

    /// <summary>
    /// 下发策略， immediately表示立即下发，delay表示缓存起来，等数据上报或者设备上线之后下发。
    /// </summary>

    std::string getSendStrategy() const;
    bool sendStrategyIsSet() const;
    void unsetsendStrategy();
    void setSendStrategy(const std::string& value);

    /// <summary>
    /// 设备响应命令的时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getResponseTime() const;
    bool responseTimeIsSet() const;
    void unsetresponseTime();
    void setResponseTime(const std::string& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string commandId_;
    bool commandIdIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string commandName_;
    bool commandNameIsSet_;
    Object paras_;
    bool parasIsSet_;
    int32_t expireTime_;
    bool expireTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    Object result_;
    bool resultIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string sentTime_;
    bool sentTimeIsSet_;
    std::string deliveredTime_;
    bool deliveredTimeIsSet_;
    std::string sendStrategy_;
    bool sendStrategyIsSet_;
    std::string responseTime_;
    bool responseTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowAsyncDeviceCommandResponse_H_
