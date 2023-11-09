
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowOverviewRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowOverviewRequest_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowOverviewRequest
    : public ModelBase
{
public:
    ShowOverviewRequest();
    virtual ~ShowOverviewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOverviewRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowOverviewRequest& dereference_from_shared_ptr(std::shared_ptr<ShowOverviewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowOverviewRequest_H_
