
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByUrlIntlResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByUrlIntlResponse_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/frs/v2/model/DetectFace.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectFaceByUrlIntlResponse
    : public ModelBase, public HttpResponse
{
public:
    DetectFaceByUrlIntlResponse();
    virtual ~DetectFaceByUrlIntlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectFaceByUrlIntlResponse members

    /// <summary>
    /// 检测到的人脸。 调用失败时无此字段。
    /// </summary>

    std::vector<DetectFace>& getFaces();
    bool facesIsSet() const;
    void unsetfaces();
    void setFaces(const std::vector<DetectFace>& value);


protected:
    std::vector<DetectFace> faces_;
    bool facesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByUrlIntlResponse_H_
