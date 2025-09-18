
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/CreateTaskRequestV2.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CreateTaskRequest
    : public ModelBase
{
public:
    CreateTaskRequest();
    virtual ~CreateTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTaskRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTaskRequestV2 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTaskRequestV2& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    CreateTaskRequestV2 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequest_H_
