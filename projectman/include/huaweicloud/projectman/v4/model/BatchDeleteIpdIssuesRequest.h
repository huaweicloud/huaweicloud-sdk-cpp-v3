
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIpdIssuesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIpdIssuesRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteIpdIssuesRequest
    : public ModelBase
{
public:
    BatchDeleteIpdIssuesRequest();
    virtual ~BatchDeleteIpdIssuesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteIpdIssuesRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否永久删除。 **约束限制**： 不涉及。 **取值范围**： - true：彻底删除工作项（适用于回收站中的工作项，彻底删除后不可恢复）。 - false：将工作项移入回收站。 **默认取值**： false。
    /// </summary>

    bool isIsPermanentDelete() const;
    bool isPermanentDeleteIsSet() const;
    void unsetisPermanentDelete();
    void setIsPermanentDelete(bool value);

    /// <summary>
    /// **参数解释**： 当工作项类型为RR或Bug时，工作项的提出项目ID。通过[查询IPD项目列表](ShowIpdProjectList.xml)获取，响应消息体中的**id**字段的值就是项目ID。 **约束限制**： 归属项目和提出项目一致时可不传。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
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
    BatchDeleteIpdIssuesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteIpdIssuesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIpdIssuesRequest_H_
