
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchStartJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchStartJobReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/StartInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量启动任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchStartJobReq
    : public ModelBase
{
public:
    BatchStartJobReq();
    virtual ~BatchStartJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStartJobReq members

    /// <summary>
    /// 批量启动任务请求列表。
    /// </summary>

    std::vector<StartInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<StartInfo>& value);


protected:
    std::vector<StartInfo> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchStartJobReq_H_
