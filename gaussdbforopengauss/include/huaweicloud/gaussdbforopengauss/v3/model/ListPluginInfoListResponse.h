
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListPluginInfoListResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListPluginInfoListResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListPluginInfoListResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPluginInfoListResponse();
    virtual ~ListPluginInfoListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPluginInfoListResponse members

    /// <summary>
    /// 插件名称
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// 端口
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 插件版本
    /// </summary>

    std::string getPluginVersion() const;
    bool pluginVersionIsSet() const;
    void unsetpluginVersion();
    void setPluginVersion(const std::string& value);

    /// <summary>
    /// 是否已安装
    /// </summary>

    std::string getInstalled() const;
    bool installedIsSet() const;
    void unsetinstalled();
    void setInstalled(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string pluginVersion_;
    bool pluginVersionIsSet_;
    std::string installed_;
    bool installedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListPluginInfoListResponse_H_
