
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthResp_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 弹性公网IP中的bandwidth对象，存储公网IP绑定的带宽信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BandwidthResp
    : public ModelBase
{
public:
    BandwidthResp();
    virtual ~BandwidthResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BandwidthResp members

    /// <summary>
    /// - 功能说明：带宽ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// - 功能说明：类型  \&quot;WHOLE\&quot;为共享带宽，\&quot;PER\&quot;为独占带宽
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽的订单信息
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthResp_H_
