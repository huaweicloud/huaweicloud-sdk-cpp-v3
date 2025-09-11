
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceExt_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceExt_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/ecs/v2/model/FixedIp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  InterfaceExt
    : public ModelBase
{
public:
    InterfaceExt();
    virtual ~InterfaceExt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InterfaceExt members

    /// <summary>
    /// 
    /// </summary>

    bool isPreserveOnDelete() const;
    bool preserveOnDeleteIsSet() const;
    void unsetpreserveOnDelete();
    void setPreserveOnDelete(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPortState() const;
    bool portStateIsSet() const;
    void unsetportState();
    void setPortState(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<FixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<FixedIp>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMacAddr() const;
    bool macAddrIsSet() const;
    void unsetmacAddr();
    void setMacAddr(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDriverMode() const;
    bool driverModeIsSet() const;
    void unsetdriverMode();
    void setDriverMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getMinRate() const;
    bool minRateIsSet() const;
    void unsetminRate();
    void setMinRate(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getMultiqueueNum() const;
    bool multiqueueNumIsSet() const;
    void unsetmultiqueueNum();
    void setMultiqueueNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPciAddress() const;
    bool pciAddressIsSet() const;
    void unsetpciAddress();
    void setPciAddress(const std::string& value);


protected:
    bool preserveOnDelete_;
    bool preserveOnDeleteIsSet_;
    std::string portState_;
    bool portStateIsSet_;
    std::vector<FixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string macAddr_;
    bool macAddrIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string driverMode_;
    bool driverModeIsSet_;
    int32_t minRate_;
    bool minRateIsSet_;
    int32_t multiqueueNum_;
    bool multiqueueNumIsSet_;
    std::string pciAddress_;
    bool pciAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_InterfaceExt_H_
