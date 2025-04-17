
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_DDosStatus_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_DDosStatus_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ddos状态响应体
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  DDosStatus
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
    /// EIP所属类型，可选范围： - Anti-DDoS：eip属于Anti-DDoS流量清洗 - CNAD：eip属于DDoS原生高级防护
    /// </summary>

    std::string getProductType() const;
    bool productTypeIsSet() const;
    void unsetproductType();
    void setProductType(const std::string& value);

    /// <summary>
    /// 防护状态，可选范围： - normal：表示正常 - configging：表示设置中 - notConfig：表示未设置 - packetcleaning：表示清洗 - packetdropping：表示黑洞
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 清洗阈值
    /// </summary>

    int64_t getCleanThreshold() const;
    bool cleanThresholdIsSet() const;
    void unsetcleanThreshold();
    void setCleanThreshold(int64_t value);

    /// <summary>
    /// 黑洞阈值
    /// </summary>

    std::string getBlockThreshold() const;
    bool blockThresholdIsSet() const;
    void unsetblockThreshold();
    void setBlockThreshold(const std::string& value);


protected:
    std::string floatingIpId_;
    bool floatingIpIdIsSet_;
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    std::string productType_;
    bool productTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t cleanThreshold_;
    bool cleanThresholdIsSet_;
    std::string blockThreshold_;
    bool blockThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_DDosStatus_H_
