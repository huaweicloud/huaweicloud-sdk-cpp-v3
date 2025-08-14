
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SimplifyDevice_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SimplifyDevice_H_


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
/// 设备信息结构体，批量查询返回。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  SimplifyDevice
    : public ModelBase
{
public:
    SimplifyDevice();
    virtual ~SimplifyDevice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimplifyDevice members

    /// <summary>
    /// 设备ID，用于唯一标识一个设备。在注册设备时直接指定，或者由物联网平台分配获得。由物联网平台分配时，生成规则为\&quot;product_id\&quot; + \&quot;_\&quot; + \&quot;node_id\&quot;拼接而成。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备标识码，通常使用IMEI、MAC地址或Serial No作为nodeId。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 设备名称。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// 设备关联的产品ID，用于唯一标识一个产品模型。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string productId_;
    bool productIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SimplifyDevice_H_
