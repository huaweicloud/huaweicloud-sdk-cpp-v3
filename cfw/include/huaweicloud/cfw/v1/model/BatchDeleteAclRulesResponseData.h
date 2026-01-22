
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteAclRulesResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteAclRulesResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cfw/v1/model/BatchDeleteRuleInfo.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteAclRulesResponseData
    : public ModelBase
{
public:
    BatchDeleteAclRulesResponseData();
    virtual ~BatchDeleteAclRulesResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteAclRulesResponseData members

    /// <summary>
    /// **参数解释**： 批量删除规则返回 **取值范围**： 不涉及
    /// </summary>

    std::vector<BatchDeleteRuleInfo>& getResponseDatas();
    bool responseDatasIsSet() const;
    void unsetresponseDatas();
    void setResponseDatas(const std::vector<BatchDeleteRuleInfo>& value);


protected:
    std::vector<BatchDeleteRuleInfo> responseDatas_;
    bool responseDatasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteAclRulesResponseData_H_
