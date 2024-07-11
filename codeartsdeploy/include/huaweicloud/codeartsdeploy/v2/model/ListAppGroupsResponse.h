
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAppGroupsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAppGroupsResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/AppGroupsEntity.h>
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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListAppGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAppGroupsResponse();
    virtual ~ListAppGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAppGroupsResponse members

    /// <summary>
    /// 分组信息列表
    /// </summary>

    std::vector<AppGroupsEntity>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<AppGroupsEntity>& value);

    /// <summary>
    /// 请求成功失败状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::vector<AppGroupsEntity> result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAppGroupsResponse_H_
