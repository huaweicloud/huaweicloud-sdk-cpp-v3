
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerAttachableNicNumResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerAttachableNicNumResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/AttachableQuantityForNic.h>
#include <huaweicloud/ecs/v2/model/InterfaceExt.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerAttachableNicNumResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerAttachableNicNumResponse();
    virtual ~ShowServerAttachableNicNumResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerAttachableNicNumResponse members

    /// <summary>
    /// 
    /// </summary>

    AttachableQuantityForNic getAttachableQuantity() const;
    bool attachableQuantityIsSet() const;
    void unsetattachableQuantity();
    void setAttachableQuantity(const AttachableQuantityForNic& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<InterfaceExt>& getInterfaceAttachments();
    bool interfaceAttachmentsIsSet() const;
    void unsetinterfaceAttachments();
    void setInterfaceAttachments(const std::vector<InterfaceExt>& value);


protected:
    AttachableQuantityForNic attachableQuantity_;
    bool attachableQuantityIsSet_;
    std::vector<InterfaceExt> interfaceAttachments_;
    bool interfaceAttachmentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerAttachableNicNumResponse_H_
