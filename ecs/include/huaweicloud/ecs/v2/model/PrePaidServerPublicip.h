
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerPublicip_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerPublicip_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/PrePaidServerEip.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  PrePaidServerPublicip
    : public ModelBase
{
public:
    PrePaidServerPublicip();
    virtual ~PrePaidServerPublicip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerPublicip members

    /// <summary>
    /// 为待创建云服务器分配已有弹性IP时，分配的弹性IP的ID，UUID格式。  约束：只能分配状态（status）为DOWN的弹性IP。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrePaidServerEip getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const PrePaidServerEip& value);


protected:
    std::string id_;
    bool idIsSet_;
    PrePaidServerEip eip_;
    bool eipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerPublicip_H_
