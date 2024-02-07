
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_NexthopDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_NexthopDict_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 下一跳对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  NexthopDict
    : public ModelBase
{
public:
    NexthopDict();
    virtual ~NexthopDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NexthopDict members

    /// <summary>
    /// 功能说明：下一跳的实际地址  约束：同一virtualnexthop中的nexthops列表，不同下一跳之间的地址不允许重复
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：标识主备模式，与virtualnexthop的forward_mode配合使用  取值范围：&#39;ACTIVE&#39;主、&#39;STANDBY&#39;备
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_NexthopDict_H_
