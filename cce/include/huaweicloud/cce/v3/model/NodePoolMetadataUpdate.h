
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolMetadataUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolMetadataUpdate_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolMetadataUpdate
    : public ModelBase
{
public:
    NodePoolMetadataUpdate();
    virtual ~NodePoolMetadataUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolMetadataUpdate members

    /// <summary>
    /// 节点池名称。  &gt; 命名规则： &gt; &gt;  - 以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围1-50位，且不能以中划线(-)结尾。 &gt; &gt;  - 不允许创建名为 DefaultPool 的节点池。
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolMetadataUpdate_H_
