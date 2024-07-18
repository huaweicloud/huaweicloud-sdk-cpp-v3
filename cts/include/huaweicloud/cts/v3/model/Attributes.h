
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_Attributes_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_Attributes_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 临时安全凭据的属性。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  Attributes
    : public ModelBase
{
public:
    Attributes();
    virtual ~Attributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Attributes members

    /// <summary>
    /// 颁发临时安全凭证时的时间（timestamp，为标准UTC时间，毫秒级，13位数字）。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 是否已经通过MFA身份认证。
    /// </summary>

    std::string getMfaAuthenticated() const;
    bool mfaAuthenticatedIsSet() const;
    void unsetmfaAuthenticated();
    void setMfaAuthenticated(const std::string& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string mfaAuthenticated_;
    bool mfaAuthenticatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_Attributes_H_
