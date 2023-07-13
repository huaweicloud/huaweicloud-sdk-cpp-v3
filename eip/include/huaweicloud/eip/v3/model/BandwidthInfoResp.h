
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthInfoResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthInfoResp_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 弹性公网IP绑定的带宽信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BandwidthInfoResp
    : public ModelBase
{
public:
    BandwidthInfoResp();
    virtual ~BandwidthInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BandwidthInfoResp members

    /// <summary>
    /// - 功能说明：带宽名称
    /// </summary>

    std::string getBandwidthName() const;
    bool bandwidthNameIsSet() const;
    void unsetbandwidthName();
    void setBandwidthName(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽大小
    /// </summary>

    int32_t getBandwidthNumber() const;
    bool bandwidthNumberIsSet() const;
    void unsetbandwidthNumber();
    void setBandwidthNumber(int32_t value);

    /// <summary>
    /// - 功能说明：带宽类型
    /// </summary>

    std::string getBandwidthType() const;
    bool bandwidthTypeIsSet() const;
    void unsetbandwidthType();
    void setBandwidthType(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽id
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);


protected:
    std::string bandwidthName_;
    bool bandwidthNameIsSet_;
    int32_t bandwidthNumber_;
    bool bandwidthNumberIsSet_;
    std::string bandwidthType_;
    bool bandwidthTypeIsSet_;
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthInfoResp_H_
