
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ForwardingInfo_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ForwardingInfo_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业版实例的SNAT配置信息。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ForwardingInfo
    : public ModelBase
{
public:
    ForwardingInfo();
    virtual ~ForwardingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForwardingInfo members

    /// <summary>
    /// **参数说明**：NAT网关绑定的EIP 
    /// </summary>

    std::string getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const std::string& value);

    /// <summary>
    /// **参数说明**：是否启用SNAT配置。 **取值范围**： - true: SNAT配置已启用 - false: SNAT配置未启用 
    /// </summary>

    bool isEnableSnat() const;
    bool enableSnatIsSet() const;
    void unsetenableSnat();
    void setEnableSnat(bool value);


protected:
    std::string eip_;
    bool eipIsSet_;
    bool enableSnat_;
    bool enableSnatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ForwardingInfo_H_
