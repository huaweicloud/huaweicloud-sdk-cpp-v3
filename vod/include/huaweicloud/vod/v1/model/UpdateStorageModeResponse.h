
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TaskResult.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateStorageModeResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateStorageModeResponse();
    virtual ~UpdateStorageModeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStorageModeResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TaskResult>& getTaskResultArray();
    bool taskResultArrayIsSet() const;
    void unsettaskResultArray();
    void setTaskResultArray(const std::vector<TaskResult>& value);


protected:
    std::vector<TaskResult> taskResultArray_;
    bool taskResultArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeResponse_H_
