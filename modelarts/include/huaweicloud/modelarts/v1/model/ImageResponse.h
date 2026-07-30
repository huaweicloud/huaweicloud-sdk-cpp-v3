
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/TmsTagResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例镜像信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ImageResponse
    : public ModelBase
{
public:
    ImageResponse();
    virtual ~ImageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageResponse members

    /// <summary>
    /// **参数解释**：该镜像所支持处理器架构类型。 **取值范围**：枚举类型，取值如下： - X86_64：x86处理器架构。 - AARCH64：ARM体系架构。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像创建的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：该镜像所对应的描述信息，长度限制512个字符。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像支持的服务。元素为枚举类型，取值如下： - NOTEBOOK：镜像支持通过https协议访问Notebook。 - SSH：镜像支持本地IDE通过SSH协议远程连接Notebook。
    /// </summary>

    std::vector<std::string>& getDevServices();
    bool devServicesIsSet() const;
    void unsetdevServices();
    void setDevServices(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：待创建Notebook实例的镜像，需要指定镜像ID，ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID）。预置镜像的ID参考[查询支持的镜像列表](ListImage.xml)获取。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像名称。 **取值范围**：长度限制512个字符，支持小写字母、数字、中划线、下划线和点。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像所属组织，可以在SWR控制台“组织管理”创建和查看。 **取值范围**：不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**：指定镜像来源。 **取值范围**：枚举类型，取值如下： - CUSTOMIZE: 用户自定义构建镜像。 - IMAGE_SAVE：Notebook实例保存镜像。
    /// </summary>

    std::string getOrigin() const;
    bool originIsSet() const;
    void unsetorigin();
    void setOrigin(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像支持的规格。元素为枚举类型，取值如下： - CPU - GPU - [ASCEND](tag:hc,hk,fcs_super)
    /// </summary>

    std::vector<std::string>& getResourceCategories();
    bool resourceCategoriesIsSet() const;
    void unsetresourceCategories();
    void setResourceCategories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：镜像支持服务类型。 **取值范围**：枚举类型，取值如下： - COMMON：通用镜像。 - INFERENCE: 建议仅在推理部署场景使用。 - TRAIN: 建议仅在训练任务场景使用。 - DEV: 建议仅在开发调测场景使用。 - UNKNOWN: 未明确设置的镜像支持的服务类型。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像大小（单位KB）。 **取值范围**：不涉及。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// **参数解释**：镜像状态。 **取值范围**：枚举类型，取值如下： - INIT：初始化。 - CREATING：镜像保存中，此时Notebook不可用。 - CREATE_FAILED：镜像保存失败。 - ERROR：错误。 - DELETED：已删除。 - ACTIVE：镜像保存成功，保存的镜像可以在SWR控制台查看，同时可以基于保存的镜像创建Notebook实例。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像保存操作过程中，构建信息展示。 **取值范围**：不涉及。
    /// </summary>

    std::string getStatusMessage() const;
    bool statusMessageIsSet() const;
    void unsetstatusMessage();
    void setStatusMessage(const std::string& value);

    /// <summary>
    /// **参数解释**：SWR镜像地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getSwrPath() const;
    bool swrPathIsSet() const;
    void unsetswrPath();
    void setSwrPath(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像Tag。 **取值范围**：不涉及。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像类型。 **取值范围**：枚举类型，取值如下： - BUILD_IN：系统内置镜像。 - DEDICATED：用户保存的镜像。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像最后更新的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释**：镜像可见度。 **取值范围**：枚举类型，取值如下： - PRIVATE：私有镜像。 - PUBLIC: 所有用户可以根据image_id来进行只读使用。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像的资源类型。 **取值范围**：枚举类型，取值如下： -ASCEND_SNT9：昇腾910芯片。 -ASCEND_SNT9B：昇腾910B芯片。 -ASCEND_SNT3：昇腾310芯片。
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// **参数解释**：SWR企业仓库ID。未使用SWR企业仓时该字段为null。 **约束限制**：不涉及。 **取值范围**：128位UUID。 **默认取值**：null。
    /// </summary>

    std::string getSwrInstanceId() const;
    bool swrInstanceIdIsSet() const;
    void unsetswrInstanceId();
    void setSwrInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像展示名称，仅预置镜像具备该字段。
    /// </summary>

    std::string getShowName() const;
    bool showNameIsSet() const;
    void unsetshowName();
    void setShowName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像展示版本号，仅预置镜像具备该字段。
    /// </summary>

    std::string getShowTag() const;
    bool showTagIsSet() const;
    void unsetshowTag();
    void setShowTag(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像标签。
    /// </summary>

    std::vector<TmsTagResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTagResponse>& value);


protected:
    std::string arch_;
    bool archIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> devServices_;
    bool devServicesIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string origin_;
    bool originIsSet_;
    std::vector<std::string> resourceCategories_;
    bool resourceCategoriesIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusMessage_;
    bool statusMessageIsSet_;
    std::string swrPath_;
    bool swrPathIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;
    std::string swrInstanceId_;
    bool swrInstanceIdIsSet_;
    std::string showName_;
    bool showNameIsSet_;
    std::string showTag_;
    bool showTagIsSet_;
    std::vector<TmsTagResponse> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageResponse_H_
