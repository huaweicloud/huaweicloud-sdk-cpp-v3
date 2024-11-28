
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageTaggingRequest_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageTaggingRequest_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageTaggingReq.h>

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
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunImageTaggingRequest
    : public ModelBase
{
public:
    RunImageTaggingRequest();
    virtual ~RunImageTaggingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunImageTaggingRequest members

    /// <summary>
    /// 
    /// </summary>

    ImageTaggingReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ImageTaggingReq& value);


protected:
    ImageTaggingReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunImageTaggingRequest& dereference_from_shared_ptr(std::shared_ptr<RunImageTaggingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageTaggingRequest_H_
