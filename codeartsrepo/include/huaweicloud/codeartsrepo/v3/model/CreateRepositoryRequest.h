
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateRepositoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateRepositoryRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/CreateRepoRequest.h>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateRepositoryRequest
    : public ModelBase
{
public:
    CreateRepositoryRequest();
    virtual ~CreateRepositoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRepositoryRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateRepoRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateRepoRequest& value);


protected:
    CreateRepoRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRepositoryRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRepositoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateRepositoryRequest_H_
