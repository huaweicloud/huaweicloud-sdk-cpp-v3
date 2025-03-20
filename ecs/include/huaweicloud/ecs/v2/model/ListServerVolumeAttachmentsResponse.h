
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerVolumeAttachmentsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerVolumeAttachmentsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerVolumeAttachment.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerVolumeAttachmentsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerVolumeAttachmentsResponse();
    virtual ~ListServerVolumeAttachmentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServerVolumeAttachmentsResponse members

    /// <summary>
    /// 云服务器挂载信息列表
    /// </summary>

    std::vector<ServerVolumeAttachment>& getVolumeAttachments();
    bool volumeAttachmentsIsSet() const;
    void unsetvolumeAttachments();
    void setVolumeAttachments(const std::vector<ServerVolumeAttachment>& value);


protected:
    std::vector<ServerVolumeAttachment> volumeAttachments_;
    bool volumeAttachmentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerVolumeAttachmentsResponse_H_
