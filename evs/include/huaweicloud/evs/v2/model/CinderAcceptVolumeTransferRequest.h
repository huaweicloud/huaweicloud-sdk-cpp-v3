
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/CinderAcceptVolumeTransferRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderAcceptVolumeTransferRequest
    : public ModelBase
{
public:
    CinderAcceptVolumeTransferRequest();
    virtual ~CinderAcceptVolumeTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderAcceptVolumeTransferRequest members

    /// <summary>
    /// 云硬盘ID
    /// </summary>

    std::string getTransferId() const;
    bool transferIdIsSet() const;
    void unsettransferId();
    void setTransferId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CinderAcceptVolumeTransferRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CinderAcceptVolumeTransferRequestBody& value);


protected:
    std::string transferId_;
    bool transferIdIsSet_;
    CinderAcceptVolumeTransferRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderAcceptVolumeTransferRequest& dereference_from_shared_ptr(std::shared_ptr<CinderAcceptVolumeTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequest_H_
