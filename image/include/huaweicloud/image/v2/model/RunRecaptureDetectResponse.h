
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunRecaptureDetectResponse_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunRecaptureDetectResponse_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/RecaptureDetectResponse_result.h>

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
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunRecaptureDetectResponse
    : public ModelBase, public HttpResponse
{
public:
    RunRecaptureDetectResponse();
    virtual ~RunRecaptureDetectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunRecaptureDetectResponse members

    /// <summary>
    /// 
    /// </summary>

    RecaptureDetectResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const RecaptureDetectResponse_result& value);


protected:
    RecaptureDetectResponse_result result_;
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

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunRecaptureDetectResponse_H_
