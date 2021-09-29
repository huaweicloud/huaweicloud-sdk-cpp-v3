
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchAttachSharableVolumesRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAttachSharableVolumesRequest
    : public ModelBase
{
public:
    BatchAttachSharableVolumesRequest();
    virtual ~BatchAttachSharableVolumesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAttachSharableVolumesRequest members

    /// <summary>
    /// 共享磁盘ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchAttachSharableVolumesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAttachSharableVolumesRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    BatchAttachSharableVolumesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAttachSharableVolumesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAttachSharableVolumesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequest_H_
