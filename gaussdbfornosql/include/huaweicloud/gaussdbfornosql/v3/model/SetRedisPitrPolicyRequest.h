
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetRedisPitrPolicyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetRedisPitrPolicyRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/SetRedisPitrPolicyRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SetRedisPitrPolicyRequest
    : public ModelBase
{
public:
    SetRedisPitrPolicyRequest();
    virtual ~SetRedisPitrPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRedisPitrPolicyRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetRedisPitrPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetRedisPitrPolicyRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    SetRedisPitrPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetRedisPitrPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<SetRedisPitrPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetRedisPitrPolicyRequest_H_
