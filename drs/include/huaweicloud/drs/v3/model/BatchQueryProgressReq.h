
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryProgressReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryProgressReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量查询同步进度的请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchQueryProgressReq
    : public ModelBase
{
public:
    BatchQueryProgressReq();
    virtual ~BatchQueryProgressReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchQueryProgressReq members

    /// <summary>
    /// **参数解释**：  批量查询任务ID列表，通过该参数指定需要查询进度的一个或多个任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<std::string>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryProgressReq_H_
