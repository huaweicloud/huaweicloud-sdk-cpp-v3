
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateNicInfoRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateNicInfoRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/InterfaceAttachment.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateNicInfoRequestBody
    : public ModelBase
{
public:
    UpdateNicInfoRequestBody();
    virtual ~UpdateNicInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNicInfoRequestBody members

    /// <summary>
    /// 
    /// </summary>

    InterfaceAttachment getInterfaceAttachment() const;
    bool interfaceAttachmentIsSet() const;
    void unsetinterfaceAttachment();
    void setInterfaceAttachment(const InterfaceAttachment& value);


protected:
    InterfaceAttachment interfaceAttachment_;
    bool interfaceAttachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateNicInfoRequestBody_H_
