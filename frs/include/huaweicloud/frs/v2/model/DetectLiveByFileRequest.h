
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByFileRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByFileRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/DetectLiveByFileRequestBody.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveByFileRequest
    : public ModelBase
{
public:
    DetectLiveByFileRequest();
    virtual ~DetectLiveByFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveByFileRequest members

    /// <summary>
    /// 
    /// </summary>

    DetectLiveByFileRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DetectLiveByFileRequestBody& value);


protected:
    DetectLiveByFileRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectLiveByFileRequest& dereference_from_shared_ptr(std::shared_ptr<DetectLiveByFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByFileRequest_H_
