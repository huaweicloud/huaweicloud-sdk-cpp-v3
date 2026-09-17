
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListVariableGroupsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListVariableGroupsRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/ListVariableGroupsReq.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListVariableGroupsRequest
    : public ModelBase
{
public:
    ListVariableGroupsRequest();
    virtual ~ListVariableGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVariableGroupsRequest members

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

    ListVariableGroupsReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListVariableGroupsReq& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    ListVariableGroupsReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVariableGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListVariableGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListVariableGroupsRequest_H_
