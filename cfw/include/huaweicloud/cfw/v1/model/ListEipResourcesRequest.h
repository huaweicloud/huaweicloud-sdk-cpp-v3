
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListEipResourcesRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListEipResourcesRequest_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  ListEipResourcesRequest
    : public ModelBase
{
public:
    ListEipResourcesRequest();
    virtual ~ListEipResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListEipResourcesRequest members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 弹性公网ID/弹性公网IP
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
    /// 每页显示个数
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
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 设备键
    /// </summary>

    std::string getDeviceKey() const;
    bool deviceKeyIsSet() const;
    void unsetdeviceKey();
    void setDeviceKey(const std::string& value);

    /// <summary>
    /// 地址类型0 ipv4,1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用查询防火墙实例接口获得。具体可参考APIExlorer和帮助中心FAQ。默认情况下，fw_instance_Id为空时，返回帐号下第一个墙的信息；fw_instance_Id非空时，返回与fw_instance_Id对应墙的信息。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 所绑定防火墙id防火墙名称
    /// </summary>

    std::string getFwKeyWord() const;
    bool fwKeyWordIsSet() const;
    void unsetfwKeyWord();
    void setFwKeyWord(const std::string& value);

    /// <summary>
    /// 弹性公网ip的企业项目id
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);


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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEipResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<ListEipResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListEipResourcesRequest_H_
