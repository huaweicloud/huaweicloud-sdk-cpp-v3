
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ListSpecIssueStayTimesRequestBody.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListSpecIssueStayTimesRequest
    : public ModelBase
{
public:
    ListSpecIssueStayTimesRequest();
    virtual ~ListSpecIssueStayTimesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpecIssueStayTimesRequest members

    /// <summary>
    /// 
    /// </summary>

    ListSpecIssueStayTimesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListSpecIssueStayTimesRequestBody& value);


protected:
    ListSpecIssueStayTimesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSpecIssueStayTimesRequest& dereference_from_shared_ptr(std::shared_ptr<ListSpecIssueStayTimesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListSpecIssueStayTimesRequest_H_
