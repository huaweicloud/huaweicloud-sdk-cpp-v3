
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByUrlRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByUrlRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/LiveDetectFaceUrlReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveFaceByUrlRequest
    : public ModelBase
{
public:
    DetectLiveFaceByUrlRequest();
    virtual ~DetectLiveFaceByUrlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveFaceByUrlRequest members

    /// <summary>
    /// 
    /// </summary>

    LiveDetectFaceUrlReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LiveDetectFaceUrlReq& value);


protected:
    LiveDetectFaceUrlReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectLiveFaceByUrlRequest& dereference_from_shared_ptr(std::shared_ptr<DetectLiveFaceByUrlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveFaceByUrlRequest_H_
