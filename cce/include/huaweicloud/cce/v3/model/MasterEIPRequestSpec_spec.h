
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequestSpec_spec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequestSpec_spec_H_


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
/// **参数解释**： 待绑定的弹性IP配置属性 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MasterEIPRequestSpec_spec
    : public ModelBase
{
public:
    MasterEIPRequestSpec_spec();
    virtual ~MasterEIPRequestSpec_spec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterEIPRequestSpec_spec members

    /// <summary>
    /// **参数解释**： 弹性网卡ID，绑定时必选，解绑时该字段无效 &gt; 获取方式:在控制台的“服务列表”中，单击“网络 &gt; 弹性公网IP EIP”，单击弹性公网IP，在详情页的“基本信息”页签下找到“ID”字段复制即可。  **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequestSpec_spec_H_
