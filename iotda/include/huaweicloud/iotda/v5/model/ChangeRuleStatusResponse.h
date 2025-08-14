
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChangeRuleStatusResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChangeRuleStatusResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ChangeRuleStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeRuleStatusResponse();
    virtual ~ChangeRuleStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeRuleStatusResponse members

    /// <summary>
    /// **参数说明**：规则的激活状态。 **取值范围**： - active：激活。 - inactive：未激活。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChangeRuleStatusResponse_H_
