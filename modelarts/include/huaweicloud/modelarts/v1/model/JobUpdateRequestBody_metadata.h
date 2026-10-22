
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_metadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_metadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// **参数解释**：训练作业元信息。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobUpdateRequestBody_metadata
    : public ModelBase
{
public:
    JobUpdateRequestBody_metadata();
    virtual ~JobUpdateRequestBody_metadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobUpdateRequestBody_metadata members

    /// <summary>
    /// **参数解释**：训练作业高级功能配置。可选取值如下：   - \&quot;jupyter-lab/enable\&quot;: \&quot;true\&quot;（JupyterLab训练应用程序） **约束限制**：不涉及。
    /// </summary>

    std::map<std::string, std::string>& getAnnotation();
    bool annotationIsSet() const;
    void unsetannotation();
    void setAnnotation(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> annotation_;
    bool annotationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_metadata_H_
