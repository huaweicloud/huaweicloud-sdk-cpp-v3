
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByFileResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByFileResponse_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/CompareFace.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  CompareFaceByFileResponse
    : public ModelBase, public HttpResponse
{
public:
    CompareFaceByFileResponse();
    virtual ~CompareFaceByFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareFaceByFileResponse members

    /// <summary>
    /// 
    /// </summary>

    CompareFace getImage1Face() const;
    bool image1FaceIsSet() const;
    void unsetimage1Face();
    void setImage1Face(const CompareFace& value);

    /// <summary>
    /// 
    /// </summary>

    CompareFace getImage2Face() const;
    bool image2FaceIsSet() const;
    void unsetimage2Face();
    void setImage2Face(const CompareFace& value);

    /// <summary>
    /// 人脸相似度，1表示最大，0表示最小，值越大表示越相似。一般情况下超过0.93即可认为是同一个人。 调用失败时无此字段。
    /// </summary>

    double getSimilarity() const;
    bool similarityIsSet() const;
    void unsetsimilarity();
    void setSimilarity(double value);


protected:
    CompareFace image1Face_;
    bool image1FaceIsSet_;
    CompareFace image2Face_;
    bool image2FaceIsSet_;
    double similarity_;
    bool similarityIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByFileResponse_H_
