
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccessControlAttributeDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccessControlAttributeDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/AccessControlAttributeValueDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// These are IAM Identity Center identity store attributes that you can configure for use in attributes-based access control (ABAC).
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AccessControlAttributeDto
    : public ModelBase
{
public:
    AccessControlAttributeDto();
    virtual ~AccessControlAttributeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessControlAttributeDto members

    /// <summary>
    /// 与您的身份源中的身份关联的属性的名称
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AccessControlAttributeValueDto getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const AccessControlAttributeValueDto& value);


protected:
    std::string key_;
    bool keyIsSet_;
    AccessControlAttributeValueDto value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AccessControlAttributeDto_H_
