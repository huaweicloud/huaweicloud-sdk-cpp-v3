
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/CreateRealTimeClipRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateRealTimeClipRequest
    : public ModelBase
{
public:
    CreateRealTimeClipRequest();
    virtual ~CreateRealTimeClipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRealTimeClipRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateRealTimeClipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateRealTimeClipRequestBody& value);


protected:
    CreateRealTimeClipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRealTimeClipRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRealTimeClipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipRequest_H_
