
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateHyperinstanceTagsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateHyperinstanceTagsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TagRequest.h>
#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateHyperinstanceTagsRequest
    : public ModelBase
{
public:
    CreateHyperinstanceTagsRequest();
    virtual ~CreateHyperinstanceTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHyperinstanceTagsRequest members

    /// <summary>
    /// **参数解释**：Lite Server 超节点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TagRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TagRequest& value);


protected:
    std::string id_;
    bool idIsSet_;
    TagRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateHyperinstanceTagsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateHyperinstanceTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateHyperinstanceTagsRequest_H_
