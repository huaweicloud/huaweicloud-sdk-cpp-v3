
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequest_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/ResizeVolumeRequestBody.h"
#include <string>

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
class HUAWEICLOUD_EVS_EXPORT  ResizeVolumeRequest
    : public ModelBase
{
public:
    ResizeVolumeRequest();
    virtual ~ResizeVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeVolumeRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResizeVolumeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResizeVolumeRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    ResizeVolumeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResizeVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<ResizeVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequest_H_
