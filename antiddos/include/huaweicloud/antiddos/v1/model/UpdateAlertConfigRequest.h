
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateAlertConfigRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateAlertConfigRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/UpdateAlertConfigRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  UpdateAlertConfigRequest
    : public ModelBase
{
public:
    UpdateAlertConfigRequest();
    virtual ~UpdateAlertConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAlertConfigRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateAlertConfigRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateAlertConfigRequestBody& value);


protected:
    UpdateAlertConfigRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAlertConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAlertConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateAlertConfigRequest_H_
