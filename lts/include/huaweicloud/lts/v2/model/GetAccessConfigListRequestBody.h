
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetAccessConfigListRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetAccessConfigListRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询日志接入列表请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetAccessConfigListRequestBody
    : public ModelBase
{
public:
    GetAccessConfigListRequestBody();
    virtual ~GetAccessConfigListRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetAccessConfigListRequestBody members

    /// <summary>
    /// 接入配置名称列表
    /// </summary>

    std::vector<std::string>& getAccessConfigNameList();
    bool accessConfigNameListIsSet() const;
    void unsetaccessConfigNameList();
    void setAccessConfigNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 主机组名称列表
    /// </summary>

    std::vector<std::string>& getHostGroupNameList();
    bool hostGroupNameListIsSet() const;
    void unsethostGroupNameList();
    void setHostGroupNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 日志组名称列表
    /// </summary>

    std::vector<std::string>& getLogGroupNameList();
    bool logGroupNameListIsSet() const;
    void unsetlogGroupNameList();
    void setLogGroupNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 日志流名称列表
    /// </summary>

    std::vector<std::string>& getLogStreamNameList();
    bool logStreamNameListIsSet() const;
    void unsetlogStreamNameList();
    void setLogStreamNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 接入配置标签，KEY不能重复,最多20个标签
    /// </summary>

    std::vector<AccessConfigTag>& getAccessConfigTagList();
    bool accessConfigTagListIsSet() const;
    void unsetaccessConfigTagList();
    void setAccessConfigTagList(const std::vector<AccessConfigTag>& value);


protected:
    std::vector<std::string> accessConfigNameList_;
    bool accessConfigNameListIsSet_;
    std::vector<std::string> hostGroupNameList_;
    bool hostGroupNameListIsSet_;
    std::vector<std::string> logGroupNameList_;
    bool logGroupNameListIsSet_;
    std::vector<std::string> logStreamNameList_;
    bool logStreamNameListIsSet_;
    std::vector<AccessConfigTag> accessConfigTagList_;
    bool accessConfigTagListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetAccessConfigListRequestBody_H_
