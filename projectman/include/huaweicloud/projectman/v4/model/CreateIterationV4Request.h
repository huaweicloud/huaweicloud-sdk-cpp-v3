
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIterationV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIterationV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateIterationRequestV4.h>
#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateIterationV4Request
    : public ModelBase
{
public:
    CreateIterationV4Request();
    virtual ~CreateIterationV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIterationV4Request members

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

    CreateIterationRequestV4 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateIterationRequestV4& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    CreateIterationRequestV4 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateIterationV4Request& dereference_from_shared_ptr(std::shared_ptr<CreateIterationV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIterationV4Request_H_
