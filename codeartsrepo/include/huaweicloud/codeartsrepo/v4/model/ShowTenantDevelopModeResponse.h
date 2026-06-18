
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowTenantDevelopModeResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowTenantDevelopModeResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowTenantDevelopModeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTenantDevelopModeResponse();
    virtual ~ShowTenantDevelopModeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantDevelopModeResponse members

    /// <summary>
    /// **参数解释：** 是否开启cr模式。
    /// </summary>

    bool isCrEnable() const;
    bool crEnableIsSet() const;
    void unsetcrEnable();
    void setCrEnable(bool value);

    /// <summary>
    /// **参数解释：** 是否开启租户下加密设置。
    /// </summary>

    bool isRepoEncryptionEnabled() const;
    bool repoEncryptionEnabledIsSet() const;
    void unsetrepoEncryptionEnabled();
    void setRepoEncryptionEnabled(bool value);


protected:
    bool crEnable_;
    bool crEnableIsSet_;
    bool repoEncryptionEnabled_;
    bool repoEncryptionEnabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowTenantDevelopModeResponse_H_
