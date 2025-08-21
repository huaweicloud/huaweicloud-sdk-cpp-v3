
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeAccountInfoRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeAccountInfoRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowBestPracticeAccountInfoRequest
    : public ModelBase
{
public:
    ShowBestPracticeAccountInfoRequest();
    virtual ~ShowBestPracticeAccountInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBestPracticeAccountInfoRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBestPracticeAccountInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBestPracticeAccountInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeAccountInfoRequest_H_
