
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultTagsRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultTagsRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultTagsCreateReq.h>
#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CreateVaultTagsRequest
    : public ModelBase
{
public:
    CreateVaultTagsRequest();
    virtual ~CreateVaultTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVaultTagsRequest members

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VaultTagsCreateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultTagsCreateReq& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;
    VaultTagsCreateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVaultTagsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVaultTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultTagsRequest_H_
