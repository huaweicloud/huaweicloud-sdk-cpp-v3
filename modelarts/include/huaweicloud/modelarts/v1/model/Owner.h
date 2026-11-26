
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Owner_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Owner_H_


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
/// 桶拥有者信息，包含租户ID。 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Owner
    : public ModelBase
{
public:
    Owner();
    virtual ~Owner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Owner members

    /// <summary>
    /// **参数解释**：对象拥有者的DomainId。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：对象拥有者的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Owner_H_
