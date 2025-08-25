
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeBandwidth_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeBandwidth_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeBandwidth
    : public ModelBase
{
public:
    NodeBandwidth();
    virtual ~NodeBandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeBandwidth members

    /// <summary>
    /// 带宽的计费类型： - 未传该字段，表示按带宽计费。 - 字段值为空，表示按带宽计费。 - 字段值为“traffic”，表示按流量计费。 - 字段为其它值，会导致创建云服务器失败。 &gt; - 按带宽计费：按公网传输速率（单位为Mbps）计费。当您的带宽利用率高于10%时，建议优先选择按带宽计费。 &gt; - 按流量计费：只允许在创建按需节点时指定，按公网传输的数据总量（单位为GB）计费。当您的带宽利用率低于10%时，建议优先选择按流量计费。 
    /// </summary>

    std::string getChargemode() const;
    bool chargemodeIsSet() const;
    void unsetchargemode();
    void setChargemode(const std::string& value);

    /// <summary>
    /// 带宽大小，取值请参见取值请参见申请EIP接口中bandwidth.size说明。 [链接请参见[申请EIP](https://support.huaweicloud.com/api-eip/eip_api_0001.html)](tag:hws) [链接请参见[申请EIP](https://support.huaweicloud.com/intl/zh-cn/api-eip/eip_api_0001.html)](tag:hws_hk) 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 带宽的共享类型，共享类型枚举：PER，表示独享，目前仅支持独享。
    /// </summary>

    std::string getSharetype() const;
    bool sharetypeIsSet() const;
    void unsetsharetype();
    void setSharetype(const std::string& value);


protected:
    std::string chargemode_;
    bool chargemodeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string sharetype_;
    bool sharetypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeBandwidth_H_
