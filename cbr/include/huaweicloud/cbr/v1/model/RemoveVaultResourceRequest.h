
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveVaultResourceRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveVaultResourceRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/VaultRemoveResourceReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  RemoveVaultResourceRequest
    : public ModelBase
{
public:
    RemoveVaultResourceRequest();
    virtual ~RemoveVaultResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveVaultResourceRequest members

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VaultRemoveResourceReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultRemoveResourceReq& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;
    VaultRemoveResourceReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemoveVaultResourceRequest& dereference_from_shared_ptr(std::shared_ptr<RemoveVaultResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveVaultResourceRequest_H_
