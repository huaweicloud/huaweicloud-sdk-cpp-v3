
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCustomerIpsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCustomerIpsRequest_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  ListCustomerIpsRequest
    : public ModelBase
{
public:
    ListCustomerIpsRequest();
    virtual ~ListCustomerIpsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCustomerIpsRequest members

    /// <summary>
    /// 动作（0：只记录日志，1：重置/拦截）
    /// </summary>

    int32_t getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(int32_t value);

    /// <summary>
    /// 操作系统
    /// </summary>

    int32_t getAffectedOs() const;
    bool affectedOsIsSet() const;
    void unsetaffectedOs();
    void setAffectedOs(int32_t value);

    /// <summary>
    /// 攻击类型
    /// </summary>

    int32_t getAttackType() const;
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(int32_t value);

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// ips规则名称
    /// </summary>

    std::string getIpsName() const;
    bool ipsNameIsSet() const;
    void unsetipsName();
    void setIpsName(const std::string& value);

    /// <summary>
    /// 分页查询数据量限制
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 防护对象ID，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。此处仅取type为1的防护对象id，可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 查询偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 协议
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// 严重程度（critical：致命，high：高危，medium:中危，low:低危）
    /// </summary>

    int32_t getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(int32_t value);

    /// <summary>
    /// 影响软件
    /// </summary>

    int32_t getSoftware() const;
    bool softwareIsSet() const;
    void unsetsoftware();
    void setSoftware(int32_t value);

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    int32_t actionType_;
    bool actionTypeIsSet_;
    int32_t affectedOs_;
    bool affectedOsIsSet_;
    int32_t attackType_;
    bool attackTypeIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string ipsName_;
    bool ipsNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    int32_t severity_;
    bool severityIsSet_;
    int32_t software_;
    bool softwareIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCustomerIpsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCustomerIpsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListCustomerIpsRequest_H_
