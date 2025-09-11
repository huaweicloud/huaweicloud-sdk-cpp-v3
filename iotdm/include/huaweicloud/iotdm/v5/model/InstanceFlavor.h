
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_InstanceFlavor_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_InstanceFlavor_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  InstanceFlavor
    : public ModelBase
{
public:
    InstanceFlavor();
    virtual ~InstanceFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceFlavor members

    /// <summary>
    /// **参数说明**：创建的实例类型。实例类型说明参见[[产品规格说明](https://support.huaweicloud.com/productdesc-iothub/iot_04_0014.html)](tag:hws)[[产品规格说明](https://support.huaweicloud.com/intl/zh-cn/productdesc-iothub/iot_04_0014.html)](tag:hws_hk)。 **取值范围**： - standard：标准版实例 - enterprise：企业版实例 
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备接入实例的规格名称。详情请参见[[产品规格说明](https://support.huaweicloud.com/productdesc-iothub/iot_04_0014.html)](tag:hws)[[产品规格说明](https://support.huaweicloud.com/intl/zh-cn/productdesc-iothub/iot_04_0014.html)](tag:hws_hk)中的规格编码。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数说明**：实例规格的在售状态。 **取值范围**： - normal：在售 - sellout：已售罄 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数说明**：实例规格支持的付费方式列表。 **取值范围**： - prePaid：包年/包月 - postPaid：按需计费
    /// </summary>

    std::vector<std::string>& getChargeModes();
    bool chargeModesIsSet() const;
    void unsetchargeModes();
    void setChargeModes(const std::vector<std::string>& value);


protected:
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> chargeModes_;
    bool chargeModesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_InstanceFlavor_H_
