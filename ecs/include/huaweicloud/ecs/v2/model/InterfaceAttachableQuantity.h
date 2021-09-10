
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachableQuantity_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachableQuantity_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_ECS_V2_EXPORT  InterfaceAttachableQuantity
    : public ModelBase
{
public:
    InterfaceAttachableQuantity();
    virtual ~InterfaceAttachableQuantity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InterfaceAttachableQuantity members

    /// <summary>
    /// 云服务器剩余可挂载网卡数量
    /// </summary>

    int32_t getFreeNic() const;
    bool freeNicIsSet() const;
    void unsetfreeNic();
    void setFreeNic(int32_t value);


protected:
    int32_t freeNic_;
    bool freeNicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceAttachableQuantity_H_
