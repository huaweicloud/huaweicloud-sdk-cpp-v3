
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowRegisterServiceRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowRegisterServiceRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowRegisterServiceRequest
    : public ModelBase
{
public:
    ShowRegisterServiceRequest();
    virtual ~ShowRegisterServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRegisterServiceRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRegisterServiceRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRegisterServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowRegisterServiceRequest_H_
