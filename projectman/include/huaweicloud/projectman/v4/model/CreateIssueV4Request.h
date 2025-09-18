
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIssueV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIssueV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateIssueRequestV4.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateIssueV4Request
    : public ModelBase
{
public:
    CreateIssueV4Request();
    virtual ~CreateIssueV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIssueV4Request members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateIssueRequestV4 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateIssueRequestV4& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    CreateIssueRequestV4 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateIssueV4Request& dereference_from_shared_ptr(std::shared_ptr<CreateIssueV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIssueV4Request_H_
