
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteAclRuleRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteAclRuleRequest_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteAclRuleRequest
    : public ModelBase
{
public:
    DeleteAclRuleRequest();
    virtual ~DeleteAclRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAclRuleRequest members

    /// <summary>
    /// 规则id，可通过[查询防护规则接口](ListAclRules.xml)查询获得，通过返回值中的data.records.rule_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getAclRuleId() const;
    bool aclRuleIdIsSet() const;
    void unsetaclRuleId();
    void setAclRuleId(const std::string& value);

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙id，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);


protected:
    std::string aclRuleId_;
    bool aclRuleIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAclRuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAclRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteAclRuleRequest_H_
