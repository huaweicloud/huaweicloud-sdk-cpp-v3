
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AssociateIssuesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AssociateIssuesRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/AssociateIssuesRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  AssociateIssuesRequest
    : public ModelBase
{
public:
    AssociateIssuesRequest();
    virtual ~AssociateIssuesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateIssuesRequest members

    /// <summary>
    /// 
    /// </summary>

    AssociateIssuesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateIssuesRequestBody& value);


protected:
    AssociateIssuesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateIssuesRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateIssuesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AssociateIssuesRequest_H_
