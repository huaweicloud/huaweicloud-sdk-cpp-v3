
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowTenantDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowTenantDict_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/ExtLimitPojo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ShowTenantDict
    : public ModelBase
{
public:
    ShowTenantDict();
    virtual ~ShowTenantDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantDict members

    /// <summary>
    /// - 功能说明：弹性公网IP的唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 带宽的计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 该类型带宽可购买的最小size
    /// </summary>

    int32_t getMinSize() const;
    bool minSizeIsSet() const;
    void unsetminSize();
    void setMinSize(int32_t value);

    /// <summary>
    /// 该类型带宽可购买的最大size
    /// </summary>

    int32_t getMaxSize() const;
    bool maxSizeIsSet() const;
    void unsetmaxSize();
    void setMaxSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ExtLimitPojo getExtLimit() const;
    bool extLimitIsSet() const;
    void unsetextLimit();
    void setExtLimit(const ExtLimitPojo& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    int32_t minSize_;
    bool minSizeIsSet_;
    int32_t maxSize_;
    bool maxSizeIsSet_;
    ExtLimitPojo extLimit_;
    bool extLimitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowTenantDict_H_
