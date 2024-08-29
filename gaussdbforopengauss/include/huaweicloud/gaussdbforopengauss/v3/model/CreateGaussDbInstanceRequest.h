
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateGaussDbInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateGaussDbInstanceRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateGaussDbInstanceRequest
    : public ModelBase
{
public:
    CreateGaussDbInstanceRequest();
    virtual ~CreateGaussDbInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGaussDbInstanceRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 委托urn。使用RAM共享的KMS秘钥创建包周期实例时必填,格式iam::{account_id}:agency:{agency_name}。
    /// </summary>

    std::string getSubscriptionAgency() const;
    bool subscriptionAgencyIsSet() const;
    void unsetsubscriptionAgency();
    void setSubscriptionAgency(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const OpenGaussInstanceRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string subscriptionAgency_;
    bool subscriptionAgencyIsSet_;
    OpenGaussInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateGaussDbInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<CreateGaussDbInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateGaussDbInstanceRequest_H_
