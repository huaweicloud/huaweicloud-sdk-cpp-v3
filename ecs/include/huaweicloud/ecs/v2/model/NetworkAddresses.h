
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NetworkAddresses_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NetworkAddresses_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NetworkAddresses
    : public ModelBase
{
public:
    NetworkAddresses();
    virtual ~NetworkAddresses();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkAddresses members

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getAddr() const;
    bool addrIsSet() const;
    void unsetaddr();
    void setAddr(const std::string& value);

    /// <summary>
    /// IP地址类型，值为4或6。  4：IP地址类型是IPv4 6：IP地址类型是IPv6
    /// </summary>

    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);

    /// <summary>
    /// IP地址对应的端口ID。
    /// </summary>

    std::string getOSEXTIPSPortId() const;
    bool oSEXTIPSPortIdIsSet() const;
    void unsetoSEXTIPSPortId();
    void setOSEXTIPSPortId(const std::string& value);

    /// <summary>
    /// 扩展属性，MAC地址。
    /// </summary>

    std::string getOSEXTIPSMACMacAddr() const;
    bool oSEXTIPSMACMacAddrIsSet() const;
    void unsetoSEXTIPSMACMacAddr();
    void setOSEXTIPSMACMacAddr(const std::string& value);

    /// <summary>
    /// 扩展属性，分配IP地址方式。  fixed：代表私有IP地址。 floating：代表浮动IP地址。
    /// </summary>

    std::string getOSEXTIPSType() const;
    bool oSEXTIPSTypeIsSet() const;
    void unsetoSEXTIPSType();
    void setOSEXTIPSType(const std::string& value);

    /// <summary>
    /// 是否是主网卡。  true：主网卡。 false：辅助网卡。
    /// </summary>

    bool isPrimary() const;
    bool primaryIsSet() const;
    void unsetprimary();
    void setPrimary(bool value);


protected:
    std::string addr_;
    bool addrIsSet_;
    int32_t version_;
    bool versionIsSet_;
    std::string oSEXTIPSPortId_;
    bool oSEXTIPSPortIdIsSet_;
    std::string oSEXTIPSMACMacAddr_;
    bool oSEXTIPSMACMacAddrIsSet_;
    std::string oSEXTIPSType_;
    bool oSEXTIPSTypeIsSet_;
    bool primary_;
    bool primaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NetworkAddresses_H_
