
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretStageResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretStageResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Stage.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretStageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSecretStageResponse();
    virtual ~ShowSecretStageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSecretStageResponse members

    /// <summary>
    /// 
    /// </summary>

    Stage getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const Stage& value);


protected:
    Stage stage_;
    bool stageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretStageResponse_H_
