
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_EnableDefensePolicyRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_EnableDefensePolicyRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/antiddos/v1/model/OpenAntiDDosServiceRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  EnableDefensePolicyRequest
    : public ModelBase
{
public:
    EnableDefensePolicyRequest();
    virtual ~EnableDefensePolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnableDefensePolicyRequest members

    /// <summary>
    /// 用户EIP对应的ID
    /// </summary>

    std::string getFloatingIpId() const;
    bool floatingIpIdIsSet() const;
    void unsetfloatingIpId();
    void setFloatingIpId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenAntiDDosServiceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const OpenAntiDDosServiceRequestBody& value);


protected:
    std::string floatingIpId_;
    bool floatingIpIdIsSet_;
    OpenAntiDDosServiceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    EnableDefensePolicyRequest& dereference_from_shared_ptr(std::shared_ptr<EnableDefensePolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_EnableDefensePolicyRequest_H_
