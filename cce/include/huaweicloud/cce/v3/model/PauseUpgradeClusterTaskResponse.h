
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PauseUpgradeClusterTaskResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PauseUpgradeClusterTaskResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PauseUpgradeClusterTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    PauseUpgradeClusterTaskResponse();
    virtual ~PauseUpgradeClusterTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PauseUpgradeClusterTaskResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PauseUpgradeClusterTaskResponse_H_
