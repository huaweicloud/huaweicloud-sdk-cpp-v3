
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowQuotaRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowQuotaRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowQuotaRequest
    : public ModelBase
{
public:
    ShowQuotaRequest();
    virtual ~ShowQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowQuotaRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ShowQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowQuotaRequest_H_
