
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppDeleteResult_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppDeleteResult_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除应用结果
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  AppDeleteResult
    : public ModelBase
{
public:
    AppDeleteResult();
    virtual ~AppDeleteResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppDeleteResult members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// 删除是否成功 success | error
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 删除失败原因
    /// </summary>

    std::string getErrorReason() const;
    bool errorReasonIsSet() const;
    void unseterrorReason();
    void setErrorReason(const std::string& value);


protected:
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string errorReason_;
    bool errorReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppDeleteResult_H_
