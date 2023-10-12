
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobActionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobActionReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ActionReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作单个任务请求体，支持测试连接、预检查、启动、暂停、续传、重置、对比、结束等操作。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobActionReq
    : public ModelBase
{
public:
    JobActionReq();
    virtual ~JobActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobActionReq members

    /// <summary>
    /// 
    /// </summary>

    ActionReq getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const ActionReq& value);


protected:
    ActionReq job_;
    bool jobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobActionReq_H_
