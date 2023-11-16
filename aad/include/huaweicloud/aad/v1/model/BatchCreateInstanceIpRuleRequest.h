
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchCreateInstanceIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchCreateInstanceIpRuleRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/BatchTransferRuleBody.h>
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
class HUAWEICLOUD_AAD_V1_EXPORT  BatchCreateInstanceIpRuleRequest
    : public ModelBase
{
public:
    BatchCreateInstanceIpRuleRequest();
    virtual ~BatchCreateInstanceIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateInstanceIpRuleRequest members

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
    /// 
    /// </summary>

    BatchTransferRuleBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchTransferRuleBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    BatchTransferRuleBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateInstanceIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateInstanceIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchCreateInstanceIpRuleRequest_H_
