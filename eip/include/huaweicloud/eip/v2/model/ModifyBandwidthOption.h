
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ModifyBandwidthOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ModifyBandwidthOption_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新带宽对象(除了id，其他三个参数不能全为空)
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ModifyBandwidthOption
    : public ModelBase
{
public:
    ModifyBandwidthOption();
    virtual ~ModifyBandwidthOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyBandwidthOption members

    /// <summary>
    /// - 功能说明：带宽唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线），为空表示不修改名称  功能说明：带宽名称  约束：name、size必须有一个参数有值
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 取值范围：默认1Mbit/s~2000Mbit/s（具体范围以各区域配置为准，请参见控制台对应页面显示），不带此参数时表示不修改大小  功能说明：带宽大小，单位Mbit/s。  约束：name、size必须有一个参数有值  如果传入的参数为小数（如 10.2）或者字符类型（如“10”），会自动强制转换为整数。  约束：name、size必须要有一个参数有值。  调整带宽时的最小单位会根据带宽范围不同存在差异:  小于等于300Mbit/s：默认最小单位为1Mbit/s。  300Mbit/s~1000Mbit/s：默认最小单位为50Mbit/s。  大于1000Mbit/s：默认最小单位为500Mbit/s。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 功能说明：按流量计费,按带宽计费还是按增强型95计费。  取值范围：bandwidth，traffic，95peak_plus(按增强型95计费)不返回或者为空时表示是bandwidth。  约束：只有共享带宽支持95peak_plus（按增强型95计费），按增强型95计费时需要指定保底百分比，默认是20%。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ModifyBandwidthOption_H_
