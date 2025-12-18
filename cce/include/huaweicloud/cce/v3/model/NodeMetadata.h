
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>
#include <huaweicloud/cce/v3/model/NodeMetadata_ownerReferences.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeMetadata
    : public ModelBase
{
public:
    NodeMetadata();
    virtual ~NodeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeMetadata members

    /// <summary>
    /// **参数解释**： 节点名称 **约束限制**： - 命名规则：以小写字母开头，由小写字母、数字、中划线(-)、点(.)组成，长度范围1-56位，且不能以中划线(-)结尾。 - 若name未指定或指定为空字符串，则按照默认规则生成节点名称。默认规则为：“集群名称-随机字符串”，若集群名称过长，则只取前36个字符。 - 若节点数量(count)大于1时，则按照默认规则会在用户输入的节点名称末尾添加随机字符串。默认规则为：“用户输入名称-随机字符串”，若用户输入的节点名称长度范围超过50位时，系统截取前50位，并在末尾添加随机字符串。  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点ID，资源唯一标识。 **约束限制**： 创建成功后自动生成，填写无效 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// **参数解释**： CCE自有节点标签，非Kubernetes原生labels。 &gt; 标签可用于选择对象并查找满足某些条件的对象集合，格式为key/value键值对。  **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及  示例：  &#x60;&#x60;&#x60; \&quot;labels\&quot;: {   \&quot;key\&quot; : \&quot;value\&quot; } &#x60;&#x60;&#x60;
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： CCE自有节点注解，非Kubernetes原生annotations，格式为key/value键值对。 &gt; Annotations不用于标识和选择对象。Annotations中的元数据可以是small或large，structured或unstructured，并且可以包括标签不允许使用的字符。  **约束限制**： 仅用于查询，不支持请求时传入，填写无效。 **取值范围**： 不涉及 **默认取值**： 不涉及  示例： &#x60;&#x60;&#x60; \&quot;annotations\&quot;: {   \&quot;key1\&quot; : \&quot;value1\&quot;,   \&quot;key2\&quot; : \&quot;value2\&quot; } &#x60;&#x60;&#x60; 
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 节点创建时间。 **约束限制**： 创建成功后自动生成，填写无效。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点更新时间。 **约束限制**： 创建成功后自动生成，填写无效。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeMetadata_ownerReferences getOwnerReferences() const;
    bool ownerReferencesIsSet() const;
    void unsetownerReferences();
    void setOwnerReferences(const NodeMetadata_ownerReferences& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    NodeMetadata_ownerReferences ownerReferences_;
    bool ownerReferencesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeMetadata_H_
