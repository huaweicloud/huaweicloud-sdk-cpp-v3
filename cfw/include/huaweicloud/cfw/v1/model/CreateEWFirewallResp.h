
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEWFirewallResp_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEWFirewallResp_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ER.h>
#include <string>
#include <huaweicloud/cfw/v1/model/CreateEWFirewallInspectVpcResp.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  CreateEWFirewallResp
    : public ModelBase
{
public:
    CreateEWFirewallResp();
    virtual ~CreateEWFirewallResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEWFirewallResp members

    /// <summary>
    /// **参数解释**： 东西向防护id，对应object_id字段 **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ER getEr() const;
    bool erIsSet() const;
    void unseter();
    void setEr(const ER& value);

    /// <summary>
    /// 
    /// </summary>

    CreateEWFirewallInspectVpcResp getInspertionVpc() const;
    bool inspertionVpcIsSet() const;
    void unsetinspertionVpc();
    void setInspertionVpc(const CreateEWFirewallInspectVpcResp& value);


protected:
    std::string id_;
    bool idIsSet_;
    ER er_;
    bool erIsSet_;
    CreateEWFirewallInspectVpcResp inspertionVpc_;
    bool inspertionVpcIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEWFirewallResp_H_
