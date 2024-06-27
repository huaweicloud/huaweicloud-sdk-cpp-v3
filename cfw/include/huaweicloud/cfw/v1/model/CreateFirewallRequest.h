
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/CreateFirewallReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateFirewallRequest
    : public ModelBase
{
public:
    CreateFirewallRequest();
    virtual ~CreateFirewallRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFirewallRequest members

    /// <summary>
    /// 保证客户端请求幂等性的标识。  该标识为32位UUID格式，由客户端生成，且需确保不同请求之间该标识具有唯一性。
    /// </summary>

    std::string getXClientToken() const;
    bool xClientTokenIsSet() const;
    void unsetxClientToken();
    void setXClientToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateFirewallReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateFirewallReq& value);


protected:
    std::string xClientToken_;
    bool xClientTokenIsSet_;
    CreateFirewallReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateFirewallRequest& dereference_from_shared_ptr(std::shared_ptr<CreateFirewallRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallRequest_H_
