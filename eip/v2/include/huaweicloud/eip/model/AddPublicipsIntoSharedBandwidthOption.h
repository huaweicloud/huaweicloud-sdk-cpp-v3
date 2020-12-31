
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_AddPublicipsIntoSharedBandwidthOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_AddPublicipsIntoSharedBandwidthOption_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <vector>
#include "huaweicloud/eip/model/InsertPublicipInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 带宽对象
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  AddPublicipsIntoSharedBandwidthOption
    : public ModelBase
{
public:
    AddPublicipsIntoSharedBandwidthOption();
    virtual ~AddPublicipsIntoSharedBandwidthOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddPublicipsIntoSharedBandwidthOption members

    /// <summary>
    /// 功能说明：要插入共享带宽的弹性公网IP或者IPv6端口信息  约束：WHOLE类型的带宽支持多个弹性公网IP或者IPv6端口，跟租户的配额相关，默认一个共享带宽的配额为20
    /// </summary>

    std::vector<InsertPublicipInfo>& getPublicipInfo();
    bool publicipInfoIsSet() const;
    void unsetpublicipInfo();
    void setPublicipInfo(const std::vector<InsertPublicipInfo>& value);


protected:
    std::vector<InsertPublicipInfo> publicipInfo_;
    bool publicipInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_AddPublicipsIntoSharedBandwidthOption_H_
