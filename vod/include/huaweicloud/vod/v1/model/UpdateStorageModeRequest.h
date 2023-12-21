
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/UpdateStorageModeReq.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateStorageModeRequest
    : public ModelBase
{
public:
    UpdateStorageModeRequest();
    virtual ~UpdateStorageModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStorageModeRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateStorageModeReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateStorageModeReq& value);


protected:
    UpdateStorageModeReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateStorageModeRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateStorageModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeRequest_H_
