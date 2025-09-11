
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_RepoInfo_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_RepoInfo_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储库信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  RepoInfo
    : public ModelBase
{
public:
    RepoInfo();
    virtual ~RepoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoInfo members

    /// <summary>
    /// http地址
    /// </summary>

    std::string getHttpsUrl() const;
    bool httpsUrlIsSet() const;
    void unsethttpsUrl();
    void setHttpsUrl(const std::string& value);

    /// <summary>
    /// 存储库链接
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 存储库状态
    /// </summary>

    std::string getRepoStatus() const;
    bool repoStatusIsSet() const;
    void unsetrepoStatus();
    void setRepoStatus(const std::string& value);

    /// <summary>
    /// 报错信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string httpsUrl_;
    bool httpsUrlIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string repoStatus_;
    bool repoStatusIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_RepoInfo_H_
