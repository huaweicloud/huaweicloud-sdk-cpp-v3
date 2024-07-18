
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ChangeVolumeChargeModeRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ChangeVolumeChargeModeRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ChangeVolumeChargeModeRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ChangeVolumeChargeModeRequest
    : public ModelBase
{
public:
    ChangeVolumeChargeModeRequest();
    virtual ~ChangeVolumeChargeModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeVolumeChargeModeRequest members

    /// <summary>
    /// 
    /// </summary>

    ChangeVolumeChargeModeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeVolumeChargeModeRequestBody& value);


protected:
    ChangeVolumeChargeModeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeVolumeChargeModeRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeVolumeChargeModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ChangeVolumeChargeModeRequest_H_
