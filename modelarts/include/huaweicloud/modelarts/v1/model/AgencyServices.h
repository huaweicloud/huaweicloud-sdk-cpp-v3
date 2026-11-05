
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AgencyServices_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AgencyServices_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AgencyServices
    : public ModelBase
{
public:
    AgencyServices();
    virtual ~AgencyServices();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AgencyServices members

    /// <summary>
    /// **参数解释**：服务ID。服务ID，标识目标云服务（如 \&quot;19\&quot; 代表 EVS） **约束限制**：不涉及。 **取值范围**：长度限制为64个字符。 **默认取值**：空。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释**：该服务下的细粒度权限操作列表，格式为 服务:资源:操作，如 \&quot;evs:volumes:delete\&quot; **约束限制**：不涉及。 **取值范围**：长度限制为256个字符。 **默认取值**：空。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AgencyServices_H_
