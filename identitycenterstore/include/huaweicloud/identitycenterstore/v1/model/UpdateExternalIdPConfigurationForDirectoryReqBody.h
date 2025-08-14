
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateExternalIdPConfigurationForDirectoryReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateExternalIdPConfigurationForDirectoryReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UpdateExternalIdPConfigurationForDirectoryReqBody
    : public ModelBase
{
public:
    UpdateExternalIdPConfigurationForDirectoryReqBody();
    virtual ~UpdateExternalIdPConfigurationForDirectoryReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateExternalIdPConfigurationForDirectoryReqBody members

    /// <summary>
    /// 身份提供商发布者标识
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);

    /// <summary>
    /// 身份提供商登录链接
    /// </summary>

    std::string getLoginUrl() const;
    bool loginUrlIsSet() const;
    void unsetloginUrl();
    void setLoginUrl(const std::string& value);


protected:
    std::string entityId_;
    bool entityIdIsSet_;
    std::string loginUrl_;
    bool loginUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdateExternalIdPConfigurationForDirectoryReqBody_H_
