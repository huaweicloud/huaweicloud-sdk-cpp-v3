
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowScheduleResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowScheduleResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/WorkflowSchedulePolicies.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateWorkflowScheduleResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateWorkflowScheduleResponse();
    virtual ~CreateWorkflowScheduleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWorkflowScheduleResponse members

    /// <summary>
    /// 类型，仅支持time（时间）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 内容。
    /// </summary>

    std::map<std::string, Object>& getContent();
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::map<std::string, Object>& value);

    /// <summary>
    /// 动作，仅支持run。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// Workflow工作流ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 定时调度信息，使能标记。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// ID标记。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowSchedulePolicies getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const WorkflowSchedulePolicies& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, Object> content_;
    bool contentIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    WorkflowSchedulePolicies policies_;
    bool policiesIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkflowScheduleResponse_H_
