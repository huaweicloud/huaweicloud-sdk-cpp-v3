
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunRecaptureDetectRequest_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunRecaptureDetectRequest_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/RecaptureDetectReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunRecaptureDetectRequest
    : public ModelBase
{
public:
    RunRecaptureDetectRequest();
    virtual ~RunRecaptureDetectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunRecaptureDetectRequest members

    /// <summary>
    /// 
    /// </summary>

    RecaptureDetectReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RecaptureDetectReq& value);


protected:
    RecaptureDetectReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunRecaptureDetectRequest& dereference_from_shared_ptr(std::shared_ptr<RunRecaptureDetectRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunRecaptureDetectRequest_H_
