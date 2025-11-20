
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Contexts_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Contexts_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Context.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  Contexts
    : public ModelBase
{
public:
    Contexts();
    virtual ~Contexts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Contexts members

    /// <summary>
    /// **参数解释**： 上下文的名称。 **约束限制**： 不涉及 **取值范围**： - internal：私网访问 - external：公网访问  **默认取值**： - 若不存在publicIp（虚拟机弹性IP），则集群列表的集群数量为1，该字段值为“internal”。 - 若存在publicIp，则集群列表的集群数量大于1，所有扩展的context的name的值为“external”。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Context getContext() const;
    bool contextIsSet() const;
    void unsetcontext();
    void setContext(const Context& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Context context_;
    bool contextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Contexts_H_
