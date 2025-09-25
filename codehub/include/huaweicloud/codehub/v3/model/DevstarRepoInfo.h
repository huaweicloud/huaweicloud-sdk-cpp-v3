
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DevstarRepoInfo_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DevstarRepoInfo_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  DevstarRepoInfo
    : public ModelBase
{
public:
    DevstarRepoInfo();
    virtual ~DevstarRepoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevstarRepoInfo members

    /// <summary>
    /// 仓库的uuid
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 仓库ID
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 仓库SSH地址
    /// </summary>

    std::string getSshUrl() const;
    bool sshUrlIsSet() const;
    void unsetsshUrl();
    void setSshUrl(const std::string& value);

    /// <summary>
    /// 仓库HTTPS地址
    /// </summary>

    std::string getCodeUrl() const;
    bool codeUrlIsSet() const;
    void unsetcodeUrl();
    void setCodeUrl(const std::string& value);

    /// <summary>
    /// 仓库预览地址
    /// </summary>

    std::string getDetailUrl() const;
    bool detailUrlIsSet() const;
    void unsetdetailUrl();
    void setDetailUrl(const std::string& value);


protected:
    std::string uuid_;
    bool uuidIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string sshUrl_;
    bool sshUrlIsSet_;
    std::string codeUrl_;
    bool codeUrlIsSet_;
    std::string detailUrl_;
    bool detailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DevstarRepoInfo_H_
