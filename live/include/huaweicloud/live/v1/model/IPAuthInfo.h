
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_IPAuthInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_IPAuthInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  IPAuthInfo
    : public ModelBase
{
public:
    IPAuthInfo();
    virtual ~IPAuthInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IPAuthInfo members

    /// <summary>
    /// 推流域名或播放域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 鉴权类型。 包含如下取值： - WHITE：IP白名单鉴权。 - BLACK：IP黑名单鉴权。 - NONE：不鉴权。 
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// IP黑名单列表，IP之间用;分隔，如192.168.0.0;192.168.0.8，最多支持配置100个IP。支持IP网段添加，例如127.0.0.1/24表示采用子网掩码中的前24位为有效位，即用32-24&#x3D;8bit来表示主机号，该子网可以容纳2^8 - 2 &#x3D; 254 台主机。故127.0.0.1/24 表示IP网段范围是：127.0.0.1~127.0.0.255
    /// </summary>

    std::string getIpAuthList() const;
    bool ipAuthListIsSet() const;
    void unsetipAuthList();
    void setIpAuthList(const std::string& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string ipAuthList_;
    bool ipAuthListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_IPAuthInfo_H_
