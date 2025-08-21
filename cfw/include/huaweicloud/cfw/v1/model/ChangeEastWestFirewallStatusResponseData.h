
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ChangeEastWestFirewallStatusResponseData
    : public ModelBase
{
public:
    ChangeEastWestFirewallStatusResponseData();
    virtual ~ChangeEastWestFirewallStatusResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeEastWestFirewallStatusResponseData members

    /// <summary>
    /// **参数解释**： VPC边界防护对象id **取值范围**： 不涉及
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusResponseData_H_
