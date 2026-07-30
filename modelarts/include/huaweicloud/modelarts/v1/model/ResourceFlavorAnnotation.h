
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorAnnotation_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorAnnotation_H_


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
/// 资源规格metadata的注释信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorAnnotation
    : public ModelBase
{
public:
    ResourceFlavorAnnotation();
    virtual ~ResourceFlavorAnnotation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorAnnotation members

    /// <summary>
    /// **参数解释**：资源规格支持的私有镜像的过滤条件。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsFlavorImageFilter() const;
    bool osModelartsFlavorImageFilterIsSet() const;
    void unsetosModelartsFlavorImageFilter();
    void setOsModelartsFlavorImageFilter(const std::string& value);


protected:
    std::string osModelartsFlavorImageFilter_;
    bool osModelartsFlavorImageFilterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorAnnotation_H_
