
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigFormatCreate.h>
#include <string>
#include <vector>
#include <huaweicloud/lts/v2/model/AccessConfigWindowsLogInfoCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入详细信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigDeatilCreate
    : public ModelBase
{
public:
    AccessConfigDeatilCreate();
    virtual ~AccessConfigDeatilCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AccessConfigDeatilCreate members

    /// <summary>
    /// 采集路径。 1. 路径必须以/或者字母:\\\\开头 2. 不能包含特殊字符&lt;&gt; &#39; | \&quot; 且不能只输入/ 3. 第一级目录不支持通配符*：不能以/_**   /_*开头 4.**只能出现一次
    /// </summary>

    std::vector<std::string>& getPaths();
    bool pathsIsSet() const;
    void unsetpaths();
    void setPaths(const std::vector<std::string>& value);

    /// <summary>
    /// 采集路径黑名单。 1. 路径必须以/或者字母:\\\\开头 2. 不能包含特殊字符&lt;&gt; &#39; | \&quot; 且不能只输入/ 3. 第一级目录不支持通配符*：不能以/_**   /_*开头 4.**只能出现一次
    /// </summary>

    std::vector<std::string>& getBlackPaths();
    bool blackPathsIsSet() const;
    void unsetblackPaths();
    void setBlackPaths(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigFormatCreate getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const AccessConfigFormatCreate& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigWindowsLogInfoCreate getWindowsLogInfo() const;
    bool windowsLogInfoIsSet() const;
    void unsetwindowsLogInfo();
    void setWindowsLogInfo(const AccessConfigWindowsLogInfoCreate& value);


protected:
    std::vector<std::string> paths_;
    bool pathsIsSet_;
    std::vector<std::string> blackPaths_;
    bool blackPathsIsSet_;
    AccessConfigFormatCreate format_;
    bool formatIsSet_;
    AccessConfigWindowsLogInfoCreate windowsLogInfo_;
    bool windowsLogInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigDeatilCreate_H_