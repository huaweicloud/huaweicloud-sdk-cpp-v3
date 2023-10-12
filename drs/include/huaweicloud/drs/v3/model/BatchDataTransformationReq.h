
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDataTransformationReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDataTransformationReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CheckDataTransformationReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量数据加工规则请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchDataTransformationReq
    : public ModelBase
{
public:
    BatchDataTransformationReq();
    virtual ~BatchDataTransformationReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDataTransformationReq members

    /// <summary>
    /// 批量数据加工规则请求列表
    /// </summary>

    std::vector<CheckDataTransformationReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<CheckDataTransformationReq>& value);


protected:
    std::vector<CheckDataTransformationReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDataTransformationReq_H_
