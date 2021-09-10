
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFaceIdResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFaceIdResponse_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_FRS_V2_EXPORT  SearchFaceByFaceIdResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchFaceByFaceIdResponse();
    virtual ~SearchFaceByFaceIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SearchFaceByFaceIdResponse members

    /// <summary>
    /// 查找的人脸集合，详见[SearchFace](zh-cn_topic_0106912071.xml)。 调用失败时无此字段。
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

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFaceIdResponse_H_
