
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_RemoveFromSharedBandwidthOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_RemoveFromSharedBandwidthOption_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/eip/model/RemovePublicipInfo.h"
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
class HUAWEICLOUD_EIP_EXPORT  RemoveFromSharedBandwidthOption
    : public ModelBase
{
public:
    RemoveFromSharedBandwidthOption();
    virtual ~RemoveFromSharedBandwidthOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RemoveFromSharedBandwidthOption members

    /// <summary>
    /// 弹性公网IP从共享带宽移除后，会为此弹性公网IP创建独占带宽进行计费。  此参数表示弹性公网IP从共享带宽移除后，使用的独占带宽的计费类型。（bandwidth/traffic）
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 功能说明：要从共享带宽中移除的弹性公网IP或者IPv6端口信息  约束：WHOLE类型的带宽支持多个弹性公网IP或者IPv6端口，跟租户的配额相关，默认一个共享带宽的配额为20
    /// </summary>

    std::vector<RemovePublicipInfo>& getPublicipInfo();
    bool publicipInfoIsSet() const;
    void unsetpublicipInfo();
    void setPublicipInfo(const std::vector<RemovePublicipInfo>& value);

    /// <summary>
    /// 弹性公网IP从共享带宽移除后，会为此弹性公网IP创建独占带宽进行计费。  此参数表示弹性公网IP从共享带宽移除后，使用的独占带宽的带宽大小。（M）取值范围：默认为1~2000Mbit/s. 可能因为局点配置不同而不同。也跟带宽的计费模式（bandwidth/traffic）相关。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::vector<RemovePublicipInfo> publicipInfo_;
    bool publicipInfoIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_RemoveFromSharedBandwidthOption_H_
