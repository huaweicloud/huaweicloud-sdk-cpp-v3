
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTasksRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTasksRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/DeleteTaskInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchDeleteTasksRequest
    : public ModelBase
{
public:
    BatchDeleteTasksRequest();
    virtual ~BatchDeleteTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTasksRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteTaskInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteTaskInfo& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    DeleteTaskInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteTasksRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTasksRequest_H_
