
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryJobReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 查询任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchQueryJobReq
    : public ModelBase
{
public:
    BatchQueryJobReq();
    virtual ~BatchQueryJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchQueryJobReq members

    /// <summary>
    /// 查询任务请求体
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryJobReq_H_
