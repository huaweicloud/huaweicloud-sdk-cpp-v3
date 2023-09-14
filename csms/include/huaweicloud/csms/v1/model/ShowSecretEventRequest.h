
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretEventRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretEventRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretEventRequest
    : public ModelBase
{
public:
    ShowSecretEventRequest();
    virtual ~ShowSecretEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSecretEventRequest members

    /// <summary>
    /// 事件通知的名称。
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);


protected:
    std::string eventName_;
    bool eventNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSecretEventRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSecretEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretEventRequest_H_
