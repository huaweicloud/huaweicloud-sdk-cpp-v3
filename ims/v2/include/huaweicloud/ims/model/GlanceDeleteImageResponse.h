
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageResponse_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"


namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  GlanceDeleteImageResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceDeleteImageResponse();
    virtual ~GlanceDeleteImageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceDeleteImageResponse members


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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageResponse_H_
