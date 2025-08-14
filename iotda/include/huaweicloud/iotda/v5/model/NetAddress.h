
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_NetAddress_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_NetAddress_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络地址信息。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  NetAddress
    : public ModelBase
{
public:
    NetAddress();
    virtual ~NetAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetAddress members

    /// <summary>
    /// **参数说明**：服务的对应IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// **参数说明**：服务对应端口
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数说明**：服务对应的域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);


protected:
    std::string ip_;
    bool ipIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string domain_;
    bool domainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_NetAddress_H_
