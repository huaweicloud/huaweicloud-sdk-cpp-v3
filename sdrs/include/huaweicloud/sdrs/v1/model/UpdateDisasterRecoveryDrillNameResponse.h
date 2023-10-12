
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateDisasterRecoveryDrillNameResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDisasterRecoveryDrillNameResponse();
    virtual ~UpdateDisasterRecoveryDrillNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDisasterRecoveryDrillNameResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowDisasterRecoveryDrillParams getDisasterRecoveryDrill() const;
    bool disasterRecoveryDrillIsSet() const;
    void unsetdisasterRecoveryDrill();
    void setDisasterRecoveryDrill(const ShowDisasterRecoveryDrillParams& value);


protected:
    ShowDisasterRecoveryDrillParams disasterRecoveryDrill_;
    bool disasterRecoveryDrillIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameResponse_H_
