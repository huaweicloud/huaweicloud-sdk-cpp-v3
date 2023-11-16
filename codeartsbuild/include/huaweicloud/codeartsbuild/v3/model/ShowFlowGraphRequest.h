
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowFlowGraphRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowFlowGraphRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowFlowGraphRequest
    : public ModelBase
{
public:
    ShowFlowGraphRequest();
    virtual ~ShowFlowGraphRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlowGraphRequest members

    /// <summary>
    /// 父任务构建记录ID
    /// </summary>

    std::string getBuildFlowRecordId() const;
    bool buildFlowRecordIdIsSet() const;
    void unsetbuildFlowRecordId();
    void setBuildFlowRecordId(const std::string& value);


protected:
    std::string buildFlowRecordId_;
    bool buildFlowRecordIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFlowGraphRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFlowGraphRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowFlowGraphRequest_H_
