
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateDisasterRecoveryDrillRequest
    : public ModelBase
{
public:
    CreateDisasterRecoveryDrillRequest();
    virtual ~CreateDisasterRecoveryDrillRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDisasterRecoveryDrillRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateDisasterRecoveryDrillRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateDisasterRecoveryDrillRequestBody& value);


protected:
    CreateDisasterRecoveryDrillRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDisasterRecoveryDrillRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDisasterRecoveryDrillRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequest_H_
