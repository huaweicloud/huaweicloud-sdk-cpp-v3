
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaNetwork_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaNetwork_H_


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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaNetwork
    : public ModelBase
{
public:
    NovaNetwork();
    virtual ~NovaNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaNetwork members

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
    /// 扩展属性，MAC地址。
    /// </summary>

    std::string getOSEXTIPSMACMacAddr() const;
    bool oSEXTIPSMACMacAddrIsSet() const;
    void unsetoSEXTIPSMACMacAddr();
    void setOSEXTIPSMACMacAddr(const std::string& value);

    /// <summary>
    /// 扩展属性，分配IP地址方式。
    /// </summary>

    std::string getOSEXTIPSType() const;
    bool oSEXTIPSTypeIsSet() const;
    void unsetoSEXTIPSType();
    void setOSEXTIPSType(const std::string& value);


protected:
    std::string addr_;
    bool addrIsSet_;
    int32_t version_;
    bool versionIsSet_;
    std::string oSEXTIPSMACMacAddr_;
    bool oSEXTIPSMACMacAddrIsSet_;
    std::string oSEXTIPSType_;
    bool oSEXTIPSTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaNetwork_H_
