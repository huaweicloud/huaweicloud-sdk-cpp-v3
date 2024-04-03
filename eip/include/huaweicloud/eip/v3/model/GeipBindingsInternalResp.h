
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_GeipBindingsInternalResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_GeipBindingsInternalResp_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/BackboneBandwidthResp.h>
#include <huaweicloud/eip/v3/model/InstanceVnicResp.h>
#include <vector>
#include <huaweicloud/eip/v3/model/InstancevirtualListResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// GEIP绑定关系对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  GeipBindingsInternalResp
    : public ModelBase
{
public:
    GeipBindingsInternalResp();
    virtual ~GeipBindingsInternalResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeipBindingsInternalResp members

    /// <summary>
    /// GEIP的uuid
    /// </summary>

    std::string getGeipId() const;
    bool geipIdIsSet() const;
    void unsetgeipId();
    void setGeipId(const std::string& value);

    /// <summary>
    /// GEIP的ip地址
    /// </summary>

    std::string getGeipIpAddress() const;
    bool geipIpAddressIsSet() const;
    void unsetgeipIpAddress();
    void setGeipIpAddress(const std::string& value);

    /// <summary>
    /// 中心站点or边缘站点，默认展示
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 绑定实例的类型
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 绑定实例的id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackboneBandwidthResp getGcbandwidth() const;
    bool gcbandwidthIsSet() const;
    void unsetgcbandwidth();
    void setGcbandwidth(const BackboneBandwidthResp& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceVnicResp getVnic() const;
    bool vnicIsSet() const;
    void unsetvnic();
    void setVnic(const InstanceVnicResp& value);

    /// <summary>
    /// GEIP实例的vn信息
    /// </summary>

    std::vector<InstancevirtualListResp>& getVnList();
    bool vnListIsSet() const;
    void unsetvnList();
    void setVnList(const std::vector<InstancevirtualListResp>& value);


protected:
    std::string geipId_;
    bool geipIdIsSet_;
    std::string geipIpAddress_;
    bool geipIpAddressIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    BackboneBandwidthResp gcbandwidth_;
    bool gcbandwidthIsSet_;
    InstanceVnicResp vnic_;
    bool vnicIsSet_;
    std::vector<InstancevirtualListResp> vnList_;
    bool vnListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_GeipBindingsInternalResp_H_
