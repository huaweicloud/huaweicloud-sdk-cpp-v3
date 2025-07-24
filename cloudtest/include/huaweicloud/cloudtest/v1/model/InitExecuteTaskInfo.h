
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_InitExecuteTaskInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_InitExecuteTaskInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  InitExecuteTaskInfo
    : public ModelBase
{
public:
    InitExecuteTaskInfo();
    virtual ~InitExecuteTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InitExecuteTaskInfo members

    /// <summary>
    /// 版本信息
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 分支/迭代uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 是否只查询，不初始化（如果不存在）
    /// </summary>

    bool isIsQuery() const;
    bool isQueryIsSet() const;
    void unsetisQuery();
    void setIsQuery(bool value);


protected:
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    bool isQuery_;
    bool isQueryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_InitExecuteTaskInfo_H_
