
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNotebookRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNotebookRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NotebookCreateRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateNotebookRequest
    : public ModelBase
{
public:
    CreateNotebookRequest();
    virtual ~CreateNotebookRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNotebookRequest members

    /// <summary>
    /// 
    /// </summary>

    NotebookCreateRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NotebookCreateRequest& value);


protected:
    NotebookCreateRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateNotebookRequest& dereference_from_shared_ptr(std::shared_ptr<CreateNotebookRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateNotebookRequest_H_
