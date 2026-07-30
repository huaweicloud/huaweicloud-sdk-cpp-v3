
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogExportPath_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogExportPath_H_


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
/// 训练作业日志输出信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LogExportPath
    : public ModelBase
{
public:
    LogExportPath();
    virtual ~LogExportPath();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogExportPath members

    /// <summary>
    /// 训练作业日志保存的OBS地址，如：“obs://example/path”。
    /// </summary>

    std::string getObsUrl() const;
    bool obsUrlIsSet() const;
    void unsetobsUrl();
    void setObsUrl(const std::string& value);

    /// <summary>
    /// 训练作业日志保存的宿主机的路径，如：“/example/path”。
    /// </summary>

    std::string getHostPath() const;
    bool hostPathIsSet() const;
    void unsethostPath();
    void setHostPath(const std::string& value);


protected:
    std::string obsUrl_;
    bool obsUrlIsSet_;
    std::string hostPath_;
    bool hostPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogExportPath_H_
