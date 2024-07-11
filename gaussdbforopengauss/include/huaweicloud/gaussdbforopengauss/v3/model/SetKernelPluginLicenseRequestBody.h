
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetKernelPluginLicenseRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetKernelPluginLicenseRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SetKernelPluginLicenseRequestBody
    : public ModelBase
{
public:
    SetKernelPluginLicenseRequestBody();
    virtual ~SetKernelPluginLicenseRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetKernelPluginLicenseRequestBody members

    /// <summary>
    /// license
    /// </summary>

    std::string getLicenseStr() const;
    bool licenseStrIsSet() const;
    void unsetlicenseStr();
    void setLicenseStr(const std::string& value);


protected:
    std::string licenseStr_;
    bool licenseStrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetKernelPluginLicenseRequestBody_H_
