
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_configs_image_warm_up_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_configs_image_warm_up_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigUpdate_spec_configs_image_warm_up
    : public ModelBase
{
public:
    NodeconfigUpdate_spec_configs_image_warm_up();
    virtual ~NodeconfigUpdate_spec_configs_image_warm_up();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigUpdate_spec_configs_image_warm_up members

    /// <summary>
    /// **参数解释**：镜像预热任务ID。 **约束限制**：选填。新增任务时无需填写，系统自动生成；格式为image-warm-up-task-&lt;uuid&gt;。删除已有任务时必须填写，通过id标识区分。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像预热任务名称。 **约束限制**：必填。由4~32位小写字母、数字或\&quot;-\&quot;组成，以字母开头、以字母或数字结尾；同一请求内任务名称不可重复。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像预热任务的创建时间。 **约束限制**：选填。新增任务时无需填写，系统自动填充为当前时间。 **取值范围**：RFC3339格式时间，例如2026-08-14T19:53:27+08:00。 **默认取值**：不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像类型。 **约束限制**：必填。指定镜像的来源类型。 **取值范围**：可选值如下： - SWR：华为云容器镜像服务。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：需要预热的镜像地址，例如swr.xxx.com/namespace/repository:v1.0。 **约束限制**：必填。同一请求内镜像地址不可重复。 **取值范围**：不涉及。 **默认取值**：不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_configs_image_warm_up_H_
