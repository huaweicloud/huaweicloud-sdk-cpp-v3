
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveGroupRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveGroupRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/MoveJobGroupRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  MoveGroupRequest
    : public ModelBase
{
public:
    MoveGroupRequest();
    virtual ~MoveGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveGroupRequest members

    /// <summary>
    /// CodeArts项目ID，32位数字、小写字母组合。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MoveJobGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MoveJobGroupRequestBody& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    MoveJobGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MoveGroupRequest& dereference_from_shared_ptr(std::shared_ptr<MoveGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveGroupRequest_H_
