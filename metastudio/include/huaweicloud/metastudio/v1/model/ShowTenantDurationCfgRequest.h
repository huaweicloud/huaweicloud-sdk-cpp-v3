
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantDurationCfgRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantDurationCfgRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTenantDurationCfgRequest
    : public ModelBase
{
public:
    ShowTenantDurationCfgRequest();
    virtual ~ShowTenantDurationCfgRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantDurationCfgRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTenantDurationCfgRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTenantDurationCfgRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantDurationCfgRequest_H_
