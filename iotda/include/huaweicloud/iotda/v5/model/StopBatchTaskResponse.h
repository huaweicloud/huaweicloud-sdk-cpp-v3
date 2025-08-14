
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_StopBatchTaskResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_StopBatchTaskResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/BatchTargetResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  StopBatchTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    StopBatchTaskResponse();
    virtual ~StopBatchTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopBatchTaskResponse members

    /// <summary>
    /// 批量操作目标结果集合
    /// </summary>

    std::vector<BatchTargetResult>& getTargets();
    bool targetsIsSet() const;
    void unsettargets();
    void setTargets(const std::vector<BatchTargetResult>& value);


protected:
    std::vector<BatchTargetResult> targets_;
    bool targetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_StopBatchTaskResponse_H_
