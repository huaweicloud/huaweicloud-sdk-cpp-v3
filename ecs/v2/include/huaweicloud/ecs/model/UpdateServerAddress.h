
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerAddress_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerAddress_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

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
class HUAWEICLOUD_ECS_EXPORT  UpdateServerAddress
    : public ModelBase
{
public:
    UpdateServerAddress();
    virtual ~UpdateServerAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerAddress members

    /// <summary>
    /// IP地址版本。  - 4：代表IPv4。 - 6：代表IPv6。
    /// </summary>

    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);

    /// <summary>
    /// IP地址。
    /// </summary>

    std::string getAddr() const;
    bool addrIsSet() const;
    void unsetaddr();
    void setAddr(const std::string& value);


protected:
    int32_t version_;
    bool versionIsSet_;
    std::string addr_;
    bool addrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerAddress_H_
