
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerInterfacesResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerInterfacesResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/InterfaceAttachment.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerInterfacesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerInterfacesResponse();
    virtual ~ListServerInterfacesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerInterfacesResponse members

    /// <summary>
    /// 云服务器网卡信息列表
    /// </summary>

    std::vector<InterfaceAttachment>& getInterfaceAttachments();
    bool interfaceAttachmentsIsSet() const;
    void unsetinterfaceAttachments();
    void setInterfaceAttachments(const std::vector<InterfaceAttachment>& value);


protected:
    std::vector<InterfaceAttachment> interfaceAttachments_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerInterfacesResponse_H_
