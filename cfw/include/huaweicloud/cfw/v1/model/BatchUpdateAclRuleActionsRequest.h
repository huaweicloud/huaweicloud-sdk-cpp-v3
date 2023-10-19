
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchUpdateAclRuleActionsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchUpdateAclRuleActionsRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/UpdateSecurityPolciesActionDto.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  BatchUpdateAclRuleActionsRequest
    : public ModelBase
{
public:
    BatchUpdateAclRuleActionsRequest();
    virtual ~BatchUpdateAclRuleActionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateAclRuleActionsRequest members

    /// <summary>
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSecurityPolciesActionDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSecurityPolciesActionDto& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    UpdateSecurityPolciesActionDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateAclRuleActionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateAclRuleActionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchUpdateAclRuleActionsRequest_H_
