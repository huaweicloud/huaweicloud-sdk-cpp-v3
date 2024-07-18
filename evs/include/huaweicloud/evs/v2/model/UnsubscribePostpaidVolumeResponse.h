
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribePostpaidVolumeResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribePostpaidVolumeResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/UnsubscribeVolumeResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UnsubscribePostpaidVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    UnsubscribePostpaidVolumeResponse();
    virtual ~UnsubscribePostpaidVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnsubscribePostpaidVolumeResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<UnsubscribeVolumeResponseBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UnsubscribeVolumeResponseBody>& value);


protected:
    std::vector<UnsubscribeVolumeResponseBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribePostpaidVolumeResponse_H_
