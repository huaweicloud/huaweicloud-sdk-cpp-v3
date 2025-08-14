
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAsyncCommandResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAsyncCommandResponse_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateAsyncCommandResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAsyncCommandResponse();
    virtual ~CreateAsyncCommandResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAsyncCommandResponse members

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
    /// 设备命令状态,如果命令被缓存，返回PENDING, 如果命令下发给设备，返回SENT。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 命令的创建时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 下发策略， immediately表示立即下发，delay表示缓存起来，等数据上报或者设备上线之后下发。
    /// </summary>

    std::string getSendStrategy() const;
    bool sendStrategyIsSet() const;
    void unsetsendStrategy();
    void setSendStrategy(const std::string& value);


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
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string sendStrategy_;
    bool sendStrategyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAsyncCommandResponse_H_
