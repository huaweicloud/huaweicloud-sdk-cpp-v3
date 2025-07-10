
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateBestPracticeDetectResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateBestPracticeDetectResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateBestPracticeDetectResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateBestPracticeDetectResponse();
    virtual ~CreateBestPracticeDetectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBestPracticeDetectResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateBestPracticeDetectResponse_H_
