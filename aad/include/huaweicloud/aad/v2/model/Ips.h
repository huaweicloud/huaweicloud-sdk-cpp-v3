
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_Ips_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_Ips_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  Ips
    : public ModelBase
{
public:
    Ips();
    virtual ~Ips();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Ips members

    /// <summary>
    /// ip id
    /// </summary>

    std::string getIpId() const;
    bool ipIdIsSet() const;
    void unsetipId();
    void setIpId(const std::string& value);

    /// <summary>
    /// ip
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 线路
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// 数据中心
    /// </summary>

    std::string getDataCenter() const;
    bool dataCenterIsSet() const;
    void unsetdataCenter();
    void setDataCenter(const std::string& value);

    /// <summary>
    /// 海外区域封禁状态 0-关闭 1-开启
    /// </summary>

    int32_t getForeignSwitchStatus() const;
    bool foreignSwitchStatusIsSet() const;
    void unsetforeignSwitchStatus();
    void setForeignSwitchStatus(int32_t value);

    /// <summary>
    /// UDP协议禁用 0-关闭 1-开启
    /// </summary>

    int32_t getUdpSwitchStatus() const;
    bool udpSwitchStatusIsSet() const;
    void unsetudpSwitchStatus();
    void setUdpSwitchStatus(int32_t value);


protected:
    std::string ipId_;
    bool ipIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string isp_;
    bool ispIsSet_;
    std::string dataCenter_;
    bool dataCenterIsSet_;
    int32_t foreignSwitchStatus_;
    bool foreignSwitchStatusIsSet_;
    int32_t udpSwitchStatus_;
    bool udpSwitchStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_Ips_H_
