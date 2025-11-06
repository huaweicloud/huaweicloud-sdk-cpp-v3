
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateProjectAndRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateProjectAndRepositoriesRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/CreateProjectRepoRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateProjectAndRepositoriesRequest
    : public ModelBase
{
public:
    CreateProjectAndRepositoriesRequest();
    virtual ~CreateProjectAndRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectAndRepositoriesRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateProjectRepoRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateProjectRepoRequest& value);


protected:
    CreateProjectRepoRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateProjectAndRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateProjectAndRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateProjectAndRepositoriesRequest_H_
