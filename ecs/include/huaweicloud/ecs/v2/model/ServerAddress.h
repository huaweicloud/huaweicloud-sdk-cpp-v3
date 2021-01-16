
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerAddress_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerAddress_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 弹性云服务器的网络属性。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerAddress
    : public ModelBase
{
public:
    ServerAddress();
    virtual ~ServerAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerAddress members

    /// <summary>
    /// IP地址版本。  - “4”：代表IPv4。 - “6”：代表IPv6。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getAddr() const;
    bool addrIsSet() const;
    void unsetaddr();
    void setAddr(const std::string& value);

    /// <summary>
    /// IP地址类型。  - fixed：代表私有IP地址。 - floating：代表浮动IP地址。
    /// </summary>

    std::string getOSEXTIPStype() const;
    bool oSEXTIPStypeIsSet() const;
    void unsetoSEXTIPStype();
    void setOSEXTIPStype(const std::string& value);

    /// <summary>
    /// MAC地址。
    /// </summary>

    std::string getOSEXTIPSMACmacAddr() const;
    bool oSEXTIPSMACmacAddrIsSet() const;
    void unsetoSEXTIPSMACmacAddr();
    void setOSEXTIPSMACmacAddr(const std::string& value);

    /// <summary>
    /// IP地址对应的端口ID。
    /// </summary>

    std::string getOSEXTIPSportId() const;
    bool oSEXTIPSportIdIsSet() const;
    void unsetoSEXTIPSportId();
    void setOSEXTIPSportId(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string addr_;
    bool addrIsSet_;
    std::string oSEXTIPStype_;
    bool oSEXTIPStypeIsSet_;
    std::string oSEXTIPSMACmacAddr_;
    bool oSEXTIPSMACmacAddrIsSet_;
    std::string oSEXTIPSportId_;
    bool oSEXTIPSportIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerAddress_H_
