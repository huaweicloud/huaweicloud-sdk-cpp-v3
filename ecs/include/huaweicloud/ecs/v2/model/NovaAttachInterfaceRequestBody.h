
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaAttachInterfaceOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaAttachInterfaceRequestBody
    : public ModelBase
{
public:
    NovaAttachInterfaceRequestBody();
    virtual ~NovaAttachInterfaceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaAttachInterfaceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NovaAttachInterfaceOption getInterfaceAttachment() const;
    bool interfaceAttachmentIsSet() const;
    void unsetinterfaceAttachment();
    void setInterfaceAttachment(const NovaAttachInterfaceOption& value);


protected:
    NovaAttachInterfaceOption interfaceAttachment_;
    bool interfaceAttachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceRequestBody_H_
