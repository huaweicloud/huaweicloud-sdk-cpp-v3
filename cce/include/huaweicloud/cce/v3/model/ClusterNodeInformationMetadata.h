
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterNodeInformationMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterNodeInformationMetadata_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterNodeInformationMetadata
    : public ModelBase
{
public:
    ClusterNodeInformationMetadata();
    virtual ~ClusterNodeInformationMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterNodeInformationMetadata members

    /// <summary>
    /// **参数解释**： 节点名称 **约束限制**： 命名规则：以小写字母开头，由小写字母、数字、中划线(-)、点(.)组成，长度范围1-56位，且不能以中划线(-)结尾。 **取值范围**： 不涉及 **默认取值**： 不涉及  &gt; 修改节点名称后，弹性云服务器名称（虚拟机名称）会同步修改。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterNodeInformationMetadata_H_
