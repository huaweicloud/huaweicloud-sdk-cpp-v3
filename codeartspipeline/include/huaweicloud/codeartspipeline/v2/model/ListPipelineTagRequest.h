
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineTagRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineTagRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelineTagRequest
    : public ModelBase
{
public:
    ListPipelineTagRequest();
    virtual ~ListPipelineTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelineTagRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjId() const;
    bool projIdIsSet() const;
    void unsetprojId();
    void setProjId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projId_;
    bool projIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPipelineTagRequest& dereference_from_shared_ptr(std::shared_ptr<ListPipelineTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineTagRequest_H_
