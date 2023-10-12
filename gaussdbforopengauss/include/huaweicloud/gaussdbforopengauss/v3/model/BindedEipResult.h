
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindedEipResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindedEipResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询已绑定EIP记录明细信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BindedEipResult
    : public ModelBase
{
public:
    BindedEipResult();
    virtual ~BindedEipResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindedEipResult members

    /// <summary>
    /// 弹性公网ID。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// 弹性公网类型。
    /// </summary>

    std::string getPublicIpType() const;
    bool publicIpTypeIsSet() const;
    void unsetpublicIpType();
    void setPublicIpType(const std::string& value);

    /// <summary>
    /// 端口ID。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 弹性公网IP。
    /// </summary>

    std::string getPublicIpAddress() const;
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::string& value);

    /// <summary>
    /// 内网地址。
    /// </summary>

    std::string getPrivateIpAddress() const;
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::string& value);

    /// <summary>
    /// 带宽ID。
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// 带宽名称。
    /// </summary>

    std::string getBandwidthName() const;
    bool bandwidthNameIsSet() const;
    void unsetbandwidthName();
    void setBandwidthName(const std::string& value);

    /// <summary>
    /// 带宽共享类型。
    /// </summary>

    std::string getBandwidthShareType() const;
    bool bandwidthShareTypeIsSet() const;
    void unsetbandwidthShareType();
    void setBandwidthShareType(const std::string& value);

    /// <summary>
    /// 带宽大小。
    /// </summary>

    int32_t getBandwidthSize() const;
    bool bandwidthSizeIsSet() const;
    void unsetbandwidthSize();
    void setBandwidthSize(int32_t value);

    /// <summary>
    /// 修改时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+08:00。
    /// </summary>

    std::string getAppliedAt() const;
    bool appliedAtIsSet() const;
    void unsetappliedAt();
    void setAppliedAt(const std::string& value);


protected:
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    std::string publicIpType_;
    bool publicIpTypeIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string privateIpAddress_;
    bool privateIpAddressIsSet_;
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    std::string bandwidthName_;
    bool bandwidthNameIsSet_;
    std::string bandwidthShareType_;
    bool bandwidthShareTypeIsSet_;
    int32_t bandwidthSize_;
    bool bandwidthSizeIsSet_;
    std::string appliedAt_;
    bool appliedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindedEipResult_H_
