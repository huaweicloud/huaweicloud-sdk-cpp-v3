
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateUploadByUrlRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateUploadByUrlRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/UploadByUrlReq.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateUploadByUrlRequest
    : public ModelBase
{
public:
    CreateUploadByUrlRequest();
    virtual ~CreateUploadByUrlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUploadByUrlRequest members

    /// <summary>
    /// 
    /// </summary>

    UploadByUrlReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadByUrlReq& value);


protected:
    UploadByUrlReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateUploadByUrlRequest& dereference_from_shared_ptr(std::shared_ptr<CreateUploadByUrlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateUploadByUrlRequest_H_
