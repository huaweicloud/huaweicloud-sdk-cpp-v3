
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Task_task_resource.h>
#include <huaweicloud/modelarts/v1/model/Task_algorithm.h>
#include <huaweicloud/modelarts/v1/model/Task_log_export_path.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业的任务列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Task
    : public ModelBase
{
public:
    Task();
    virtual ~Task();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task members

    /// <summary>
    /// **参数解释**：任务角色，该功能暂未支持。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Task_algorithm getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const Task_algorithm& value);

    /// <summary>
    /// 
    /// </summary>

    Task_task_resource getTaskResource() const;
    bool taskResourceIsSet() const;
    void unsettaskResource();
    void setTaskResource(const Task_task_resource& value);

    /// <summary>
    /// 
    /// </summary>

    Task_log_export_path getLogExportPath() const;
    bool logExportPathIsSet() const;
    void unsetlogExportPath();
    void setLogExportPath(const Task_log_export_path& value);


protected:
    std::string role_;
    bool roleIsSet_;
    Task_algorithm algorithm_;
    bool algorithmIsSet_;
    Task_task_resource taskResource_;
    bool taskResourceIsSet_;
    Task_log_export_path logExportPath_;
    bool logExportPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_H_
