
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/iotda/v5/model/AuthInfoRes.h>
#include <huaweicloud/iotda/v5/model/ModuleDTO.h>
#include <huaweicloud/iotda/v5/model/TagV5DTO.h>
#include <vector>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDeviceResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDeviceResponse();
    virtual ~UpdateDeviceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDeviceResponse members

    /// <summary>
    /// 资源空间ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 资源空间名称。
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 设备ID，用于唯一标识一个设备。在注册设备时直接指定，或者由物联网平台分配获得。由物联网平台分配时，生成规则为\&quot;product_id\&quot; + \&quot;_\&quot; + \&quot;node_id\&quot;拼接而成。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备标识码，通常使用IMEI、MAC地址或Serial No作为node_id。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 网关ID，用于标识设备所属的父设备，即父设备的设备ID。当设备是直连设备时，gateway_id与设备的device_id一致。当设备是非直连设备时，gateway_id为设备所关联的父设备的device_id。
    /// </summary>

    std::string getGatewayId() const;
    bool gatewayIdIsSet() const;
    void unsetgatewayId();
    void setGatewayId(const std::string& value);

    /// <summary>
    /// 设备名称。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// 设备节点类型。 - ENDPOINT：非直连设备。 - GATEWAY：直连设备或网关。 - UNKNOWN：未知。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 设备的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 设备的固件版本。
    /// </summary>

    std::string getFwVersion() const;
    bool fwVersionIsSet() const;
    void unsetfwVersion();
    void setFwVersion(const std::string& value);

    /// <summary>
    /// 设备的软件版本。
    /// </summary>

    std::string getSwVersion() const;
    bool swVersionIsSet() const;
    void unsetswVersion();
    void setSwVersion(const std::string& value);

    /// <summary>
    /// 设备的sdk信息。
    /// </summary>

    std::string getDeviceSdkVersion() const;
    bool deviceSdkVersionIsSet() const;
    void unsetdeviceSdkVersion();
    void setDeviceSdkVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuthInfoRes getAuthInfo() const;
    bool authInfoIsSet() const;
    void unsetauthInfo();
    void setAuthInfo(const AuthInfoRes& value);

    /// <summary>
    /// 设备关联的产品ID，用于唯一标识一个产品模型。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 设备关联的产品名称。
    /// </summary>

    std::string getProductName() const;
    bool productNameIsSet() const;
    void unsetproductName();
    void setProductName(const std::string& value);

    /// <summary>
    /// 设备的状态。 - ONLINE：设备在线。 - OFFLINE：设备离线。 - ABNORMAL：设备异常。 - INACTIVE：设备未激活。 - FROZEN：设备冻结。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 在物联网平台注册设备的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 设备最近一次连接状态(ONLINE:在线，OFFLINE：离线，ABNORMAL：异常)变化时间。格式：yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39; ，如2015-12-12T12:12:122Z。
    /// </summary>

    std::string getConnectionStatusUpdateTime() const;
    bool connectionStatusUpdateTimeIsSet() const;
    void unsetconnectionStatusUpdateTime();
    void setConnectionStatusUpdateTime(const std::string& value);

    /// <summary>
    /// 设备激活时间。格式：yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39; ，如2015-12-12T12:12:122Z。
    /// </summary>

    std::string getActiveTime() const;
    bool activeTimeIsSet() const;
    void unsetactiveTime();
    void setActiveTime(const std::string& value);

    /// <summary>
    /// 设备的标签列表。
    /// </summary>

    std::vector<TagV5DTO>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagV5DTO>& value);

    /// <summary>
    /// 设备的OTA模块列表。
    /// </summary>

    std::vector<ModuleDTO>& getModules();
    bool modulesIsSet() const;
    void unsetmodules();
    void setModules(const std::vector<ModuleDTO>& value);

    /// <summary>
    /// 设备扩展信息。用户可以自定义任何想要的扩展信息，如果在创建设备时为子设备指定该字段，将会通过MQTT接口“平台通知网关子设备新增“将该信息通知给网关。
    /// </summary>

    Object getExtensionInfo() const;
    bool extensionInfoIsSet() const;
    void unsetextensionInfo();
    void setExtensionInfo(const Object& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string gatewayId_;
    bool gatewayIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string fwVersion_;
    bool fwVersionIsSet_;
    std::string swVersion_;
    bool swVersionIsSet_;
    std::string deviceSdkVersion_;
    bool deviceSdkVersionIsSet_;
    AuthInfoRes authInfo_;
    bool authInfoIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string productName_;
    bool productNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string connectionStatusUpdateTime_;
    bool connectionStatusUpdateTimeIsSet_;
    std::string activeTime_;
    bool activeTimeIsSet_;
    std::vector<TagV5DTO> tags_;
    bool tagsIsSet_;
    std::vector<ModuleDTO> modules_;
    bool modulesIsSet_;
    Object extensionInfo_;
    bool extensionInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDeviceResponse_H_
