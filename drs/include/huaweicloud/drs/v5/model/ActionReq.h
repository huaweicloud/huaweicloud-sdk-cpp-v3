
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ActionParams.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试连接、预检查、启动、暂停、续传、重置、对比、结束等操作任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ActionReq
    : public ModelBase
{
public:
    ActionReq();
    virtual ~ActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionReq members

    /// <summary>
    /// 任务ID (对比任务相关操作，多任务场景传父任务详情返回的master_job_id)，批量操作时必填
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 操作任务动作名称。取值： - network：测试连接源库/目标库。 - precheck：执行预检查。 - start：启动任务。 - stop：暂停任务。 - restart：重试任务。 - reset：重置任务。 - terminate：结束任务。 - skip_precheck：跳过预检查。 - create_compare：创建对比任务。 - cancel_compare：取消对比任务。
    /// </summary>

    std::string getActionName() const;
    bool actionNameIsSet() const;
    void unsetactionName();
    void setActionName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ActionParams getActionParams() const;
    bool actionParamsIsSet() const;
    void unsetactionParams();
    void setActionParams(const ActionParams& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string actionName_;
    bool actionNameIsSet_;
    ActionParams actionParams_;
    bool actionParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionReq_H_
