
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIssuesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIssuesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/AssociateIpdIssuesResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AssociateIssuesResponse
    : public ModelBase, public HttpResponse
{
public:
    AssociateIssuesResponse();
    virtual ~AssociateIssuesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateIssuesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<AssociateIpdIssuesResp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<AssociateIpdIssuesResp>& value);


protected:
    std::vector<AssociateIpdIssuesResp> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AssociateIssuesResponse_H_
