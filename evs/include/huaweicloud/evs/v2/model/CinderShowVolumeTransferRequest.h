
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CinderShowVolumeTransferRequest
    : public ModelBase
{
public:
    CinderShowVolumeTransferRequest();
    virtual ~CinderShowVolumeTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderShowVolumeTransferRequest members

    /// <summary>
    /// 云硬盘过户记录ID
    /// </summary>

    std::string getTransferId() const;
    bool transferIdIsSet() const;
    void unsettransferId();
    void setTransferId(const std::string& value);


protected:
    std::string transferId_;
    bool transferIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderShowVolumeTransferRequest& dereference_from_shared_ptr(std::shared_ptr<CinderShowVolumeTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferRequest_H_
