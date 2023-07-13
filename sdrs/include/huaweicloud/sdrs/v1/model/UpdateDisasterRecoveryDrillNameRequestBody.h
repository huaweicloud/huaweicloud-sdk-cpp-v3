
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新容灾演练名称请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateDisasterRecoveryDrillNameRequestBody
    : public ModelBase
{
public:
    UpdateDisasterRecoveryDrillNameRequestBody();
    virtual ~UpdateDisasterRecoveryDrillNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDisasterRecoveryDrillNameRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateDisasterRecoveryDrillNameRequestParams getDisasterRecoveryDrill() const;
    bool disasterRecoveryDrillIsSet() const;
    void unsetdisasterRecoveryDrill();
    void setDisasterRecoveryDrill(const UpdateDisasterRecoveryDrillNameRequestParams& value);


protected:
    UpdateDisasterRecoveryDrillNameRequestParams disasterRecoveryDrill_;
    bool disasterRecoveryDrillIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequestBody_H_
