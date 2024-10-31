
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeTypeRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeTypeRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/UpdateStorageModeTypeReq.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateStorageModeTypeRequest
    : public ModelBase
{
public:
    UpdateStorageModeTypeRequest();
    virtual ~UpdateStorageModeTypeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStorageModeTypeRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateStorageModeTypeReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateStorageModeTypeReq& value);


protected:
    UpdateStorageModeTypeReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateStorageModeTypeRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateStorageModeTypeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeTypeRequest_H_
