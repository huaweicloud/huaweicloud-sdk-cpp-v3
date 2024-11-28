
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMediaTaggingDetRequest_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMediaTaggingDetRequest_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageMediaTaggingDetReq.h>

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
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunImageMediaTaggingDetRequest
    : public ModelBase
{
public:
    RunImageMediaTaggingDetRequest();
    virtual ~RunImageMediaTaggingDetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunImageMediaTaggingDetRequest members

    /// <summary>
    /// 
    /// </summary>

    ImageMediaTaggingDetReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ImageMediaTaggingDetReq& value);


protected:
    ImageMediaTaggingDetReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunImageMediaTaggingDetRequest& dereference_from_shared_ptr(std::shared_ptr<RunImageMediaTaggingDetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMediaTaggingDetRequest_H_
