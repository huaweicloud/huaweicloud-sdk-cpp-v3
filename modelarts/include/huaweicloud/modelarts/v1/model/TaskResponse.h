
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/FlavorResponse.h>
#include <huaweicloud/modelarts/v1/model/TaskResponse_log_export_path.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/TaskResponseAlgorithm.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskResponse
    : public ModelBase
{
public:
    TaskResponse();
    virtual ~TaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskResponse members

    /// <summary>
    /// 任务角色，该功能暂未支持。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskResponseAlgorithm getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const TaskResponseAlgorithm& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorResponse getTaskResource() const;
    bool taskResourceIsSet() const;
    void unsettaskResource();
    void setTaskResource(const FlavorResponse& value);

    /// <summary>
    /// 
    /// </summary>

    TaskResponse_log_export_path getLogExportPath() const;
    bool logExportPathIsSet() const;
    void unsetlogExportPath();
    void setLogExportPath(const TaskResponse_log_export_path& value);


protected:
    std::string role_;
    bool roleIsSet_;
    TaskResponseAlgorithm algorithm_;
    bool algorithmIsSet_;
    FlavorResponse taskResource_;
    bool taskResourceIsSet_;
    TaskResponse_log_export_path logExportPath_;
    bool logExportPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponse_H_
