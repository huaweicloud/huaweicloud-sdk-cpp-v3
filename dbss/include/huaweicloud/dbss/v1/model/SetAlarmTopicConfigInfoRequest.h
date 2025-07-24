
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAlarmTopicConfigInfoRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAlarmTopicConfigInfoRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/ConfigAlarmTopicRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  SetAlarmTopicConfigInfoRequest
    : public ModelBase
{
public:
    SetAlarmTopicConfigInfoRequest();
    virtual ~SetAlarmTopicConfigInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAlarmTopicConfigInfoRequest members

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

    ConfigAlarmTopicRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ConfigAlarmTopicRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    ConfigAlarmTopicRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetAlarmTopicConfigInfoRequest& dereference_from_shared_ptr(std::shared_ptr<SetAlarmTopicConfigInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAlarmTopicConfigInfoRequest_H_
