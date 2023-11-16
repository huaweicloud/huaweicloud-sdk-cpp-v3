
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchDeleteInstanceIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchDeleteInstanceIpRuleRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/BatchIdBody.h>
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
class HUAWEICLOUD_AAD_V1_EXPORT  BatchDeleteInstanceIpRuleRequest
    : public ModelBase
{
public:
    BatchDeleteInstanceIpRuleRequest();
    virtual ~BatchDeleteInstanceIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInstanceIpRuleRequest members

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

    BatchIdBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchIdBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    BatchIdBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteInstanceIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteInstanceIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchDeleteInstanceIpRuleRequest_H_
