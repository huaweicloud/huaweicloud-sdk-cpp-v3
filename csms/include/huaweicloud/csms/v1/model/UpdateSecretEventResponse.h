
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Event.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretEventResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateSecretEventResponse();
    virtual ~UpdateSecretEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSecretEventResponse members

    /// <summary>
    /// 
    /// </summary>

    Event getEvent() const;
    bool eventIsSet() const;
    void unsetevent();
    void setEvent(const Event& value);


protected:
    Event event_;
    bool eventIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventResponse_H_
