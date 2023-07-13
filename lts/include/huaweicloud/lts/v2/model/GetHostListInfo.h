
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListInfo_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机详细信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetHostListInfo
    : public ModelBase
{
public:
    GetHostListInfo();
    virtual ~GetHostListInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetHostListInfo members

    /// <summary>
    /// 主机ID
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

    /// <summary>
    /// 主机IP
    /// </summary>

    std::string getHostIp() const;
    bool hostIpIsSet() const;
    void unsethostIp();
    void setHostIp(const std::string& value);

    /// <summary>
    /// 主机名称
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 主机状态。 uninstall:未安装 running:运行 offline:离线 error:异常 plugin error:插件错误 installing:安装中 install-fail:安装失败 upgrading:升级中 upgrading-transient:升级中 upgrade failed:升级失败 upgrade-fail:升级失败 uninstalling:卸载中 uninstalling-transient:卸载中 authentication error:鉴权失败
    /// </summary>

    std::string getHostStatus() const;
    bool hostStatusIsSet() const;
    void unsethostStatus();
    void setHostStatus(const std::string& value);

    /// <summary>
    /// 主机类型。linux:linux类型,windows:windows类型
    /// </summary>

    std::string getHostType() const;
    bool hostTypeIsSet() const;
    void unsethostType();
    void setHostType(const std::string& value);

    /// <summary>
    /// 主机版本
    /// </summary>

    std::string getHostVersion() const;
    bool hostVersionIsSet() const;
    void unsethostVersion();
    void setHostVersion(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::string hostId_;
    bool hostIdIsSet_;
    std::string hostIp_;
    bool hostIpIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string hostStatus_;
    bool hostStatusIsSet_;
    std::string hostType_;
    bool hostTypeIsSet_;
    std::string hostVersion_;
    bool hostVersionIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListInfo_H_
