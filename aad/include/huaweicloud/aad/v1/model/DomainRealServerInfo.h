
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_DomainRealServerInfo_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_DomainRealServerInfo_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域名源站信息
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  DomainRealServerInfo
    : public ModelBase
{
public:
    DomainRealServerInfo();
    virtual ~DomainRealServerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainRealServerInfo members

    /// <summary>
    /// 源站类型
    /// </summary>

    int32_t getRealServerType() const;
    bool realServerTypeIsSet() const;
    void unsetrealServerType();
    void setRealServerType(int32_t value);

    /// <summary>
    /// 源站
    /// </summary>

    std::string getRealServers() const;
    bool realServersIsSet() const;
    void unsetrealServers();
    void setRealServers(const std::string& value);


protected:
    int32_t realServerType_;
    bool realServerTypeIsSet_;
    std::string realServers_;
    bool realServersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_DomainRealServerInfo_H_
