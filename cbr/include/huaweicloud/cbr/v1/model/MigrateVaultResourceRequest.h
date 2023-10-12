
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateVaultResourceRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateVaultResourceRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/VaultMigrateResourceReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  MigrateVaultResourceRequest
    : public ModelBase
{
public:
    MigrateVaultResourceRequest();
    virtual ~MigrateVaultResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateVaultResourceRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VaultMigrateResourceReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultMigrateResourceReq& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;
    VaultMigrateResourceReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MigrateVaultResourceRequest& dereference_from_shared_ptr(std::shared_ptr<MigrateVaultResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateVaultResourceRequest_H_
