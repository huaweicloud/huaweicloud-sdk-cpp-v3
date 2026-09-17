
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTaskInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTaskInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除测试套件参数
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteTaskInfo
    : public ModelBase
{
public:
    DeleteTaskInfo();
    virtual ~DeleteTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTaskInfo members

    /// <summary>
    /// 分支/迭代id
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 任务id数组
    /// </summary>

    std::vector<std::string>& getTaskUris();
    bool taskUrisIsSet() const;
    void unsettaskUris();
    void setTaskUris(const std::vector<std::string>& value);


protected:
    std::string versionUri_;
    bool versionUriIsSet_;
    std::vector<std::string> taskUris_;
    bool taskUrisIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTaskInfo_H_
