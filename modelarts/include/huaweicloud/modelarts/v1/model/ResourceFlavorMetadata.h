
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ResourceFlavorLabel.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ResourceFlavorAnnotation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：资源规格的元信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorMetadata
    : public ModelBase
{
public:
    ResourceFlavorMetadata();
    virtual ~ResourceFlavorMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorMetadata members

    /// <summary>
    /// **参数解释**：资源规格的ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorLabel getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const ResourceFlavorLabel& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorAnnotation getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const ResourceFlavorAnnotation& value);


protected:
    std::string name_;
    bool nameIsSet_;
    ResourceFlavorLabel labels_;
    bool labelsIsSet_;
    ResourceFlavorAnnotation annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorMetadata_H_
