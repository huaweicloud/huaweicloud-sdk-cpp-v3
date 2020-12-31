
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateFloatingIpOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateFloatingIpOption_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 更新floatingip对象
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  UpdateFloatingIpOption
    : public ModelBase
{
public:
    UpdateFloatingIpOption();
    virtual ~UpdateFloatingIpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateFloatingIpOption members

    /// <summary>
    /// 端口id。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


protected:
    std::string portId_;
    bool portIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_UpdateFloatingIpOption_H_
