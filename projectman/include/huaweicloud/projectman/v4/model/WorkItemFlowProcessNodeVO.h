
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowProcessNodeVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowProcessNodeVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowNodeConfigVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流节点信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowProcessNodeVO
    : public ModelBase
{
public:
    WorkItemFlowProcessNodeVO();
    virtual ~WorkItemFlowProcessNodeVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowProcessNodeVO members

    /// <summary>
    /// 节点ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 节点类别
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 工作流实例ID
    /// </summary>

    std::string getProcessInstanceId() const;
    bool processInstanceIdIsSet() const;
    void unsetprocessInstanceId();
    void setProcessInstanceId(const std::string& value);

    /// <summary>
    /// 工作流活动ID
    /// </summary>

    std::string getWorkflowActivityId() const;
    bool workflowActivityIdIsSet() const;
    void unsetworkflowActivityId();
    void setWorkflowActivityId(const std::string& value);

    /// <summary>
    /// 节点编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowNodeConfigVO getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const WorkItemFlowNodeConfigVO& value);

    /// <summary>
    /// 是否允许挂起
    /// </summary>

    bool isEnableSuspend() const;
    bool enableSuspendIsSet() const;
    void unsetenableSuspend();
    void setEnableSuspend(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string processInstanceId_;
    bool processInstanceIdIsSet_;
    std::string workflowActivityId_;
    bool workflowActivityIdIsSet_;
    std::string code_;
    bool codeIsSet_;
    WorkItemFlowNodeConfigVO config_;
    bool configIsSet_;
    bool enableSuspend_;
    bool enableSuspendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowProcessNodeVO_H_
