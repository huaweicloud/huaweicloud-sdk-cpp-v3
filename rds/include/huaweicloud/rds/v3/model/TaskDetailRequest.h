
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TaskDetailRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TaskDetailRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取任务信息请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TaskDetailRequest
    : public ModelBase
{
public:
    TaskDetailRequest();
    virtual ~TaskDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskDetailRequest members

    /// <summary>
    /// 任务流ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 任务名
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workflowName_;
    bool workflowNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TaskDetailRequest_H_
