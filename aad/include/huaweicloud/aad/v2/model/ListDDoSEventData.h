
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSEventData_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSEventData_H_


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
class HUAWEICLOUD_AAD_V2_EXPORT  ListDDoSEventData
    : public ModelBase
{
public:
    ListDDoSEventData();
    virtual ~ListDDoSEventData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDoSEventData members

    /// <summary>
    /// 防护IP
    /// </summary>

    std::string getZoneIp() const;
    bool zoneIpIsSet() const;
    void unsetzoneIp();
    void setZoneIp(const std::string& value);

    /// <summary>
    /// 开始时间（毫秒时间戳）
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间（毫秒时间戳）
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 攻击流量峰值，单位“kbps”
    /// </summary>

    std::string getMaxDropKbps() const;
    bool maxDropKbpsIsSet() const;
    void unsetmaxDropKbps();
    void setMaxDropKbps(const std::string& value);

    /// <summary>
    /// 攻击报文数峰值，单位“pps”
    /// </summary>

    std::string getMaxDropPps() const;
    bool maxDropPpsIsSet() const;
    void unsetmaxDropPps();
    void setMaxDropPps(const std::string& value);

    /// <summary>
    /// 入流量峰值，单位“kbps”
    /// </summary>

    std::string getMaxInKbps() const;
    bool maxInKbpsIsSet() const;
    void unsetmaxInKbps();
    void setMaxInKbps(const std::string& value);

    /// <summary>
    /// 入报文数峰值，单位“pps”
    /// </summary>

    std::string getMaxInPps() const;
    bool maxInPpsIsSet() const;
    void unsetmaxInPps();
    void setMaxInPps(const std::string& value);

    /// <summary>
    /// 攻击类型
    /// </summary>

    std::string getAttackTypes() const;
    bool attackTypesIsSet() const;
    void unsetattackTypes();
    void setAttackTypes(const std::string& value);

    /// <summary>
    /// 攻击源IP
    /// </summary>

    std::string getAttackIps() const;
    bool attackIpsIsSet() const;
    void unsetattackIps();
    void setAttackIps(const std::string& value);

    /// <summary>
    /// 攻击IP描述
    /// </summary>

    std::string getAttackIpsDesc() const;
    bool attackIpsDescIsSet() const;
    void unsetattackIpsDesc();
    void setAttackIpsDesc(const std::string& value);

    /// <summary>
    /// 攻击状态
    /// </summary>

    std::string getAttackStatus() const;
    bool attackStatusIsSet() const;
    void unsetattackStatus();
    void setAttackStatus(const std::string& value);


protected:
    std::string zoneIp_;
    bool zoneIpIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string maxDropKbps_;
    bool maxDropKbpsIsSet_;
    std::string maxDropPps_;
    bool maxDropPpsIsSet_;
    std::string maxInKbps_;
    bool maxInKbpsIsSet_;
    std::string maxInPps_;
    bool maxInPpsIsSet_;
    std::string attackTypes_;
    bool attackTypesIsSet_;
    std::string attackIps_;
    bool attackIpsIsSet_;
    std::string attackIpsDesc_;
    bool attackIpsDescIsSet_;
    std::string attackStatus_;
    bool attackStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSEventData_H_
