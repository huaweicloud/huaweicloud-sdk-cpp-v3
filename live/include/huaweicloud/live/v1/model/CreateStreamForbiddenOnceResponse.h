
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateStreamForbiddenOnceResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateStreamForbiddenOnceResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateStreamForbiddenOnceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateStreamForbiddenOnceResponse();
    virtual ~CreateStreamForbiddenOnceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateStreamForbiddenOnceResponse members


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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateStreamForbiddenOnceResponse_H_
