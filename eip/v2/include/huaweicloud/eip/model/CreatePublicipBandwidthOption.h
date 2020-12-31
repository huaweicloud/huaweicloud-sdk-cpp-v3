
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipBandwidthOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipBandwidthOption_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 创建弹性公网IP时，携带的待绑定带宽信息
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  CreatePublicipBandwidthOption
    : public ModelBase
{
public:
    CreatePublicipBandwidthOption();
    virtual ~CreatePublicipBandwidthOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePublicipBandwidthOption members

    /// <summary>
    /// 功能说明：按流量计费还是按带宽计费。  其中IPv6国外默认是bandwidth，国内默认是traffic。取值为traffic，表示流量计费。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 功能说明：带宽ID  创建WHOLE类型带宽的弹性公网IP时可以指定之前的共享带宽创建  取值范围：WHOLE类型的带宽ID 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：带宽名称  取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）  如果share_type是PER，该参数必须带,如果share_type是WHOLE并且id有值，该参数会忽略。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：带宽类型 取值范围：PER，WHOLE。 约束：该字段为WHOLE时，必须指定带宽ID。
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);

    /// <summary>
    /// 功能说明：带宽大小  取值范围：默认1Mbit/s~2000Mbit/s（具体范围以各区域配置为准，请参见控制台对应页面显示）。  约束：share_type是PER，该参数必须带，如果share_type是WHOLE并且id有值，该参数会忽略。  注意：调整带宽时的最小单位会根据带宽范围不同存在差异。  小于等于300Mbit/s：默认最小单位为1Mbit/s。  300Mbit/s~1000Mbit/s：默认最小单位为50Mbit/s。  大于1000Mbit/s：默认最小单位为500Mbit/s。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string shareType_;
    bool shareTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipBandwidthOption_H_
