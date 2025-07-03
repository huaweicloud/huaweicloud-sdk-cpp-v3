
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateNetworkInterfaceOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateNetworkInterfaceOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/TemplateNetworkInterfaceAttachmentOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateNetworkInterfaceOption
    : public ModelBase
{
public:
    TemplateNetworkInterfaceOption();
    virtual ~TemplateNetworkInterfaceOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateNetworkInterfaceOption members

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getVirsubnetId() const;
    bool virsubnetIdIsSet() const;
    void unsetvirsubnetId();
    void setVirsubnetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateNetworkInterfaceAttachmentOption getAttachment() const;
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const TemplateNetworkInterfaceAttachmentOption& value);


protected:
    std::string virsubnetId_;
    bool virsubnetIdIsSet_;
    TemplateNetworkInterfaceAttachmentOption attachment_;
    bool attachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateNetworkInterfaceOption_H_
