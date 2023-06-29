
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListQualityEnhanceDefaultTemplateRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListQualityEnhanceDefaultTemplateRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListQualityEnhanceDefaultTemplateRequest
    : public ModelBase
{
public:
    ListQualityEnhanceDefaultTemplateRequest();
    virtual ~ListQualityEnhanceDefaultTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListQualityEnhanceDefaultTemplateRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListQualityEnhanceDefaultTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ListQualityEnhanceDefaultTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListQualityEnhanceDefaultTemplateRequest_H_
