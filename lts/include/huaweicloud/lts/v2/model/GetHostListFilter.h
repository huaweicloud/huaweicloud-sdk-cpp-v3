
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListFilter_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListFilter_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询主机信息过滤参数
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetHostListFilter
    : public ModelBase
{
public:
    GetHostListFilter();
    virtual ~GetHostListFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetHostListFilter members

    /// <summary>
    /// 主机名称列表。可以根据主机名称列表，进行批量过滤。
    /// </summary>

    std::vector<std::string>& getHostNameList();
    bool hostNameListIsSet() const;
    void unsethostNameList();
    void setHostNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 主机ID列表。可以根据主机IP列表，进行批量过滤。
    /// </summary>

    std::vector<std::string>& getHostIpList();
    bool hostIpListIsSet() const;
    void unsethostIpList();
    void setHostIpList(const std::vector<std::string>& value);

    /// <summary>
    /// 主机状态。可以根据主机状态进行过滤。 uninstall:未安装 running:运行 offline:离线 error:异常 plugin error:插件错误 installing:安装中 install-fail:安装失败 upgrading:升级中 upgrading-transient:升级中 upgrade failed:升级失败 upgrade-fail:升级失败 uninstalling:卸载中 uninstalling-transient:卸载中 authentication error:鉴权失败
    /// </summary>

    std::string getHostStatus() const;
    bool hostStatusIsSet() const;
    void unsethostStatus();
    void setHostStatus(const std::string& value);

    /// <summary>
    /// 主机版本。可以根据主机版本进行过滤。
    /// </summary>

    std::string getHostVersion() const;
    bool hostVersionIsSet() const;
    void unsethostVersion();
    void setHostVersion(const std::string& value);


protected:
    std::vector<std::string> hostNameList_;
    bool hostNameListIsSet_;
    std::vector<std::string> hostIpList_;
    bool hostIpListIsSet_;
    std::string hostStatus_;
    bool hostStatusIsSet_;
    std::string hostVersion_;
    bool hostVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListFilter_H_
