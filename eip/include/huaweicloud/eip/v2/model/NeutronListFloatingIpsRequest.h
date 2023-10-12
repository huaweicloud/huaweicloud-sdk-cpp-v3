
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronListFloatingIpsRequest
    : public ModelBase
{
public:
    NeutronListFloatingIpsRequest();
    virtual ~NeutronListFloatingIpsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListFloatingIpsRequest members

    /// <summary>
    /// 每页显示的条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 取值为上一页数据的最后一条记录的id，当marker参数为无效id时，response将响应错误码400
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// False/True，是否设置分页的顺序。
    /// </summary>

    bool isPageReverse() const;
    bool pageReverseIsSet() const;
    void unsetpageReverse();
    void setPageReverse(bool value);

    /// <summary>
    /// 浮动IP的id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 浮动IP地址。
    /// </summary>

    std::string getFloatingIpAddress() const;
    bool floatingIpAddressIsSet() const;
    void unsetfloatingIpAddress();
    void setFloatingIpAddress(const std::string& value);

    /// <summary>
    /// 所属路由器id。
    /// </summary>

    std::string getRouterId() const;
    bool routerIdIsSet() const;
    void unsetrouterId();
    void setRouterId(const std::string& value);

    /// <summary>
    /// 端口id。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 关联端口的私有IP地址。
    /// </summary>

    std::string getFixedIpAddress() const;
    bool fixedIpAddressIsSet() const;
    void unsetfixedIpAddress();
    void setFixedIpAddress(const std::string& value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 外部网络的id。只能使用固定的外网，外部网络的信息请通过GET /v2.0/networks?router:external&#x3D;True或GET /v2.0/networks?name&#x3D;{floating_network}或neutron net-external-list方式查询
    /// </summary>

    std::string getFloatingNetworkId() const;
    bool floatingNetworkIdIsSet() const;
    void unsetfloatingNetworkId();
    void setFloatingNetworkId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    bool pageReverse_;
    bool pageReverseIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    std::string routerId_;
    bool routerIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string fixedIpAddress_;
    bool fixedIpAddressIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string floatingNetworkId_;
    bool floatingNetworkIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListFloatingIpsRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListFloatingIpsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsRequest_H_
