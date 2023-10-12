
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipOperateProtectReq_ip_infos_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipOperateProtectReq_ip_infos_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EipOperateProtectReq_ip_infos
    : public ModelBase
{
public:
    EipOperateProtectReq_ip_infos();
    virtual ~EipOperateProtectReq_ip_infos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipOperateProtectReq_ip_infos members

    /// <summary>
    /// 弹性公网IP数据ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性公网IP地址
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 弹性公网IP地址IPV6
    /// </summary>

    std::string getPublicIpv6() const;
    bool publicIpv6IsSet() const;
    void unsetpublicIpv6();
    void setPublicIpv6(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string publicIpv6_;
    bool publicIpv6IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipOperateProtectReq_ip_infos_H_
