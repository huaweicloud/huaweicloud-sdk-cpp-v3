
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateDockerRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateDockerRepositoriesRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoryDO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  CreateDockerRepositoriesRequest
    : public ModelBase
{
public:
    CreateDockerRepositoriesRequest();
    virtual ~CreateDockerRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDockerRepositoriesRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateDockerRepositoryDO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateDockerRepositoryDO& value);


protected:
    CreateDockerRepositoryDO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDockerRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDockerRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CreateDockerRepositoriesRequest_H_
