
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequestBody.h>
#include <string>

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
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateDisasterRecoveryDrillNameRequest
    : public ModelBase
{
public:
    UpdateDisasterRecoveryDrillNameRequest();
    virtual ~UpdateDisasterRecoveryDrillNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDisasterRecoveryDrillNameRequest members

    /// <summary>
    /// 容灾演练的ID。
    /// </summary>

    std::string getDisasterRecoveryDrillId() const;
    bool disasterRecoveryDrillIdIsSet() const;
    void unsetdisasterRecoveryDrillId();
    void setDisasterRecoveryDrillId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateDisasterRecoveryDrillNameRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateDisasterRecoveryDrillNameRequestBody& value);


protected:
    std::string disasterRecoveryDrillId_;
    bool disasterRecoveryDrillIdIsSet_;
    UpdateDisasterRecoveryDrillNameRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDisasterRecoveryDrillNameRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDisasterRecoveryDrillNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequest_H_
