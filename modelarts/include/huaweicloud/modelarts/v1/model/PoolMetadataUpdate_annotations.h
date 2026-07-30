
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_annotations_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_annotations_H_


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
/// **参数解释**：资源池的注释信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetadataUpdate_annotations
    : public ModelBase
{
public:
    PoolMetadataUpdate_annotations();
    virtual ~PoolMetadataUpdate_annotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetadataUpdate_annotations members

    /// <summary>
    /// **参数解释**：资源池描述信息，用于说明资源池用于某种指定场景。不能包含特殊字符!&lt;&gt;&#x3D;&amp;\&quot;&#39;。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsDescription() const;
    bool osModelartsDescriptionIsSet() const;
    void unsetosModelartsDescription();
    void setOsModelartsDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：订单id，包周期创建和变更的时候需要传递该参数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsOrderId() const;
    bool osModelartsOrderIdIsSet() const;
    void unsetosModelartsOrderId();
    void setOsModelartsOrderId(const std::string& value);


protected:
    std::string osModelartsDescription_;
    bool osModelartsDescriptionIsSet_;
    std::string osModelartsOrderId_;
    bool osModelartsOrderIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_annotations_H_
