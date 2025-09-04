
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateForwardingInfo_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateForwardingInfo_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业版实例的SNAT配置，配置开启后，企业版实例可以在公共网络中进行外部通信。 约束：只有企业版实例支持修改流转配置。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  UpdateForwardingInfo
    : public ModelBase
{
public:
    UpdateForwardingInfo();
    virtual ~UpdateForwardingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateForwardingInfo members

    /// <summary>
    /// **参数说明**：是否启用SNAT配置。企业版实例开启SNAT配置后，可以在公共网络中进行外部通信。 约束：只有企业版实例支持配置SNAT配置，SNAT配置开启后将不支持关闭。 **取值范围**： - true: 启用SNAT配置 
    /// </summary>

    bool isEnableSnat() const;
    bool enableSnatIsSet() const;
    void unsetenableSnat();
    void setEnableSnat(bool value);


protected:
    bool enableSnat_;
    bool enableSnatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateForwardingInfo_H_
