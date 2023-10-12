
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ValidateWeakPasswordResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ValidateWeakPasswordResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ValidateWeakPasswordResponse
    : public ModelBase, public HttpResponse
{
public:
    ValidateWeakPasswordResponse();
    virtual ~ValidateWeakPasswordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateWeakPasswordResponse members

    /// <summary>
    /// 是否为弱密码。 - 返回\&quot;true\&quot;，是弱密码。 - 返回\&quot;false\&quot;，不是弱密码。
    /// </summary>

    bool isIsWeakPassword() const;
    bool isWeakPasswordIsSet() const;
    void unsetisWeakPassword();
    void setIsWeakPassword(bool value);


protected:
    bool isWeakPassword_;
    bool isWeakPasswordIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ValidateWeakPasswordResponse_H_
