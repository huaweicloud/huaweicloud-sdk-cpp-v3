
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建容灾演练请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateDisasterRecoveryDrillRequestBody
    : public ModelBase
{
public:
    CreateDisasterRecoveryDrillRequestBody();
    virtual ~CreateDisasterRecoveryDrillRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDisasterRecoveryDrillRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateDisasterRecoveryDrillRequestParams getDisasterRecoveryDrill() const;
    bool disasterRecoveryDrillIsSet() const;
    void unsetdisasterRecoveryDrill();
    void setDisasterRecoveryDrill(const CreateDisasterRecoveryDrillRequestParams& value);


protected:
    CreateDisasterRecoveryDrillRequestParams disasterRecoveryDrill_;
    bool disasterRecoveryDrillIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateDisasterRecoveryDrillRequestBody_H_
