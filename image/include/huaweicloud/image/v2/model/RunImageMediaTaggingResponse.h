
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMediaTaggingResponse_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMediaTaggingResponse_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageMediaTaggingResponse_result.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunImageMediaTaggingResponse
    : public ModelBase, public HttpResponse
{
public:
    RunImageMediaTaggingResponse();
    virtual ~RunImageMediaTaggingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunImageMediaTaggingResponse members

    /// <summary>
    /// 
    /// </summary>

    ImageMediaTaggingResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ImageMediaTaggingResponse_result& value);


protected:
    ImageMediaTaggingResponse_result result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMediaTaggingResponse_H_
