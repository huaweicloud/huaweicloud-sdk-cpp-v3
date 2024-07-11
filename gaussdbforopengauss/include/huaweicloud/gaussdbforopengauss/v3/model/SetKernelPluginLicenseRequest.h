
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetKernelPluginLicenseRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetKernelPluginLicenseRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseRequestBody.h>
#include <string>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SetKernelPluginLicenseRequest
    : public ModelBase
{
public:
    SetKernelPluginLicenseRequest();
    virtual ~SetKernelPluginLicenseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetKernelPluginLicenseRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 需要配置license的实例
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetKernelPluginLicenseRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetKernelPluginLicenseRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    SetKernelPluginLicenseRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetKernelPluginLicenseRequest& dereference_from_shared_ptr(std::shared_ptr<SetKernelPluginLicenseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetKernelPluginLicenseRequest_H_
