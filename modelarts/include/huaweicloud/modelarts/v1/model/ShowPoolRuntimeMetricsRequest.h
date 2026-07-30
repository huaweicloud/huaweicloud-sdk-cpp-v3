
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolRuntimeMetricsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolRuntimeMetricsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolRuntimeMetricsRequest
    : public ModelBase
{
public:
    ShowPoolRuntimeMetricsRequest();
    virtual ~ShowPoolRuntimeMetricsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolRuntimeMetricsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPoolRuntimeMetricsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPoolRuntimeMetricsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolRuntimeMetricsRequest_H_
