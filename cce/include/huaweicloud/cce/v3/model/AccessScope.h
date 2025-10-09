
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AccessScope_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AccessScope_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CCE_V3_EXPORT  AccessScope
    : public ModelBase
{
public:
    AccessScope();
    virtual ~AccessScope();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessScope members

    /// <summary>
    /// **参数解释：** 集群命名空间的列表，允许使用通配符（“\\*”），表示所有命名空间。当选择了不同集群时，命名空间的列表可以为多个集群的集合，在转化成RBAC策略时，会自动判断集群下的命名空间是否存在。 **约束限制：** 当前最多支持同时授权500个命名空间。 **取值范围：** \\[\&quot;\\*\&quot;\\]或者集群命名空间列表。 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getNamespaces();
    bool namespacesIsSet() const;
    void unsetnamespaces();
    void setNamespaces(const std::vector<std::string>& value);


protected:
    std::vector<std::string> namespaces_;
    bool namespacesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AccessScope_H_
