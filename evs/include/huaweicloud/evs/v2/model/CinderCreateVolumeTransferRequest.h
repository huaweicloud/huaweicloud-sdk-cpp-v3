
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CinderCreateVolumeTransferRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderCreateVolumeTransferRequest
    : public ModelBase
{
public:
    CinderCreateVolumeTransferRequest();
    virtual ~CinderCreateVolumeTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderCreateVolumeTransferRequest members

    /// <summary>
    /// 
    /// </summary>

    CinderCreateVolumeTransferRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CinderCreateVolumeTransferRequestBody& value);


protected:
    CinderCreateVolumeTransferRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderCreateVolumeTransferRequest& dereference_from_shared_ptr(std::shared_ptr<CinderCreateVolumeTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequest_H_
