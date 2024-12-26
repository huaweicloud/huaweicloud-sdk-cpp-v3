
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpsRules1Request_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpsRules1Request_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  ListIpsRules1Request
    : public ModelBase
{
public:
    ListIpsRules1Request();
    virtual ~ListIpsRules1Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpsRules1Request members

    /// <summary>
    /// 攻击对象
    /// </summary>

    int32_t getAffectedApplicationLike() const;
    bool affectedApplicationLikeIsSet() const;
    void unsetaffectedApplicationLike();
    void setAffectedApplicationLike(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int32_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int32_t value);

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// cve
    /// </summary>

    int32_t getIpsCveLike() const;
    bool ipsCveLikeIsSet() const;
    void unsetipsCveLike();
    void setIpsCveLike(int32_t value);

    /// <summary>
    /// ips组
    /// </summary>

    int32_t getIpsGroup() const;
    bool ipsGroupIsSet() const;
    void unsetipsGroup();
    void setIpsGroup(int32_t value);

    /// <summary>
    /// ips规则id
    /// </summary>

    std::string getIpsId() const;
    bool ipsIdIsSet() const;
    void unsetipsId();
    void setIpsId(const std::string& value);

    /// <summary>
    /// ips等级
    /// </summary>

    int32_t getIpsLevel() const;
    bool ipsLevelIsSet() const;
    void unsetipsLevel();
    void setIpsLevel(int32_t value);

    /// <summary>
    /// ips规则名称
    /// </summary>

    std::string getIpsNameLike() const;
    bool ipsNameLikeIsSet() const;
    void unsetipsNameLike();
    void setIpsNameLike(const std::string& value);

    /// <summary>
    /// ips规则类型
    /// </summary>

    int32_t getIpsRulesTypeLike() const;
    bool ipsRulesTypeLikeIsSet() const;
    void unsetipsRulesTypeLike();
    void setIpsRulesTypeLike(int32_t value);

    /// <summary>
    /// ips规则状态
    /// </summary>

    std::string getIpsStatus() const;
    bool ipsStatusIsSet() const;
    void unsetipsStatus();
    void setIpsStatus(const std::string& value);

    /// <summary>
    /// 是否查新更新规则
    /// </summary>

    bool isIsUpdatedIpsRuleQueried() const;
    bool isUpdatedIpsRuleQueriedIsSet() const;
    void unsetisUpdatedIpsRuleQueried();
    void setIsUpdatedIpsRuleQueried(bool value);

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
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    int32_t affectedApplicationLike_;
    bool affectedApplicationLikeIsSet_;
    int32_t createTime_;
    bool createTimeIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t ipsCveLike_;
    bool ipsCveLikeIsSet_;
    int32_t ipsGroup_;
    bool ipsGroupIsSet_;
    std::string ipsId_;
    bool ipsIdIsSet_;
    int32_t ipsLevel_;
    bool ipsLevelIsSet_;
    std::string ipsNameLike_;
    bool ipsNameLikeIsSet_;
    int32_t ipsRulesTypeLike_;
    bool ipsRulesTypeLikeIsSet_;
    std::string ipsStatus_;
    bool ipsStatusIsSet_;
    bool isUpdatedIpsRuleQueried_;
    bool isUpdatedIpsRuleQueriedIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIpsRules1Request& dereference_from_shared_ptr(std::shared_ptr<ListIpsRules1Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpsRules1Request_H_
