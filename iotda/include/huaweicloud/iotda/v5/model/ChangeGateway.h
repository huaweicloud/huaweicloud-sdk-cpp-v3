
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChangeGateway_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChangeGateway_H_


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
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ChangeGateway
    : public ModelBase
{
public:
    ChangeGateway();
    virtual ~ChangeGateway();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeGateway members

    /// <summary>
    /// 网关ID，用于标识设备所属的父设备，即父设备的设备ID。
    /// </summary>

    std::string getGatewayId() const;
    bool gatewayIdIsSet() const;
    void unsetgatewayId();
    void setGatewayId(const std::string& value);


protected:
    std::string gatewayId_;
    bool gatewayIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ChangeGateway_H_
