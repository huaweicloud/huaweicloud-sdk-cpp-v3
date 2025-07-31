
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateCustomerIpsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateCustomerIpsRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/CustomerIpsSaveDto.h>
#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateCustomerIpsRequest
    : public ModelBase
{
public:
    UpdateCustomerIpsRequest();
    virtual ~UpdateCustomerIpsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateCustomerIpsRequest members

    /// <summary>
    /// **参数解释**： cfw侧自定义IPS规则id **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getIpsCfwId() const;
    bool ipsCfwIdIsSet() const;
    void unsetipsCfwId();
    void setIpsCfwId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomerIpsSaveDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CustomerIpsSaveDto& value);


protected:
    std::string ipsCfwId_;
    bool ipsCfwIdIsSet_;
    CustomerIpsSaveDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateCustomerIpsRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateCustomerIpsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateCustomerIpsRequest_H_
