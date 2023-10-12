
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateBandwidthOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateBandwidthOption_H_


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
/// 带宽对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchCreateBandwidthOption
    : public ModelBase
{
public:
    BatchCreateBandwidthOption();
    virtual ~BatchCreateBandwidthOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateBandwidthOption members

    /// <summary>
    /// 取值范围：正整数  功能说明：批创的共享带宽的个数  说明： 如果传入的参数为小数（如 2.2）或者字符类型（如“2”），会自动强制转换为整数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）  功能说明：带宽名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：带宽大小。共享带宽的大小有最小值限制，默认为2M，可能因局点不同而不同。  取值范围：默认5Mbit/s~2000Mbit/s（具体范围以各区域配置为准，请参见控制台对应页面显示）。  注意：调整带宽时的最小单位会根据带宽范围不同存在差异。  小于等于300Mbit/s：默认最小单位为1Mbit/s。  300Mbit/s~1000Mbit/s：默认最小单位为50Mbit/s。  大于1000Mbit/s：默认最小单位为500Mbit/s。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 功能说明：表示中心站点资源或者边缘站点资源 取值范围： center、边缘站点名称 约束：共享带宽只能插入与该字段相同的publicip
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreateBandwidthOption_H_
