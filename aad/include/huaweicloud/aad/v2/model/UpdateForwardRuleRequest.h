
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateForwardRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateForwardRuleRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/aad/v2/model/UpdateForwardRuleRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  UpdateForwardRuleRequest
    : public ModelBase
{
public:
    UpdateForwardRuleRequest();
    virtual ~UpdateForwardRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateForwardRuleRequest members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 规则id
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 高防ip
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateForwardRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateForwardRuleRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    UpdateForwardRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateForwardRuleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateForwardRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateForwardRuleRequest_H_
