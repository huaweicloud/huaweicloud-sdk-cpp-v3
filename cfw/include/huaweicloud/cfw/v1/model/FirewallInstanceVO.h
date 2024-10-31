
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallInstanceVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallInstanceVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/Flavor.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  FirewallInstanceVO
    : public ModelBase
{
public:
    FirewallInstanceVO();
    virtual ~FirewallInstanceVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FirewallInstanceVO members

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标记防火墙由系统自动生成的id。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 资源id，与防火墙实例id fw_instance_id相同
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 创建防火墙时的时间戳
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 防火墙名称
    /// </summary>

    std::string getFwInstanceName() const;
    bool fwInstanceNameIsSet() const;
    void unsetfwInstanceName();
    void setFwInstanceName(const std::string& value);

    /// <summary>
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 集群类型，包含主备（0）和集群（1）两种方式，主备模式包含四个节点，2个主节点构成集群，剩余两个节点为主节点的备节点，集群模式仅拉起两个节点作为集群。
    /// </summary>

    int32_t getHaType() const;
    bool haTypeIsSet() const;
    void unsethaType();
    void setHaType(int32_t value);

    /// <summary>
    /// 计费模式 0：包年/包月 1：按需
    /// </summary>

    int32_t getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(int32_t value);

    /// <summary>
    /// 防火墙防护类型，目前仅支持0，互联网防护。
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 引擎类型，0：自研引擎 1：山石引擎 3：天融信引擎
    /// </summary>

    int32_t getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Flavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const Flavor& value);

    /// <summary>
    /// 防火墙状态列表，包括-1：等待支付，0：创建中，1：删除中，2：运行中，3：升级中，4：删除完成：5：冻结中，6：创建失败，7：删除失败，8：冻结失败，9：存储中，10：存储失败，11：升级失败
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 标签列表，标签键值map转化的json字符串，如\&quot;{\\\&quot;key\\\&quot;:\\\&quot;value\\\&quot;}\&quot;
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string fwInstanceName_;
    bool fwInstanceNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t haType_;
    bool haTypeIsSet_;
    int32_t chargeMode_;
    bool chargeModeIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    int32_t engineType_;
    bool engineTypeIsSet_;
    Flavor flavor_;
    bool flavorIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallInstanceVO_H_
