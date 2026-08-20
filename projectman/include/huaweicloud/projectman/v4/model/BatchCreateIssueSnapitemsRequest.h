
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateIssueSnapitemsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateIssueSnapitemsRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/BatchCreateSnapshotRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchCreateIssueSnapitemsRequest
    : public ModelBase
{
public:
    BatchCreateIssueSnapitemsRequest();
    virtual ~BatchCreateIssueSnapitemsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateIssueSnapitemsRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreateSnapshotRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateSnapshotRequest& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    BatchCreateSnapshotRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateIssueSnapitemsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateIssueSnapitemsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateIssueSnapitemsRequest_H_
