
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  SetChargeModesResponse
    : public ModelBase, public HttpResponse
{
public:
    SetChargeModesResponse();
    virtual ~SetChargeModesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetChargeModesResponse members

    /// <summary>
    /// 账号的计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 加速类型
    /// </summary>

    std::string getProductType() const;
    bool productTypeIsSet() const;
    void unsetproductType();
    void setProductType(const std::string& value);

    /// <summary>
    /// 该模式生效时间
    /// </summary>

    int64_t getEffectiveTime() const;
    bool effectiveTimeIsSet() const;
    void unseteffectiveTime();
    void setEffectiveTime(int64_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 该模式的区域
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 状态,首次开通状态为active,之后修改为upcoming
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string productType_;
    bool productTypeIsSet_;
    int64_t effectiveTime_;
    bool effectiveTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_SetChargeModesResponse_H_
