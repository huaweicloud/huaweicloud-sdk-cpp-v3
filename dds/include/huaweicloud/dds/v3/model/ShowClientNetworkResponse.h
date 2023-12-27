
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowClientNetworkResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowClientNetworkResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowClientNetworkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClientNetworkResponse();
    virtual ~ShowClientNetworkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClientNetworkResponse members

    /// <summary>
    /// 实例ID，可以调用“[查询实例列表和详情](x-wc://file&#x3D;zh-cn_topic_0000001369935045.xml)”接口获取。如果未申请实例，可以调用“[创建实例](x-wc://file&#x3D;zh-cn_topic_0000001369734929.xml)”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 客户端所在网段。 &gt; - [跨网段访问配置只有在客户端与副本集实例部署在不同网段的情况下才允许配置，例如访问副本集的客户端所在网段为192.168.0.0/16，副本集所在的网段为172.16.0.0/24，则需要添加跨网段配置192.168.0.0/16才能正常访问。只有副本集有该功能。](tag:ccs,cmcc,ctc,dt,dt_test,fcs,fcs_dt,g42,hic,hk_g42,hk_sbc,hc,hws_ocb,hws_sbc,ocb,tlf,tm,hk,hws_eu)
    /// </summary>

    std::vector<std::string>& getClientNetworkRanges();
    bool clientNetworkRangesIsSet() const;
    void unsetclientNetworkRanges();
    void setClientNetworkRanges(const std::vector<std::string>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::vector<std::string> clientNetworkRanges_;
    bool clientNetworkRangesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowClientNetworkResponse_H_
