
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchBandwidthResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchBandwidthResp_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/PublicipInfoResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 带宽对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchBandwidthResp
    : public ModelBase
{
public:
    BatchBandwidthResp();
    virtual ~BatchBandwidthResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchBandwidthResp members

    /// <summary>
    /// 功能说明：带宽类型，共享带宽默认为share。  取值范围：share，bgp，telcom，sbgp等。  share：共享带宽  bgp：动态bgp  telcom ：联通  sbgp：静态bgp
    /// </summary>

    std::string getBandwidthType() const;
    bool bandwidthTypeIsSet() const;
    void unsetbandwidthType();
    void setBandwidthType(const std::string& value);

    /// <summary>
    /// 功能说明：账单信息  如果billing_info不为空，说明是包周期的带宽
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);

    /// <summary>
    /// 功能说明：按流量计费,按带宽计费还是按增强型95计费。  取值范围：bandwidth，traffic，95peak_plus(按增强型95计费)不返回或者为空时表示是bandwidth。  约束：只有共享带宽支持95peak_plus（按增强型95计费），按增强型95计费时需要指定保底百分比，默认是20%。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 功能说明：带宽唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：带宽名称  取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：带宽对应的弹性公网IP信息  约束：WHOLE类型的带宽支持多个弹性公网IP，PER类型的带宽只能对应一个弹性公网IP
    /// </summary>

    std::vector<PublicipInfoResp>& getPublicipInfo();
    bool publicipInfoIsSet() const;
    void unsetpublicipInfo();
    void setPublicipInfo(const std::vector<PublicipInfoResp>& value);

    /// <summary>
    /// 功能说明：带宽类型，标识是否是共享带宽  取值范围：WHOLE，PER  WHOLE表示共享带宽；PER，表示独享带宽
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);

    /// <summary>
    /// 功能说明：带宽大小  取值范围：默认5Mbit/s~2000Mbit/s（具体范围以各区域配置为准，请参见控制台对应页面显示）。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 功能说明：用户所属租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 功能说明：带宽的状态  取值范围：  FREEZED：冻结  NORMAL：正常
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 功能说明：表示中心站点资源或者边缘站点资源，对接了边缘站点的区域会返回此字段 取值范围： center、边缘站点名称 上线区域：华北-乌兰察布一，华南-广州 约束：共享带宽只能插入与该字段相同的publicip
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);


protected:
    std::string bandwidthType_;
    bool bandwidthTypeIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<PublicipInfoResp> publicipInfo_;
    bool publicipInfoIsSet_;
    std::string shareType_;
    bool shareTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchBandwidthResp_H_
