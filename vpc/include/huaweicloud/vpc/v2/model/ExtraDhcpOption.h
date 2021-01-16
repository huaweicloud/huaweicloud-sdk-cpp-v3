
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 子网配置的NTP地址对象
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ExtraDhcpOption
    : public ModelBase
{
public:
    ExtraDhcpOption();
    virtual ~ExtraDhcpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtraDhcpOption members

    /// <summary>
    /// 功能说明：子网配置的NTP地址名称 约束：目前只支持字段“ntp”
    /// </summary>

    std::string getOptName() const;
    bool optNameIsSet() const;
    void unsetoptName();
    void setOptName(const std::string& value);

    /// <summary>
    /// 功能说明：子网配置的NTP地址 约束：目前只支持IPv4地址，每个IP地址以逗号隔开，IP地址个数不能超过4个，不能存在相同地址。该字段为null表示取消该子网NTP的设置，不能为””(空字符串)。
    /// </summary>

    std::string getOptValue() const;
    bool optValueIsSet() const;
    void unsetoptValue();
    void setOptValue(const std::string& value);


protected:
    std::string optName_;
    bool optNameIsSet_;
    std::string optValue_;
    bool optValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOption_H_
