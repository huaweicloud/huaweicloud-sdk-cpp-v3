
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateBucketAuthorizedResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateBucketAuthorizedResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateBucketAuthorizedResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateBucketAuthorizedResponse();
    virtual ~UpdateBucketAuthorizedResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBucketAuthorizedResponse members


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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateBucketAuthorizedResponse_H_
