
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunCelebrityRecognitionResponse_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunCelebrityRecognitionResponse_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/image/v2/model/CelebrityRecognitionResultBody.h>

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
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunCelebrityRecognitionResponse
    : public ModelBase, public HttpResponse
{
public:
    RunCelebrityRecognitionResponse();
    virtual ~RunCelebrityRecognitionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunCelebrityRecognitionResponse members

    /// <summary>
    /// 调用成功时表示调用结果。  调用失败时无此字段。 
    /// </summary>

    std::vector<CelebrityRecognitionResultBody>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<CelebrityRecognitionResultBody>& value);


protected:
    std::vector<CelebrityRecognitionResultBody> result_;
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

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunCelebrityRecognitionResponse_H_
