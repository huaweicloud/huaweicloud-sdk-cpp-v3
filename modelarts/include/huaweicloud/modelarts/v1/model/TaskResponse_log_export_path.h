
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponse_log_export_path_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponse_log_export_path_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：训练作业日志保存信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskResponse_log_export_path
    : public ModelBase
{
public:
    TaskResponse_log_export_path();
    virtual ~TaskResponse_log_export_path();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskResponse_log_export_path members

    /// <summary>
    /// **参数解释**：训练作业日志保存OBS路径。
    /// </summary>

    std::string getObsUrl() const;
    bool obsUrlIsSet() const;
    void unsetobsUrl();
    void setObsUrl(const std::string& value);


protected:
    std::string obsUrl_;
    bool obsUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponse_log_export_path_H_
