
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CreateVolumeRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CreateVolumeRequest
    : public ModelBase
{
public:
    CreateVolumeRequest();
    virtual ~CreateVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVolumeRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateVolumeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateVolumeRequestBody& value);


protected:
    CreateVolumeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequest_H_
