
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteMembersV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteMembersV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/BatchDeleteMembersV4RequestBody.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteMembersV4Request
    : public ModelBase
{
public:
    BatchDeleteMembersV4Request();
    virtual ~BatchDeleteMembersV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteMembersV4Request members

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

    BatchDeleteMembersV4RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteMembersV4RequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    BatchDeleteMembersV4RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteMembersV4Request& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteMembersV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteMembersV4Request_H_
