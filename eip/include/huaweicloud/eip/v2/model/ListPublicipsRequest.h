
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_EIP_V2_EXPORT  ListPublicipsRequest
    : public ModelBase
{
public:
    ListPublicipsRequest();
    virtual ~ListPublicipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipsRequest members

    /// <summary>
    /// 取值为上一页数据的最后一条记录的id，为空时为查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 功能说明：每页返回的个数  取值范围：0~intmax
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// IP地址版本信息  4：IPv4  6：IPv6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 功能说明：企业项目ID。可以使用该字段过滤某个企业项目下的弹性IP弹性公网IP。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。若需要查询当前用户所有企业项目绑定的弹性公网IP，请传参all_granted_eps。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 绑定弹性公网IP的端口id
    /// </summary>

    std::vector<std::string>& getPortId();
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::vector<std::string>& value);

    /// <summary>
    /// IPv4时是申请到的弹性公网IP地址，IPv6时是IPv6地址对应的IPv4地址
    /// </summary>

    std::vector<std::string>& getPublicIpAddress();
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 关联端口的私有IP地址
    /// </summary>

    std::vector<std::string>& getPrivateIpAddress();
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 弹性公网IP唯一标识
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 共享带宽类型，根据任一共享带宽类型过滤EIP列表。 可以指定多个带宽类型，不同的带宽类型间用逗号分隔。
    /// </summary>

    std::vector<std::string>& getAllowShareBandwidthTypeAny();
    bool allowShareBandwidthTypeAnyIsSet() const;
    void unsetallowShareBandwidthTypeAny();
    void setAllowShareBandwidthTypeAny(const std::vector<std::string>& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> portId_;
    bool portIdIsSet_;
    std::vector<std::string> publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::vector<std::string> privateIpAddress_;
    bool privateIpAddressIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> allowShareBandwidthTypeAny_;
    bool allowShareBandwidthTypeAnyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPublicipsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPublicipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsRequest_H_
