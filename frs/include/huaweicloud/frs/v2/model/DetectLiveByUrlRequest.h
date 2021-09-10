
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByUrlRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByUrlRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/LiveDetectUrlReq.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveByUrlRequest
    : public ModelBase
{
public:
    DetectLiveByUrlRequest();
    virtual ~DetectLiveByUrlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveByUrlRequest members

    /// <summary>
    /// 
    /// </summary>

    LiveDetectUrlReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LiveDetectUrlReq& value);


protected:
    LiveDetectUrlReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectLiveByUrlRequest& dereference_from_shared_ptr(std::shared_ptr<DetectLiveByUrlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByUrlRequest_H_
