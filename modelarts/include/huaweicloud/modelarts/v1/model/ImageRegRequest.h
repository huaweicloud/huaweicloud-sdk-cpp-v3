
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageRegRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageRegRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ImageRegRequest
    : public ModelBase
{
public:
    ImageRegRequest();
    virtual ~ImageRegRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageRegRequest members

    /// <summary>
    /// **参数解释**：该镜像所支持处理器架构类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - X86_64：x86处理器架构。 - AARCH64：ARM体系架构。  **默认取值**：X86_64。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：该镜像所对应的描述信息。 **约束限制**：不涉及。 **取值范围**：长度限制512个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：指定镜像来源，可选项。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - CUSTOMIZE: 用户自定义构建镜像。 - IMAGE_SAVE：Notebook实例保存镜像。  **默认取值**：CUSTOMIZE。
    /// </summary>

    std::string getOrigin() const;
    bool originIsSet() const;
    void unsetorigin();
    void setOrigin(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像支持的规格，默认值CPU、GPU。 枚举值如下： - CPU - GPU - [ASCEND](tag:hc,hk,fcs_super)。  **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getResourceCategory();
    bool resourceCategoryIsSet() const;
    void unsetresourceCategory();
    void setResourceCategory(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：镜像支持服务类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - COMMON：通用镜像。 - INFERENCE: 建议仅在推理部署场景使用。 - TRAIN: 建议仅在训练任务场景使用。 - DEV: 建议仅在开发调测场景使用。 - UNKNOWN: 未明确设置的镜像支持的服务类型。  **默认取值**：UNKNOWN。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像支持的服务，默认值NOTEBOOK、SSH。枚举值如下: - NOTEBOOK：镜像支持通过https协议访问Notebook。 - SSH：镜像支持本地IDE通过SSH协议远程连接Notebook。  **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getServices();
    bool servicesIsSet() const;
    void unsetservices();
    void setServices(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：SWR镜像地址。 **约束限制**：不涉及。 **取值范围**：长度最长为2048个字符，最短为16个字符，地址格式为：[仓库地址[:端口]]/[命名空间]/[镜像名称]:[标签]。 **默认取值**：不涉及。
    /// </summary>

    std::string getSwrPath() const;
    bool swrPathIsSet() const;
    void unsetswrPath();
    void setSwrPath(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像可见度。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - PRIVATE：私有镜像。 - PUBLIC: 所有用户可以根据image_id来进行只读使用。  **默认取值**：PRIVATE。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：0或32位仅包含字符0-9或小写字母a-z的字符串。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： -ASCEND_SNT9：昇腾910芯片。 -ASCEND_SNT9B：昇腾910B芯片。 -ASCEND_SNT3：昇腾310芯片。  **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// **参数解释**：该镜像所属镜像组对应的标签。 **约束限制**：最大支持20个标签。 **取值范围**：key值最大支持长度128，value值最大支持255。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：企业版SWR仓库ID。 **参数约束**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSwrInstanceId() const;
    bool swrInstanceIdIsSet() const;
    void unsetswrInstanceId();
    void setSwrInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像指导。 **参数约束**：不涉及。 **取值范围**：字符串长度限制为3000个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getReadMe() const;
    bool readMeIsSet() const;
    void unsetreadMe();
    void setReadMe(const std::string& value);


protected:
    std::string arch_;
    bool archIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string origin_;
    bool originIsSet_;
    std::vector<std::string> resourceCategory_;
    bool resourceCategoryIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::vector<std::string> services_;
    bool servicesIsSet_;
    std::string swrPath_;
    bool swrPathIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string swrInstanceId_;
    bool swrInstanceIdIsSet_;
    std::string readMe_;
    bool readMeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageRegRequest_H_
