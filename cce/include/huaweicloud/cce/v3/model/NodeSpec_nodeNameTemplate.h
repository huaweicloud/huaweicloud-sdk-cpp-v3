
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpec_nodeNameTemplate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpec_nodeNameTemplate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 节点名称固定前后缀配置参数。假设集群内不同节点池被用户所在公司不同部门使用，可以通过前后缀的名称区分部门和使用方式，如设置nodeNamePrefix为finance-，代表部门名称，nodeNameSuffix为-product，代表生产使用，节点池名称为gpu，代表业务类型，则最终的节点名称为finance-gpu(五位随机数)-product **约束限制**： 仅 v1.28.1/v1.27.3/v1.25.6/v1.23.11/v1.21.12 及以上集群支持配置节点名称固定前后缀，该配置参数仅在节点池场景有效 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeSpec_nodeNameTemplate
    : public ModelBase
{
public:
    NodeSpec_nodeNameTemplate();
    virtual ~NodeSpec_nodeNameTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSpec_nodeNameTemplate members

    /// <summary>
    /// **参数解释**： 节点名称前缀。如果用户填写为空串或缺省，则节点名称不会增加前缀。 **约束限制**： 仅支持小写字母、数字、连字符（-）和点（.），必须以小写字母开头，并且符合[FRC 1123](https://tools.ietf.org/html/rfc1123)中定义的DNS子域名命名规范。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getNodeNamePrefix() const;
    bool nodeNamePrefixIsSet() const;
    void unsetnodeNamePrefix();
    void setNodeNamePrefix(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点名称后缀。如果用户填写为空串或缺省，则节点名称不会增加后缀。 **约束限制**： 仅支持小写字母、数字、连字符（-）和点（.），后缀结尾必须为小写字母或者数字，并且符合[FRC 1123](https://tools.ietf.org/html/rfc1123)中定义的DNS子域名命名规范。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getNodeNameSuffix() const;
    bool nodeNameSuffixIsSet() const;
    void unsetnodeNameSuffix();
    void setNodeNameSuffix(const std::string& value);


protected:
    std::string nodeNamePrefix_;
    bool nodeNamePrefixIsSet_;
    std::string nodeNameSuffix_;
    bool nodeNameSuffixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpec_nodeNameTemplate_H_
