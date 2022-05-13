
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowFacesByLimitResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowFacesByLimitResponse_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/FaceSetFace.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_FRS_V2_EXPORT  ShowFacesByLimitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFacesByLimitResponse();
    virtual ~ShowFacesByLimitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowFacesByLimitResponse members

    /// <summary>
    /// 人脸库ID，随机生成的包含八个字符的字符串。 调用失败时无此字段。
    /// </summary>

    std::string getFaceSetId() const;
    bool faceSetIdIsSet() const;
    void unsetfaceSetId();
    void setFaceSetId(const std::string& value);

    /// <summary>
    /// 人脸库名称。 调用失败时无此字段。
    /// </summary>

    std::string getFaceSetName() const;
    bool faceSetNameIsSet() const;
    void unsetfaceSetName();
    void setFaceSetName(const std::string& value);

    /// <summary>
    /// [人脸库当中的人脸结构，详见[FaceSetFace](https://support.huaweicloud.com/api-face/face_02_0018.html)。 调用失败时无此字段。](tag:hc) [人脸库当中的人脸结构，详见[FaceSetFace](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0018.html)。 调用失败时无此字段。](tag:hk)
    /// </summary>

    std::vector<FaceSetFace>& getFaces();
    bool facesIsSet() const;
    void unsetfaces();
    void setFaces(const std::vector<FaceSetFace>& value);


protected:
    std::string faceSetId_;
    bool faceSetIdIsSet_;
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    std::vector<FaceSetFace> faces_;
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

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowFacesByLimitResponse_H_
