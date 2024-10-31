
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchUpdateAclRuleActionsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchUpdateAclRuleActionsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BatchUpdateAclRuleActionsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdateAclRuleActionsResponse();
    virtual ~BatchUpdateAclRuleActionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateAclRuleActionsResponse members

    /// <summary>
    /// 批量更新acl规则id，为请求体中传入的规则id
    /// </summary>

    std::vector<std::string>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<std::string>& value);


protected:
    std::vector<std::string> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchUpdateAclRuleActionsResponse_H_
