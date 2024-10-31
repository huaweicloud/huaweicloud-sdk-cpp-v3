
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureRuleAddressDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureRuleAddressDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CaptureRuleAddressDto
    : public ModelBase
{
public:
    CaptureRuleAddressDto();
    virtual ~CaptureRuleAddressDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaptureRuleAddressDto members

    /// <summary>
    /// 地址
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 目的地址类型0 ipv4，1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// 输入地址类型，目前只支持0，手工输入类型
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);


protected:
    std::string address_;
    bool addressIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;
    int32_t type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureRuleAddressDto_H_
