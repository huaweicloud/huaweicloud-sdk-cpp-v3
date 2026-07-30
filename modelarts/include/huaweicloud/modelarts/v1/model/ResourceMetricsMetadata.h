
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceMetricsMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceMetricsMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceMetricsMetadata
    : public ModelBase
{
public:
    ResourceMetricsMetadata();
    virtual ~ResourceMetricsMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceMetricsMetadata members

    /// <summary>
    /// **参数解释**：资源指标的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源指标的标签信息
    /// </summary>

    Object getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object labels_;
    bool labelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceMetricsMetadata_H_
