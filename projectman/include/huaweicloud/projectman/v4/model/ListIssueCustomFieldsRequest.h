
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ListIssueCustomFieldsRequestBody.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueCustomFieldsRequest
    : public ModelBase
{
public:
    ListIssueCustomFieldsRequest();
    virtual ~ListIssueCustomFieldsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueCustomFieldsRequest members

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

    ListIssueCustomFieldsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListIssueCustomFieldsRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    ListIssueCustomFieldsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIssueCustomFieldsRequest& dereference_from_shared_ptr(std::shared_ptr<ListIssueCustomFieldsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsRequest_H_
