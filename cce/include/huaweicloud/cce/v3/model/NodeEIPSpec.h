
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeEIPSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeEIPSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/NodeBandwidth.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodeEIPSpec
    : public ModelBase
{
public:
    NodeEIPSpec();
    virtual ~NodeEIPSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeEIPSpec members

    /// <summary>
    /// 弹性IP类型，取值请参见申请EIP接口中publicip.type说明。 [链接请参见[申请EIP](https://support.huaweicloud.com/api-eip/eip_api_0001.html)](tag:hws) [链接请参见[申请EIP](https://support.huaweicloud.com/intl/zh-cn/api-eip/eip_api_0001.html)](tag:hws_hk) 
    /// </summary>

    std::string getIptype() const;
    bool iptypeIsSet() const;
    void unsetiptype();
    void setIptype(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeBandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const NodeBandwidth& value);


protected:
    std::string iptype_;
    bool iptypeIsSet_;
    NodeBandwidth bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeEIPSpec_H_
