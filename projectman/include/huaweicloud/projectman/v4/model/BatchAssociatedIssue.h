
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchAssociatedIssue_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchAssociatedIssue_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/StatusVo.h>
#include <huaweicloud/projectman/v4/model/SimpleProject.h>
#include <string>
#include <huaweicloud/projectman/v4/model/SimpleUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联工作项详情
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchAssociatedIssue
    : public ModelBase
{
public:
    BatchAssociatedIssue();
    virtual ~BatchAssociatedIssue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAssociatedIssue members

    /// <summary>
    /// 关联工作项ID
    /// </summary>

    int32_t getSourceIssueId() const;
    bool sourceIssueIdIsSet() const;
    void unsetsourceIssueId();
    void setSourceIssueId(int32_t value);

    /// <summary>
    /// 工作项标题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 工作项ID
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    SimpleProject getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const SimpleProject& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUser getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const SimpleUser& value);

    /// <summary>
    /// 
    /// </summary>

    StatusVo getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const StatusVo& value);


protected:
    int32_t sourceIssueId_;
    bool sourceIssueIdIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    SimpleProject project_;
    bool projectIsSet_;
    SimpleUser user_;
    bool userIsSet_;
    StatusVo status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchAssociatedIssue_H_
