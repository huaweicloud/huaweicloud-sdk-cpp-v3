
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListImageRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListImageRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListImageRequest
    : public ModelBase
{
public:
    ListImageRequest();
    virtual ~ListImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListImageRequest members

    /// <summary>
    /// **参数解释**：每一页显示的镜像实例数量。 **约束限制**：不涉及。 **取值范围**：正整数。 **默认取值**：200。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：镜像名称。 **约束限制**：不涉及。 **取值范围**：长度限制为512个字符，支持小写字母、数字、中划线、下划线和点。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像名称是否模糊匹配查询。 **约束限制**：不涉及。 **取值范围**：布尔类型： - true：支持模糊匹配查询。 - false：不支持模糊匹配查询。  **默认取值**：true。
    /// </summary>

    bool isNameFuzzyMatch() const;
    bool nameFuzzyMatchIsSet() const;
    void unsetnameFuzzyMatch();
    void setNameFuzzyMatch(bool value);

    /// <summary>
    /// **参数解释**：镜像所属组织，可以在SWR控制台“组织管理”创建和查看。 **约束限制**：不涉及。 **取值范围**：长度限制为64个字符，支持大小写字母、数字、中划线、下划线和点号，且必须是小写字母开头。 **默认取值**：不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**：分页记录的起始位置偏移量。 **约束限制**：不涉及。 **取值范围**：非负整数。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：镜像支持服务类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - COMMON：通用镜像。 - INFERENCE: 建议仅在推理部署场景使用。 - TRAIN: 建议仅在训练任务场景使用。 - DEV: 建议仅在开发调测场景使用。 - UNKNOWN: 未明确设置的镜像支持的服务类型。  **默认取值**：UNKNOWN。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释**：实例排序方式。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - ASC：升序 - DESC：降序  **默认取值**：DESC。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**：排序的字段，多个字段使用(“,”)逗号分隔。 **约束限制**：不涉及。 **取值范围**：长度限制为128个字符，支持大小写字母、数字、中划线、下划线和逗号。 **默认取值**：不涉及。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - BUILD_IN：系统内置镜像。 - DEDICATED：用户保存的镜像。  **默认取值**：BUILD_IN。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：0或32位仅包含字符0-9或小写字母a-z的字符串。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像展示name。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getShowName() const;
    bool showNameIsSet() const;
    void unsetshowName();
    void setShowName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像展示Tag。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getShowTag() const;
    bool showTagIsSet() const;
    void unsetshowTag();
    void setShowTag(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool nameFuzzyMatch_;
    bool nameFuzzyMatchIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string showName_;
    bool showNameIsSet_;
    std::string showTag_;
    bool showTagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListImageRequest& dereference_from_shared_ptr(std::shared_ptr<ListImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListImageRequest_H_
