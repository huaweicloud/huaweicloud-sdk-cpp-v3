
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersSchedulerHint_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersSchedulerHint_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
///  弹性云服务器调度信息。  裸金属服务器场景不支持。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaCreateServersSchedulerHint
    : public ModelBase
{
public:
    NovaCreateServersSchedulerHint();
    virtual ~NovaCreateServersSchedulerHint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateServersSchedulerHint members

    /// <summary>
    /// 反亲和性组信息。  UUID格式。
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 与指定弹性云服务器满足反亲和性。   当前不支持该功能。
    /// </summary>

    std::vector<std::string>& getDifferentHost();
    bool differentHostIsSet() const;
    void unsetdifferentHost();
    void setDifferentHost(const std::vector<std::string>& value);

    /// <summary>
    /// 与指定的弹性云服务器满足亲和性。   当前不支持该功能。
    /// </summary>

    std::vector<std::string>& getSameHost();
    bool sameHostIsSet() const;
    void unsetsameHost();
    void setSameHost(const std::vector<std::string>& value);

    /// <summary>
    /// 将弹性云服务器scheduler到指定网段的host上，host网段的cidr。   当前不支持该功能。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 将弹性云服务器scheduler到指定网段的host上，host IP地址。   当前不支持该功能。
    /// </summary>

    std::string getBuildNearHostIp() const;
    bool buildNearHostIpIsSet() const;
    void unsetbuildNearHostIp();
    void setBuildNearHostIp(const std::string& value);

    /// <summary>
    /// 在专属主机或共享池中创建弹性云服务器。默认为在共享池创建。 值为： shared 或dedicated。 shared：表示共享池。 dedicated:表示专属主机。 创建与查询此值均有效。
    /// </summary>

    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);

    /// <summary>
    /// 专属主机ID。 此属性仅在tenancy值为dedicated时有效。 不指定此属性，系统将自动分配租户可自动放置弹性云服务器的专属主机。 创建与查询此值均有效。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


protected:
    std::string group_;
    bool groupIsSet_;
    std::vector<std::string> differentHost_;
    bool differentHostIsSet_;
    std::vector<std::string> sameHost_;
    bool sameHostIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string buildNearHostIp_;
    bool buildNearHostIpIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersSchedulerHint_H_
