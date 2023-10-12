
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchPrecheckReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchPrecheckReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PreCheckInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量预检查请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchPrecheckReq
    : public ModelBase
{
public:
    BatchPrecheckReq();
    virtual ~BatchPrecheckReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchPrecheckReq members

    /// <summary>
    /// 批量预检查请求列表
    /// </summary>

    std::vector<PreCheckInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<PreCheckInfo>& value);


protected:
    std::vector<PreCheckInfo> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchPrecheckReq_H_
