
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SetTaskResultRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SetTaskResultRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ExecuteTaskInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SetTaskResultRequest
    : public ModelBase
{
public:
    SetTaskResultRequest();
    virtual ~SetTaskResultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetTaskResultRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 任务uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteTaskInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExecuteTaskInfo& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    ExecuteTaskInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetTaskResultRequest& dereference_from_shared_ptr(std::shared_ptr<SetTaskResultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SetTaskResultRequest_H_
