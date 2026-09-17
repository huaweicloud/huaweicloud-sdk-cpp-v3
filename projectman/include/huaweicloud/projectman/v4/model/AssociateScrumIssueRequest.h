
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateScrumIssueRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateScrumIssueRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/AssociateIssueRequest.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AssociateScrumIssueRequest
    : public ModelBase
{
public:
    AssociateScrumIssueRequest();
    virtual ~AssociateScrumIssueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateScrumIssueRequest members

    /// <summary>
    /// 
    /// </summary>

    AssociateIssueRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateIssueRequest& value);


protected:
    AssociateIssueRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateScrumIssueRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateScrumIssueRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateScrumIssueRequest_H_
