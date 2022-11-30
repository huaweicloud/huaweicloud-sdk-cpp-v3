
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteAssetsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteAssetsResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/DeleteResult.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteAssetsResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteAssetsResponse();
    virtual ~DeleteAssetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteAssetsResponse members

    /// <summary>
    /// 删除媒资任务的处理结果。
    /// </summary>

    std::vector<DeleteResult>& getDeleteResultArray();
    bool deleteResultArrayIsSet() const;
    void unsetdeleteResultArray();
    void setDeleteResultArray(const std::vector<DeleteResult>& value);


protected:
    std::vector<DeleteResult> deleteResultArray_;
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteAssetsResponse_H_
