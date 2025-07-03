
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateNetworkInterfaceAttachmentOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateNetworkInterfaceAttachmentOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络接口，网卡
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateNetworkInterfaceAttachmentOption
    : public ModelBase
{
public:
    TemplateNetworkInterfaceAttachmentOption();
    virtual ~TemplateNetworkInterfaceAttachmentOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateNetworkInterfaceAttachmentOption members

    /// <summary>
    /// 加载顺序, 0代表主网卡
    /// </summary>

    int32_t getDeviceIndex() const;
    bool deviceIndexIsSet() const;
    void unsetdeviceIndex();
    void setDeviceIndex(int32_t value);


protected:
    int32_t deviceIndex_;
    bool deviceIndexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateNetworkInterfaceAttachmentOption_H_
