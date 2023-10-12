
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileResponse_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/SearchFace.h>
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
class HUAWEICLOUD_FRS_V2_EXPORT  SearchFaceByFileResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchFaceByFileResponse();
    virtual ~SearchFaceByFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchFaceByFileResponse members

    /// <summary>
    /// [查找的人脸集合，详见[SearchFace](https://support.huaweicloud.com/api-face/face_02_0019.html)。调用失败时无此字段。](tag:hc) [查找的人脸集合，详见[SearchFace](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0019.html)。调用失败时无此字段。](tag:hk)
    /// </summary>

    std::vector<SearchFace>& getFaces();
    bool facesIsSet() const;
    void unsetfaces();
    void setFaces(const std::vector<SearchFace>& value);


protected:
    std::vector<SearchFace> faces_;
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

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileResponse_H_
