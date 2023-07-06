
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryPrecheckResultReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryPrecheckResultReq_H_

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
/// 批量查询预检查结果请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchQueryPrecheckResultReq
    : public ModelBase
{
public:
    BatchQueryPrecheckResultReq();
    virtual ~BatchQueryPrecheckResultReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchQueryPrecheckResultReq members

    /// <summary>
    /// 批量查询预检查结果请求列表。 约束：不能包含空对象。集合中的元素取值严格匹配UUID规则。任务id不能重复。
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryPrecheckResultReq_H_
