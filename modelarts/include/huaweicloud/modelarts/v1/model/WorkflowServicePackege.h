
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowServicePackege_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowServicePackege_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowPoolOrder.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// service package
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowServicePackege
    : public ModelBase
{
public:
    WorkflowServicePackege();
    virtual ~WorkflowServicePackege();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowServicePackege members

    /// <summary>
    /// 资源包的UUID。
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// 资源包状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 资源池ID。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// 服务ID。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// Workflow工作流ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowPoolOrder getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const WorkflowPoolOrder& value);

    /// <summary>
    /// 订阅限制。
    /// </summary>

    int64_t getConsumeLimit() const;
    bool consumeLimitIsSet() const;
    void unsetconsumeLimit();
    void setConsumeLimit(int64_t value);

    /// <summary>
    /// 当前订阅。
    /// </summary>

    int64_t getCurrentConsume() const;
    bool currentConsumeIsSet() const;
    void unsetcurrentConsume();
    void setCurrentConsume(int64_t value);

    /// <summary>
    /// 当前时间。
    /// </summary>

    std::string getCurrentDate() const;
    bool currentDateIsSet() const;
    void unsetcurrentDate();
    void setCurrentDate(const std::string& value);

    /// <summary>
    /// 限制标记。
    /// </summary>

    bool isLimitEnable() const;
    bool limitEnableIsSet() const;
    void unsetlimitEnable();
    void setLimitEnable(bool value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    std::string packageId_;
    bool packageIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;
    WorkflowPoolOrder order_;
    bool orderIsSet_;
    int64_t consumeLimit_;
    bool consumeLimitIsSet_;
    int64_t currentConsume_;
    bool currentConsumeIsSet_;
    std::string currentDate_;
    bool currentDateIsSet_;
    bool limitEnable_;
    bool limitEnableIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowServicePackege_H_
