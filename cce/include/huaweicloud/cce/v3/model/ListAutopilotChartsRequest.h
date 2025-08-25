
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotChartsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotChartsRequest_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotChartsRequest
    : public ModelBase
{
public:
    ListAutopilotChartsRequest();
    virtual ~ListAutopilotChartsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotChartsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAutopilotChartsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAutopilotChartsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotChartsRequest_H_
