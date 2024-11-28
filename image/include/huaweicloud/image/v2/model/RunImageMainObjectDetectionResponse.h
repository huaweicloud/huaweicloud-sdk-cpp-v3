
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMainObjectDetectionResponse_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMainObjectDetectionResponse_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageMainObjectDetectionInstance.h>
#include <vector>

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
class HUAWEICLOUD_IMAGE_V2_EXPORT  RunImageMainObjectDetectionResponse
    : public ModelBase, public HttpResponse
{
public:
    RunImageMainObjectDetectionResponse();
    virtual ~RunImageMainObjectDetectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunImageMainObjectDetectionResponse members

    /// <summary>
    /// 主体列表集合。
    /// </summary>

    std::vector<ImageMainObjectDetectionInstance>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ImageMainObjectDetectionInstance>& value);


protected:
    std::vector<ImageMainObjectDetectionInstance> result_;
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

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RunImageMainObjectDetectionResponse_H_
