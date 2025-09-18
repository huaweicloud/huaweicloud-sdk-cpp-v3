
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldsRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/CreateCustomfieldV1Req.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateCustomfieldsRequest
    : public ModelBase
{
public:
    CreateCustomfieldsRequest();
    virtual ~CreateCustomfieldsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCustomfieldsRequest members

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

    CreateCustomfieldV1Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateCustomfieldV1Req& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    CreateCustomfieldV1Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCustomfieldsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCustomfieldsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldsRequest_H_
