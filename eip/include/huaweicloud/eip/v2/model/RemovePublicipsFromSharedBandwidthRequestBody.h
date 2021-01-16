
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/RemoveFromSharedBandwidthOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 共享带宽移除弹性公网IP的请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  RemovePublicipsFromSharedBandwidthRequestBody
    : public ModelBase
{
public:
    RemovePublicipsFromSharedBandwidthRequestBody();
    virtual ~RemovePublicipsFromSharedBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RemovePublicipsFromSharedBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    RemoveFromSharedBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const RemoveFromSharedBandwidthOption& value);


protected:
    RemoveFromSharedBandwidthOption bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_RemovePublicipsFromSharedBandwidthRequestBody_H_
