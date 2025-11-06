
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTenantTrustedIpAddressRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTenantTrustedIpAddressRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateTenantTrustedIpAddressRequest
    : public ModelBase
{
public:
    UpdateTenantTrustedIpAddressRequest();
    virtual ~UpdateTenantTrustedIpAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantTrustedIpAddressRequest members

    /// <summary>
    /// **参数解释：** ip白名单id。
    /// </summary>

    int32_t getIpId() const;
    bool ipIdIsSet() const;
    void unsetipId();
    void setIpId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AddTrustedIpAddressRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddTrustedIpAddressRequestBody& value);


protected:
    int32_t ipId_;
    bool ipIdIsSet_;
    AddTrustedIpAddressRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTenantTrustedIpAddressRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTenantTrustedIpAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTenantTrustedIpAddressRequest_H_
