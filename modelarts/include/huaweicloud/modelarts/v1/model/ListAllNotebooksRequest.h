
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAllNotebooksRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAllNotebooksRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAllNotebooksRequest
    : public ModelBase
{
public:
    ListAllNotebooksRequest();
    virtual ~ListAllNotebooksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllNotebooksRequest members

    /// <summary>
    /// **参数解释**：实例类别。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - DEFAULT：CodeLab免费规格实例，每个用户最多只能创建一个。 - NOTEBOOK：计费规格实例。  **默认取值**：NOTEBOOK。
    /// </summary>

    std::string getFeature() const;
    bool featureIsSet() const;
    void unsetfeature();
    void setFeature(const std::string& value);

    /// <summary>
    /// **参数解释**：每一页显示实例的数量。 **约束限制**：不涉及。 **取值范围**：[10,20,50]。 **默认取值**：10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：实例名称，支持模糊匹配查询。 **约束限制**：不涉及。 **取值范围**：长度限制128个字符，支持大小写字母、数字、中划线和下划线。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：专属资源池ID，获取方法请参见[查询资源池列表](ListPools.xml)。 **约束限制**：不涉及。 **取值范围**：长度最长为64个字符，最短为4个字符，支持小写字母、数字、中划线，且必须是小写字母开头，小写字母或数字结尾。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释**：分页记录的起始位置偏移量。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：实例归属的用户ID，在大账号/有admin权限场景下生效，值通常为当前登录用户ID。 **约束限制**：不涉及。 **取值范围**：长度为32位小写字母、数字。 **默认取值**：不涉及。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

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
    /// **参数解释**：实例状态。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - INIT：初始化 - CREATING：创建中 - STARTING：启动中 - STOPPING：停止中 - DELETING：删除中 - RUNNING：运行中 - STOPPED：已停止 - SNAPSHOTTING：快照中(保存镜像时的状态) - CREATE_FAILED：创建失败 - START_FAILED：启动失败 - DELETE_FAILED：删除失败 - ERROR：错误 - DELETED：已删除 - FROZEN：冻结  **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。获取方法请参见[[查询工作空间列表](ListWorkspace.xml)](tag:hc,hk)。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例的机器规格。如下规格仅供参考，实际支持的规格以具体区域为准。 modelarts.vm.cpu.2u：Intel CPU通用规格，用于快速数据探索和实验。 modelarts.vm.cpu.8u：Intel CPU算力增强型，适用于密集计算场景下运算。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：待创建Notebook实例的镜像，需要指定镜像ID。ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID）。镜像的ID可通过调用[[查询支持的镜像列表](https://support.huaweicloud.com/api-modelarts/ListImage.html)](tag:hc)[[查询支持的镜像列表](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListImage.html)](tag:hk)接口获取。 **约束限制**：不涉及。 **取值范围**：调用[[查询支持的镜像列表](https://support.huaweicloud.com/api-modelarts/ListImage.html)](tag:hc)[[查询支持的镜像列表](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListImage.html)](tag:hk)接口获取的合法镜像ID列表。 **默认取值**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：Notebook实例ID。ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID），可通过调用[[查询Notebook实例列表接口](https://support.huaweicloud.com/api-modelarts/ListNotebooks.html#section0)](tag:hc)[[查询Notebook实例列表接口](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListNotebooks.html#section0)](tag:hk)获取。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：实例计费类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - COMPUTE：计算资源计费 - STORAGE：存储资源计费 - ALL：所有计费类型  **默认取值**：不涉及。
    /// </summary>

    std::string getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const std::string& value);

    /// <summary>
    /// **参数解释**：实例标签信息。 **约束限制**：不涉及。 **取值范围**：不以逗号，竖划线开头，不以逗号结尾，不出现连续的竖划线和逗号，允许中文、西文、葡文等语言以及空格_.:/&#x3D;+-@特殊字符，且字符间以逗号或者竖划线分割。 **默认取值**：不涉及。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


protected:
    std::string feature_;
    bool featureIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string billing_;
    bool billingIsSet_;
    std::string tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAllNotebooksRequest& dereference_from_shared_ptr(std::shared_ptr<ListAllNotebooksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAllNotebooksRequest_H_
