
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAlarmRuleStatusRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAlarmRuleStatusRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/ChangeAlarmRuleStatus.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateAlarmRuleStatusRequest
    : public ModelBase
{
public:
    UpdateAlarmRuleStatusRequest();
    virtual ~UpdateAlarmRuleStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAlarmRuleStatusRequest members

    /// <summary>
    /// 
    /// </summary>

    ChangeAlarmRuleStatus getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeAlarmRuleStatus& value);


protected:
    ChangeAlarmRuleStatus body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAlarmRuleStatusRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAlarmRuleStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAlarmRuleStatusRequest_H_
