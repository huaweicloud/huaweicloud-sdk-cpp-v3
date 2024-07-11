
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  MoveAppToGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    MoveAppToGroupResponse();
    virtual ~MoveAppToGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveAppToGroupResponse members

    /// <summary>
    /// 移动应用至指定分组结果，仅返回移动失败的列表
    /// </summary>

    std::vector<MoveAppToGroupResult>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<MoveAppToGroupResult>& value);

    /// <summary>
    /// 请求成功失败状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::vector<MoveAppToGroupResult> result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppToGroupResponse_H_
