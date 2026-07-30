
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Summary_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Summary_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/LogDir.h>
#include <huaweicloud/modelarts/v1/model/DataSource.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可视化日志summary。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Summary
    : public ModelBase
{
public:
    Summary();
    virtual ~Summary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Summary members

    /// <summary>
    /// **参数解释**：训练作业可视化日志类型，配置后训练作业可作为可视化作业数据源。 **约束限制**：不涉及。 **取值范围**： - tensorboard：输出TensorBoard可视化工具类型的日志 - mindstudio-insight：输出mindstudio-insight可视化工具类型的日志  **默认取值**：不涉及。
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LogDir getLogDir() const;
    bool logDirIsSet() const;
    void unsetlogDir();
    void setLogDir(const LogDir& value);

    /// <summary>
    /// **参数解释**：可视化作业或训练作业调试模式的可视化日志输入。 **约束限制**：训练作业高级功能开启\&quot;tensorboard/enable\&quot;: \&quot;true\&quot;或\&quot;mindstudio-insight/enable\&quot;: \&quot;true\&quot;时必填。
    /// </summary>

    std::vector<DataSource>& getDataSources();
    bool dataSourcesIsSet() const;
    void unsetdataSources();
    void setDataSources(const std::vector<DataSource>& value);


protected:
    std::string logType_;
    bool logTypeIsSet_;
    LogDir logDir_;
    bool logDirIsSet_;
    std::vector<DataSource> dataSources_;
    bool dataSourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Summary_H_
