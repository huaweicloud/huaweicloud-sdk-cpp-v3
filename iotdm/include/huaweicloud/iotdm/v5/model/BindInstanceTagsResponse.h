
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_BindInstanceTagsResponse_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_BindInstanceTagsResponse_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  BindInstanceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    BindInstanceTagsResponse();
    virtual ~BindInstanceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindInstanceTagsResponse members


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

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_BindInstanceTagsResponse_H_
