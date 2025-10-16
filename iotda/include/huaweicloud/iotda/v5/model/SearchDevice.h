
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchDevice_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchDevice_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/ModuleSearchDTO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备搜索结果结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  SearchDevice
    : public ModelBase
{
public:
    SearchDevice();
    virtual ~SearchDevice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDevice members

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
    /// 设备组列表。
    /// </summary>

    Object getGroups() const;
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const Object& value);

    /// <summary>
    /// 设备的状态。 - ONLINE：设备在线。 - OFFLINE：设备离线。 - ABNORMAL：设备异常。 - INACTIVE：设备未激活。 - FROZEN：设备冻结。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 设备的标签列表。
    /// </summary>

    Object getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const Object& value);

    /// <summary>
    /// 设备的OTA模块列表。
    /// </summary>

    std::vector<ModuleSearchDTO>& getModules();
    bool modulesIsSet() const;
    void unsetmodules();
    void setModules(const std::vector<ModuleSearchDTO>& value);

    /// <summary>
    /// 搜索结果记录Id。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


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
    std::string fwVersion_;
    bool fwVersionIsSet_;
    std::string swVersion_;
    bool swVersionIsSet_;
    std::string deviceSdkVersion_;
    bool deviceSdkVersionIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string productName_;
    bool productNameIsSet_;
    Object groups_;
    bool groupsIsSet_;
    std::string status_;
    bool statusIsSet_;
    Object tags_;
    bool tagsIsSet_;
    std::vector<ModuleSearchDTO> modules_;
    bool modulesIsSet_;
    std::string marker_;
    bool markerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchDevice_H_
