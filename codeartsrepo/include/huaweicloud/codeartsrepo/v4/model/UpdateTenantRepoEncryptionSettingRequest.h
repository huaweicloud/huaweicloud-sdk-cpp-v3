
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTenantRepoEncryptionSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTenantRepoEncryptionSettingRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/TenantRepoEncryptionSettingRequestDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateTenantRepoEncryptionSettingRequest
    : public ModelBase
{
public:
    UpdateTenantRepoEncryptionSettingRequest();
    virtual ~UpdateTenantRepoEncryptionSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantRepoEncryptionSettingRequest members

    /// <summary>
    /// **参数解释：** 租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TenantRepoEncryptionSettingRequestDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TenantRepoEncryptionSettingRequestDto& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    TenantRepoEncryptionSettingRequestDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTenantRepoEncryptionSettingRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTenantRepoEncryptionSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTenantRepoEncryptionSettingRequest_H_
