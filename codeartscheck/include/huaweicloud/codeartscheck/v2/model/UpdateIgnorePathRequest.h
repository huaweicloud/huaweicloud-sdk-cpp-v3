
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateIgnorePathRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateIgnorePathRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/UpdateIgnorePathRequestBody.h>

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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  UpdateIgnorePathRequest
    : public ModelBase
{
public:
    UpdateIgnorePathRequest();
    virtual ~UpdateIgnorePathRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIgnorePathRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateIgnorePathRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateIgnorePathRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    UpdateIgnorePathRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateIgnorePathRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateIgnorePathRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateIgnorePathRequest_H_
