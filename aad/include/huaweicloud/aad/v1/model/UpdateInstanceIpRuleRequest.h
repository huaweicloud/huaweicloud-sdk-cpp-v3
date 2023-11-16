
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateInstanceIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateInstanceIpRuleRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/TransferRuleBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdateInstanceIpRuleRequest
    : public ModelBase
{
public:
    UpdateInstanceIpRuleRequest();
    virtual ~UpdateInstanceIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceIpRuleRequest members

    /// <summary>
    /// 实例Id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 单个 IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 规则ID
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TransferRuleBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TransferRuleBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    TransferRuleBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInstanceIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInstanceIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateInstanceIpRuleRequest_H_
