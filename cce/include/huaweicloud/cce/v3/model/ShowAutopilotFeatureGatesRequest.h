
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotFeatureGatesRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotFeatureGatesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotFeatureGatesRequest
    : public ModelBase
{
public:
    ShowAutopilotFeatureGatesRequest();
    virtual ~ShowAutopilotFeatureGatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotFeatureGatesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAutopilotFeatureGatesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAutopilotFeatureGatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotFeatureGatesRequest_H_
