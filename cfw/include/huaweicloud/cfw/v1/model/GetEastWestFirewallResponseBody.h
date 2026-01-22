
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_GetEastWestFirewallResponseBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_GetEastWestFirewallResponseBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/EwProtectResourceInfo.h>
#include <huaweicloud/cfw/v1/model/VpcDetail.h>
#include <huaweicloud/cfw/v1/model/SubnetInfo.h>
#include <string>
#include <vector>
#include <huaweicloud/cfw/v1/model/ErInstance.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询东西向防火墙接口响应Body体
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  GetEastWestFirewallResponseBody
    : public ModelBase
{
public:
    GetEastWestFirewallResponseBody();
    virtual ~GetEastWestFirewallResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetEastWestFirewallResponseBody members

    /// <summary>
    /// **参数解释**： 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得。type为0时，object_id为互联网边界防护对象ID，type为1时，object_id为VPC边界防护对象ID。此处仅取type为1的防护对象id，可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得。 **取值范围**： 不涉及
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID，可以通过调用API获取，也可以从控制台获取。[项目ID获取方式](cfw_02_0015.xml) **取值范围**： 不涉及
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防护状态： 不涉及 **取值范围**： 0：已开启防护 1：未开启防护
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 云防火墙关联子网信息 **取值范围**： 不涉及
    /// </summary>

    std::vector<SubnetInfo>& getFirewallAssociatedSubnets();
    bool firewallAssociatedSubnetsIsSet() const;
    void unsetfirewallAssociatedSubnets();
    void setFirewallAssociatedSubnets(const std::vector<SubnetInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    ErInstance getEr() const;
    bool erIsSet() const;
    void unseter();
    void setEr(const ErInstance& value);

    /// <summary>
    /// 
    /// </summary>

    VpcDetail getInspectionVpc() const;
    bool inspectionVpcIsSet() const;
    void unsetinspectionVpc();
    void setInspectionVpc(const VpcDetail& value);

    /// <summary>
    /// **参数解释**： 东西向防护资源信息 **取值范围**： 不涉及
    /// </summary>

    std::vector<EwProtectResourceInfo>& getProtectInfos();
    bool protectInfosIsSet() const;
    void unsetprotectInfos();
    void setProtectInfos(const std::vector<EwProtectResourceInfo>& value);

    /// <summary>
    /// **参数解释**： 防护VPC总数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 偏移量：指定返回记录的开始位置 **取值范围**： 大于或等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 每页显示个数 **取值范围**： 1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 防护模式，值为er **取值范围**： 不涉及
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<SubnetInfo> firewallAssociatedSubnets_;
    bool firewallAssociatedSubnetsIsSet_;
    ErInstance er_;
    bool erIsSet_;
    VpcDetail inspectionVpc_;
    bool inspectionVpcIsSet_;
    std::vector<EwProtectResourceInfo> protectInfos_;
    bool protectInfosIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_GetEastWestFirewallResponseBody_H_
