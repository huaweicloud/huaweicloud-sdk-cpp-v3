
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByBase64IntlRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByBase64IntlRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/LiveDetectBase64Req.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveByBase64IntlRequest
    : public ModelBase
{
public:
    DetectLiveByBase64IntlRequest();
    virtual ~DetectLiveByBase64IntlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveByBase64IntlRequest members

    /// <summary>
    /// 
    /// </summary>

    LiveDetectBase64Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LiveDetectBase64Req& value);


protected:
    LiveDetectBase64Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectLiveByBase64IntlRequest& dereference_from_shared_ptr(std::shared_ptr<DetectLiveByBase64IntlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByBase64IntlRequest_H_
