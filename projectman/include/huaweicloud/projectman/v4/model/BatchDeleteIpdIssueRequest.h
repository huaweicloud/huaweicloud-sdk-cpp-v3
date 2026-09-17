
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIpdIssueRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIpdIssueRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteIpdIssueRequest
    : public ModelBase
{
public:
    BatchDeleteIpdIssueRequest();
    virtual ~BatchDeleteIpdIssueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteIpdIssueRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 是否永久删除
    /// </summary>

    bool isIsPermanentDelete() const;
    bool isPermanentDeleteIsSet() const;
    void unsetisPermanentDelete();
    void setIsPermanentDelete(bool value);

    /// <summary>
    /// 工作项的提出项目ID
    /// </summary>

    std::string getSrcProjectId() const;
    bool srcProjectIdIsSet() const;
    void unsetsrcProjectId();
    void setSrcProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<std::string>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    bool isPermanentDelete_;
    bool isPermanentDeleteIsSet_;
    std::string srcProjectId_;
    bool srcProjectIdIsSet_;
    std::vector<std::string> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteIpdIssueRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteIpdIssueRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIpdIssueRequest_H_
