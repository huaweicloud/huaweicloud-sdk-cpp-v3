
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolMetadata
    : public ModelBase
{
public:
    NodePoolMetadata();
    virtual ~NodePoolMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolMetadata members

    /// <summary>
    /// 节点名池名称。  &gt; 命名规则： &gt; &gt;  - 以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围1-50位，且不能以中划线(-)结尾。 &gt; &gt;  - 不允许创建名为 DefaultPool 的节点池。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点池的uid。创建成功后自动生成，填写无效
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 节点池的注解，以key value对表示。仅用于查询，不支持请求时传入，填写无效。 
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点池最后更新时间的时间戳。 **约束限制**： 创建节点池时自动记录，不支持传入。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getResourceVersion() const;
    bool resourceVersionIsSet() const;
    void unsetresourceVersion();
    void setResourceVersion(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    int32_t resourceVersion_;
    bool resourceVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolMetadata_H_
