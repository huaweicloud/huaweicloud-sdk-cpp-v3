
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplatesInfoResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplatesInfoResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/YamlTemplate.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAutoSearchYamlTemplatesInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoSearchYamlTemplatesInfoResponse();
    virtual ~ShowAutoSearchYamlTemplatesInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSearchYamlTemplatesInfoResponse members

    /// <summary>
    /// 所有yaml文件的目录和文件名信息。
    /// </summary>

    std::vector<YamlTemplate>& getYamlTemplates();
    bool yamlTemplatesIsSet() const;
    void unsetyamlTemplates();
    void setYamlTemplates(const std::vector<YamlTemplate>& value);


protected:
    std::vector<YamlTemplate> yamlTemplates_;
    bool yamlTemplatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplatesInfoResponse_H_
