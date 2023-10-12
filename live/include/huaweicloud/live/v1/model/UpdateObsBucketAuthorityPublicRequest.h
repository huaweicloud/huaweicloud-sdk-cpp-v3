
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateObsBucketAuthorityPublicRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateObsBucketAuthorityPublicRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ObsAuthorityConfigV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateObsBucketAuthorityPublicRequest
    : public ModelBase
{
public:
    UpdateObsBucketAuthorityPublicRequest();
    virtual ~UpdateObsBucketAuthorityPublicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateObsBucketAuthorityPublicRequest members

    /// <summary>
    /// 
    /// </summary>

    ObsAuthorityConfigV2 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ObsAuthorityConfigV2& value);


protected:
    ObsAuthorityConfigV2 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateObsBucketAuthorityPublicRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateObsBucketAuthorityPublicRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateObsBucketAuthorityPublicRequest_H_
