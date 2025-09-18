
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTaskParameterRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTaskParameterRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/ConfigTaskParameterBody.h>
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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListTaskParameterRequest
    : public ModelBase
{
public:
    ListTaskParameterRequest();
    virtual ~ListTaskParameterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTaskParameterRequest members

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

    ConfigTaskParameterBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ConfigTaskParameterBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    ConfigTaskParameterBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTaskParameterRequest& dereference_from_shared_ptr(std::shared_ptr<ListTaskParameterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTaskParameterRequest_H_
