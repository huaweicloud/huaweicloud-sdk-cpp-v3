
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchRiskRuleRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchRiskRuleRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/BatchSwitchesRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SwitchRiskRuleRequest
    : public ModelBase
{
public:
    SwitchRiskRuleRequest();
    virtual ~SwitchRiskRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchRiskRuleRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchSwitchesRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchSwitchesRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    BatchSwitchesRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SwitchRiskRuleRequest& dereference_from_shared_ptr(std::shared_ptr<SwitchRiskRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchRiskRuleRequest_H_
