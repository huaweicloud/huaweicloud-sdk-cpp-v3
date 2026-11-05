
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_image_warm_up_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_image_warm_up_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigSpec_configs_image_warm_up
    : public ModelBase
{
public:
    NodeconfigSpec_configs_image_warm_up();
    virtual ~NodeconfigSpec_configs_image_warm_up();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigSpec_configs_image_warm_up members

    /// <summary>
    /// **参数解释**：镜像预热任务ID。 **约束限制**：系统自动生成。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像预热任务名称。 **约束限制**：由4~32位小写字母、数字或\&quot;-\&quot;组成。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像预热任务的创建时间。 **约束限制**：系统自动填充。 **取值范围**：RFC3339格式时间。 **默认取值**：不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像类型。 **约束限制**：不涉及。 **取值范围**：SWR。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：需要预热的镜像地址。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string image_;
    bool imageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_image_warm_up_H_
