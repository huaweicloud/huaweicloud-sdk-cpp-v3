
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstallKernelPluginRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstallKernelPluginRequestBody_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  InstallKernelPluginRequestBody
    : public ModelBase
{
public:
    InstallKernelPluginRequestBody();
    virtual ~InstallKernelPluginRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstallKernelPluginRequestBody members

    /// <summary>
    /// 插件名称
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// 插件安装包链接
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 插件安装包的sha256值
    /// </summary>

    std::string getSha256() const;
    bool sha256IsSet() const;
    void unsetsha256();
    void setSha256(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string sha256_;
    bool sha256IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstallKernelPluginRequestBody_H_
