
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowUserChartsQuotasRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowUserChartsQuotasRequest_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowUserChartsQuotasRequest
    : public ModelBase
{
public:
    ShowUserChartsQuotasRequest();
    virtual ~ShowUserChartsQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserChartsQuotasRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUserChartsQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUserChartsQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowUserChartsQuotasRequest_H_
