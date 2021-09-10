
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ServerInterfaceFixedIp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  InterfaceAttachment
    : public ModelBase
{
public:
    InterfaceAttachment();
    virtual ~InterfaceAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InterfaceAttachment members

    /// <summary>
    /// 网卡私网IP信息列表。
    /// </summary>

    std::vector<ServerInterfaceFixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<ServerInterfaceFixedIp>& value);

    /// <summary>
    /// 网卡Mac地址信息。
    /// </summary>

    std::string getMacAddr() const;
    bool macAddrIsSet() const;
    void unsetmacAddr();
    void setMacAddr(const std::string& value);

    /// <summary>
    /// 网卡端口所属网络ID。
    /// </summary>

    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);

    /// <summary>
    /// 网卡端口ID。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 网卡端口状态。
    /// </summary>

    std::string getPortState() const;
    bool portStateIsSet() const;
    void unsetportState();
    void setPortState(const std::string& value);

    /// <summary>
    /// 卸载网卡时，是否删除网卡。
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);

    /// <summary>
    /// 从guest os中，网卡的驱动类型。可选值为virtio和hinic，默认为virtio
    /// </summary>

    std::string getDriverMode() const;
    bool driverModeIsSet() const;
    void unsetdriverMode();
    void setDriverMode(const std::string& value);

    /// <summary>
    /// 网卡带宽下限。
    /// </summary>

    int32_t getMinRate() const;
    bool minRateIsSet() const;
    void unsetminRate();
    void setMinRate(int32_t value);

    /// <summary>
    /// 网卡多队列个数。
    /// </summary>

    int32_t getMultiqueueNum() const;
    bool multiqueueNumIsSet() const;
    void unsetmultiqueueNum();
    void setMultiqueueNum(int32_t value);

    /// <summary>
    /// 弹性网卡在Linux GuestOS里的BDF号
    /// </summary>

    std::string getPciAddress() const;
    bool pciAddressIsSet() const;
    void unsetpciAddress();
    void setPciAddress(const std::string& value);


protected:
    std::vector<ServerInterfaceFixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string macAddr_;
    bool macAddrIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portState_;
    bool portStateIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string driverMode_;
    bool driverModeIsSet_;
    int32_t minRate_;
    bool minRateIsSet_;
    int32_t multiqueueNum_;
    bool multiqueueNumIsSet_;
    std::string pciAddress_;
    bool pciAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_
