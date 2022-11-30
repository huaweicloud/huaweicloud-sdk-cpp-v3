
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByFileRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByFileRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/DetectFaceByFileRequestBody.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectFaceByFileRequest
    : public ModelBase
{
public:
    DetectFaceByFileRequest();
    virtual ~DetectFaceByFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectFaceByFileRequest members

    /// <summary>
    /// 
    /// </summary>

    DetectFaceByFileRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DetectFaceByFileRequestBody& value);


protected:
    DetectFaceByFileRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetectFaceByFileRequest& dereference_from_shared_ptr(std::shared_ptr<DetectFaceByFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByFileRequest_H_
