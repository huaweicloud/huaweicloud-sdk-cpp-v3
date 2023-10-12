
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddRuleAclDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddRuleAclDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/AddRuleAclDto_rules.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// AddRuleAclDto
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddRuleAclDto
    : public ModelBase
{
public:
    AddRuleAclDto();
    virtual ~AddRuleAclDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRuleAclDto members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 规则type，0：互联网规则，1:vpc规则，2：nat规则
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// rules
    /// </summary>

    std::vector<AddRuleAclDto_rules>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<AddRuleAclDto_rules>& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::vector<AddRuleAclDto_rules> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddRuleAclDto_H_
