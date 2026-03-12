
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteThumbnailsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteThumbnailsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/DeleteThumbnailResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteThumbnailsResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteThumbnailsResponse();
    virtual ~DeleteThumbnailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteThumbnailsResponse members

    /// <summary>
    /// 删除截图信息的处理结果。
    /// </summary>

    std::vector<DeleteThumbnailResult>& getDeleteResultArray();
    bool deleteResultArrayIsSet() const;
    void unsetdeleteResultArray();
    void setDeleteResultArray(const std::vector<DeleteThumbnailResult>& value);


protected:
    std::vector<DeleteThumbnailResult> deleteResultArray_;
    bool deleteResultArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteThumbnailsResponse_H_
