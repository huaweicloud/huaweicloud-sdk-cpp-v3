
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByBase64Response_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByBase64Response_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_FRS_V2_EXPORT  DetectFaceByBase64Response
    : public ModelBase, public HttpResponse
{
public:
    DetectFaceByBase64Response();
    virtual ~DetectFaceByBase64Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetectFaceByBase64Response members

    /// <summary>
    /// 检测到的人脸。 调用失败时无此字段。
    /// </summary>

    std::vector<DetectFace>& getFaces();
    bool facesIsSet() const;
    void unsetfaces();
    void setFaces(const std::vector<DetectFace>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<DetectFace> faces_;
    bool facesIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFaceByBase64Response_H_
