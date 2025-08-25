
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeLifecycleConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeLifecycleConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点自定义生命周期配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeLifecycleConfig
    : public ModelBase
{
public:
    NodeLifecycleConfig();
    virtual ~NodeLifecycleConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeLifecycleConfig members

    /// <summary>
    /// 安装前执行脚本 &gt; 输入的值需要经过Base64编码，方法为echo -n \&quot;待编码内容\&quot; | base64。 
    /// </summary>

    std::string getPreInstall() const;
    bool preInstallIsSet() const;
    void unsetpreInstall();
    void setPreInstall(const std::string& value);

    /// <summary>
    /// 安装后执行脚本 &gt; 输入的值需要经过Base64编码，方法为echo -n \&quot;待编码内容\&quot; | base64。 
    /// </summary>

    std::string getPostInstall() const;
    bool postInstallIsSet() const;
    void unsetpostInstall();
    void setPostInstall(const std::string& value);


protected:
    std::string preInstall_;
    bool preInstallIsSet_;
    std::string postInstall_;
    bool postInstallIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeLifecycleConfig_H_
