
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateInstanceAccessControlAttributeConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateInstanceAccessControlAttributeConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/InstanceAccessControlAttributeConfigurationDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// the request body of UpdateInstanceAccessControlAttributeConfiguration
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateInstanceAccessControlAttributeConfigurationReqBody
    : public ModelBase
{
public:
    UpdateInstanceAccessControlAttributeConfigurationReqBody();
    virtual ~UpdateInstanceAccessControlAttributeConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceAccessControlAttributeConfigurationReqBody members

    /// <summary>
    /// 
    /// </summary>

    InstanceAccessControlAttributeConfigurationDto getInstanceAccessControlAttributeConfiguration() const;
    bool instanceAccessControlAttributeConfigurationIsSet() const;
    void unsetinstanceAccessControlAttributeConfiguration();
    void setInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfigurationDto& value);


protected:
    InstanceAccessControlAttributeConfigurationDto instanceAccessControlAttributeConfiguration_;
    bool instanceAccessControlAttributeConfigurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateInstanceAccessControlAttributeConfigurationReqBody_H_
