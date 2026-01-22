
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListEipsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListEipsRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListEipsRequest
    : public ModelBase
{
public:
    ListEipsRequest();
    virtual ~ListEipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEipsRequest members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，type为0时，object_id为互联网边界防护对象ID，type为1时，object_id为VPC边界防护对象ID。此处仅取type为0的防护对象id，可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 查询防护EIP列表关键字，可选用弹性公网ID和弹性公网IP
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 防护状态 null-全部 0-开启防护 1-关闭防护
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 是否同步租户EIP数据 0-不同步 1-同步
    /// </summary>

    int32_t getSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(int32_t value);

    /// <summary>
    /// 每页显示个数，范围为1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量：指定返回记录的开始位置，必须为数字，取值范围为大于或等于0，默认0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 设备关键字，是eip绑定的资产的名称或id，可通过EIP服务的查询弹性公网IP列表接口获取，通过返回值中的publicips.id（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getDeviceKey() const;
    bool deviceKeyIsSet() const;
    void unsetdeviceKey();
    void setDeviceKey(const std::string& value);

    /// <summary>
    /// 地址类型0 ipv4，1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 防火墙关键字，可使用防火墙ID或名称查询，可通过[防火墙ID获取方式](cfw_02_0028.xml)
    /// </summary>

    std::string getFwKeyWord() const;
    bool fwKeyWordIsSet() const;
    void unsetfwKeyWord();
    void setFwKeyWord(const std::string& value);

    /// <summary>
    /// 弹性公网ip的企业项目id，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，租户未开启企业项目时为0
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);

    /// <summary>
    /// 标签列表信息可通过查询EIP服务界面列表标签页签获得
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t sync_;
    bool syncIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string deviceKey_;
    bool deviceKeyIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string fwKeyWord_;
    bool fwKeyWordIsSet_;
    std::string epsId_;
    bool epsIdIsSet_;
    std::string tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEipsRequest& dereference_from_shared_ptr(std::shared_ptr<ListEipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListEipsRequest_H_
