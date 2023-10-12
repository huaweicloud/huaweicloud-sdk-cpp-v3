
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchTestConnectionReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchTestConnectionReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/TestEndPoint.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量测试连接任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchTestConnectionReq
    : public ModelBase
{
public:
    BatchTestConnectionReq();
    virtual ~BatchTestConnectionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchTestConnectionReq members

    /// <summary>
    /// 批量测试连接请求列表。
    /// </summary>

    std::vector<TestEndPoint>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<TestEndPoint>& value);


protected:
    std::vector<TestEndPoint> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchTestConnectionReq_H_
