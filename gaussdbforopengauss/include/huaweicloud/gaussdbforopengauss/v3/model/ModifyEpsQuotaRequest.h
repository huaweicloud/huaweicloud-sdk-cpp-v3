
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyEpsQuotaRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyEpsQuotaRequest_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequestBody.h>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ModifyEpsQuotaRequest
    : public ModelBase
{
public:
    ModifyEpsQuotaRequest();
    virtual ~ModifyEpsQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyEpsQuotaRequest members

    /// <summary>
    /// 语言。默认值：en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyEpsQuotaRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyEpsQuotaRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    ModifyEpsQuotaRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyEpsQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyEpsQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyEpsQuotaRequest_H_
