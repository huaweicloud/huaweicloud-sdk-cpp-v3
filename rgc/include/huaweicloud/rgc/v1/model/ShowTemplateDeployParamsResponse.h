
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowTemplateDeployParamsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowTemplateDeployParamsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/TemplateParamVariable.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowTemplateDeployParamsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTemplateDeployParamsResponse();
    virtual ~ShowTemplateDeployParamsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTemplateDeployParamsResponse members

    /// <summary>
    /// 模板的部署参数。
    /// </summary>

    std::vector<TemplateParamVariable>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<TemplateParamVariable>& value);


protected:
    std::vector<TemplateParamVariable> variables_;
    bool variablesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowTemplateDeployParamsResponse_H_
