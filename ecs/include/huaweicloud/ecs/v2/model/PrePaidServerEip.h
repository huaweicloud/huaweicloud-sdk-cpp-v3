
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerEip_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerEip_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/PrePaidServerEipExtendParam.h>
#include <string>
#include <huaweicloud/ecs/v2/model/PrePaidServerEipBandwidth.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  PrePaidServerEip
    : public ModelBase
{
public:
    PrePaidServerEip();
    virtual ~PrePaidServerEip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerEip members

    /// <summary>
    /// 弹性IP地址类型。  详情请参见“[申请弹性公网IP](https://support.huaweicloud.com/api-eip/eip_api_0001.html)”章节的“publicip”字段说明。
    /// </summary>

    std::string getIptype() const;
    bool iptypeIsSet() const;
    void unsetiptype();
    void setIptype(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrePaidServerEipBandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const PrePaidServerEipBandwidth& value);

    /// <summary>
    /// 
    /// </summary>

    PrePaidServerEipExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PrePaidServerEipExtendParam& value);


protected:
    std::string iptype_;
    bool iptypeIsSet_;
    PrePaidServerEipBandwidth bandwidth_;
    bool bandwidthIsSet_;
    PrePaidServerEipExtendParam extendparam_;
    bool extendparamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerEip_H_
