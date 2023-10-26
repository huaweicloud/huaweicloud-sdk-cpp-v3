
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DDosStatus_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DDosStatus_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ddos状态响应体
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  DDosStatus
    : public ModelBase
{
public:
    DDosStatus();
    virtual ~DDosStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DDosStatus members

    /// <summary>
    /// EIP的ID
    /// </summary>

    std::string getFloatingIpId() const;
    bool floatingIpIdIsSet() const;
    void unsetfloatingIpId();
    void setFloatingIpId(const std::string& value);

    /// <summary>
    /// 浮动IP地址
    /// </summary>

    std::string getFloatingIpAddress() const;
    bool floatingIpAddressIsSet() const;
    void unsetfloatingIpAddress();
    void setFloatingIpAddress(const std::string& value);

    /// <summary>
    /// EIP所属类型，可选范围： - EIP：未绑定到ECS的EIP或绑定到ECS的EIP - ELB：绑定到ELB的EIP
    /// </summary>

    std::string getNetworkType() const;
    bool networkTypeIsSet() const;
    void unsetnetworkType();
    void setNetworkType(const std::string& value);

    /// <summary>
    /// 防护状态，可选范围： - normal：表示正常 - configging：表示设置中 - notConfig：表示未设置 - packetcleaning：表示清洗 - packetdropping：表示黑洞
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 黑洞结束时间
    /// </summary>

    int64_t getBlackholeEndtime() const;
    bool blackholeEndtimeIsSet() const;
    void unsetblackholeEndtime();
    void setBlackholeEndtime(int64_t value);

    /// <summary>
    /// 防护类型
    /// </summary>

    std::string getProtectType() const;
    bool protectTypeIsSet() const;
    void unsetprotectType();
    void setProtectType(const std::string& value);

    /// <summary>
    /// 流量阈值
    /// </summary>

    int64_t getTrafficThreshold() const;
    bool trafficThresholdIsSet() const;
    void unsettrafficThreshold();
    void setTrafficThreshold(int64_t value);

    /// <summary>
    /// http流量阈值
    /// </summary>

    int64_t getHttpThreshold() const;
    bool httpThresholdIsSet() const;
    void unsethttpThreshold();
    void setHttpThreshold(int64_t value);


protected:
    std::string floatingIpId_;
    bool floatingIpIdIsSet_;
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    std::string networkType_;
    bool networkTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t blackholeEndtime_;
    bool blackholeEndtimeIsSet_;
    std::string protectType_;
    bool protectTypeIsSet_;
    int64_t trafficThreshold_;
    bool trafficThresholdIsSet_;
    int64_t httpThreshold_;
    bool httpThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DDosStatus_H_
