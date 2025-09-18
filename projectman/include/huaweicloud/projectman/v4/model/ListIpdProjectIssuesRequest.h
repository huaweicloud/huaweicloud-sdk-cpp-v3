
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdProjectIssuesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdProjectIssuesRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/SearchIpdIssuesRequestBody.h>
#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIpdProjectIssuesRequest
    : public ModelBase
{
public:
    ListIpdProjectIssuesRequest();
    virtual ~ListIpdProjectIssuesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpdProjectIssuesRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 是否backlog查询
    /// </summary>

    bool isIsBacklog() const;
    bool isBacklogIsSet() const;
    void unsetisBacklog();
    void setIsBacklog(bool value);

    /// <summary>
    /// 工作项分类：[Epic,FE,IR,RR,SR,US,AR,Bug,Task]
    /// </summary>

    std::string getIssueType() const;
    bool issueTypeIsSet() const;
    void unsetissueType();
    void setIssueType(const std::string& value);

    /// <summary>
    /// 提出项目Id
    /// </summary>

    std::string getSrcDomainId() const;
    bool srcDomainIdIsSet() const;
    void unsetsrcDomainId();
    void setSrcDomainId(const std::string& value);

    /// <summary>
    /// 视图模式[tree,list]
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SearchIpdIssuesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SearchIpdIssuesRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    bool isBacklog_;
    bool isBacklogIsSet_;
    std::string issueType_;
    bool issueTypeIsSet_;
    std::string srcDomainId_;
    bool srcDomainIdIsSet_;
    std::string view_;
    bool viewIsSet_;
    SearchIpdIssuesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIpdProjectIssuesRequest& dereference_from_shared_ptr(std::shared_ptr<ListIpdProjectIssuesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdProjectIssuesRequest_H_
