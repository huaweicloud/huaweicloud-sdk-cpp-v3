
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaAttachInterfaceFixedIp.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaAttachInterfaceOption
    : public ModelBase
{
public:
    NovaAttachInterfaceOption();
    virtual ~NovaAttachInterfaceOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAttachInterfaceOption members

    /// <summary>
    /// 私有IP。  有port_id时，该参数不起作用，并且有该参数时，必须有net_id。  只有列表中第一个元素有效。传入两个及以上元素会报错。
    /// </summary>

    std::vector<NovaAttachInterfaceFixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<NovaAttachInterfaceFixedIp>& value);

    /// <summary>
    ///   Network ID。  有port_id时，该参数不起作用。
    /// </summary>

    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);

    /// <summary>
    ///   Port ID。  port_id和net_id不能同时传入。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


protected:
    std::vector<NovaAttachInterfaceFixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceOption_H_
