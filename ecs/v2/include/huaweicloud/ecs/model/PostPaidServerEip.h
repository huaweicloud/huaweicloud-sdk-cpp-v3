
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerEip_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerEip_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/PostPaidServerEipExtendParam.h"
#include <string>
#include "huaweicloud/ecs/model/PostPaidServerEipBandwidth.h"

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
class HUAWEICLOUD_ECS_EXPORT  PostPaidServerEip
    : public ModelBase
{
public:
    PostPaidServerEip();
    virtual ~PostPaidServerEip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerEip members

    /// <summary>
    /// 弹性IP地址类型。
    /// </summary>

    std::string getIptype() const;
    bool iptypeIsSet() const;
    void unsetiptype();
    void setIptype(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerEipBandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const PostPaidServerEipBandwidth& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerEipExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PostPaidServerEipExtendParam& value);


protected:
    std::string iptype_;
    bool iptypeIsSet_;
    PostPaidServerEipBandwidth bandwidth_;
    bool bandwidthIsSet_;
    PostPaidServerEipExtendParam extendparam_;
    bool extendparamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerEip_H_
