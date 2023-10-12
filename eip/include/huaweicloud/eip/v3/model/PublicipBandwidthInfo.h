
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipBandwidthInfo_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipBandwidthInfo_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 公网IP绑定的带宽信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  PublicipBandwidthInfo
    : public ModelBase
{
public:
    PublicipBandwidthInfo();
    virtual ~PublicipBandwidthInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicipBandwidthInfo members

    /// <summary>
    /// 带宽ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能描述：带宽大小 取值范围：默认5Mbit/s~2000Mbit/s
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 功能说明：带宽类型,标识是否是共享带宽 取值范围：PER，WHOLE。   PER：独享带宽   WHOLE：共享带宽 约束：其中IPv6暂不支持WHOLE类型带宽。
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);

    /// <summary>
    /// 功能说明：按流量计费还是按带宽计费 取值范围： bandwidth：按带宽计费 traffic：按流量计费 95peak_plus：按增强型95计费
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 功能说明：带宽名称 取值范围：1-64个字符,支持数字、字母、中文、_(下划线)、-(中划线)、.(点)
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：账单信息。如果billinginfo不为空，说明是包周期的带宽
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string shareType_;
    bool shareTypeIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipBandwidthInfo_H_
