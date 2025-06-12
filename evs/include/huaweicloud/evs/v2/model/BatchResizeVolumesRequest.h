
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchResizeVolumesRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchResizeVolumesRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/BatchResizeVolumeRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BatchResizeVolumesRequest
    : public ModelBase
{
public:
    BatchResizeVolumesRequest();
    virtual ~BatchResizeVolumesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeVolumesRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchResizeVolumeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchResizeVolumeRequestBody& value);


protected:
    BatchResizeVolumeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchResizeVolumesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchResizeVolumesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchResizeVolumesRequest_H_
