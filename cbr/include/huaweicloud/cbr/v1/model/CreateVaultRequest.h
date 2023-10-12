
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultCreateReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CreateVaultRequest
    : public ModelBase
{
public:
    CreateVaultRequest();
    virtual ~CreateVaultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVaultRequest members

    /// <summary>
    /// 
    /// </summary>

    VaultCreateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultCreateReq& value);


protected:
    VaultCreateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVaultRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVaultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultRequest_H_
