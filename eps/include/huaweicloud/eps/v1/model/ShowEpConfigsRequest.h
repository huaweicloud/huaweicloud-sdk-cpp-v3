
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEpConfigsRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEpConfigsRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowEpConfigsRequest
    : public ModelBase
{
public:
    ShowEpConfigsRequest();
    virtual ~ShowEpConfigsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEpConfigsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEpConfigsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEpConfigsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEpConfigsRequest_H_
