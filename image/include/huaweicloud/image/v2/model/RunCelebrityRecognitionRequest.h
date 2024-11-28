
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunCelebrityRecognitionRequest_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunCelebrityRecognitionRequest_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/CelebrityRecognitionReq.h>

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
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunCelebrityRecognitionRequest
    : public ModelBase
{
public:
    RunCelebrityRecognitionRequest();
    virtual ~RunCelebrityRecognitionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunCelebrityRecognitionRequest members

    /// <summary>
    /// 
    /// </summary>

    CelebrityRecognitionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CelebrityRecognitionReq& value);


protected:
    CelebrityRecognitionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunCelebrityRecognitionRequest& dereference_from_shared_ptr(std::shared_ptr<RunCelebrityRecognitionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunCelebrityRecognitionRequest_H_
