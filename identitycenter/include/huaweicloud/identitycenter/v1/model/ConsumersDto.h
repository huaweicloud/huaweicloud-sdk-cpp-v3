
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ConsumersDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ConsumersDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SAML响应接收方
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ConsumersDto
    : public ModelBase
{
public:
    ConsumersDto();
    virtual ~ConsumersDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConsumersDto members

    /// <summary>
    /// SAML传输协议
    /// </summary>

    std::string getBinding() const;
    bool bindingIsSet() const;
    void unsetbinding();
    void setBinding(const std::string& value);

    /// <summary>
    /// 是否是默认接收方
    /// </summary>

    bool isDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(bool value);

    /// <summary>
    /// SAML ACS Url
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);


protected:
    std::string binding_;
    bool bindingIsSet_;
    bool defaultValue_;
    bool defaultValueIsSet_;
    std::string location_;
    bool locationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ConsumersDto_H_
