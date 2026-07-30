
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BindNodeItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BindNodeItem_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BindNodeItem
    : public ModelBase
{
public:
    BindNodeItem();
    virtual ~BindNodeItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindNodeItem members

    /// <summary>
    /// **参数解释**：换绑的节点的名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：节点绑定的逻辑子池的ID。值为空则节点不绑定任何逻辑子池。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getQuotaName() const;
    bool quotaNameIsSet() const;
    void unsetquotaName();
    void setQuotaName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string quotaName_;
    bool quotaNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BindNodeItem_H_
