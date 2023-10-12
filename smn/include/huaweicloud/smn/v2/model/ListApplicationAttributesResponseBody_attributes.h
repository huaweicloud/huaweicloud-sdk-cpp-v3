
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationAttributesResponseBody_attributes_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationAttributesResponseBody_attributes_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Application的属性列表。
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListApplicationAttributesResponseBody_attributes
    : public ModelBase
{
public:
    ListApplicationAttributesResponseBody_attributes();
    virtual ~ListApplicationAttributesResponseBody_attributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationAttributesResponseBody_attributes members

    /// <summary>
    /// 应用平台是否启用。
    /// </summary>

    std::string getEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(const std::string& value);

    /// <summary>
    /// 苹果证书过期时间，APNS、APNS_SANDBOX平台特有属性 时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getAppleCertificateExpirationDate() const;
    bool appleCertificateExpirationDateIsSet() const;
    void unsetappleCertificateExpirationDate();
    void setAppleCertificateExpirationDate(const std::string& value);


protected:
    std::string enabled_;
    bool enabledIsSet_;
    std::string appleCertificateExpirationDate_;
    bool appleCertificateExpirationDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationAttributesResponseBody_attributes_H_
