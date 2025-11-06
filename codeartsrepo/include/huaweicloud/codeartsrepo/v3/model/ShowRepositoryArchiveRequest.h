
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowRepositoryArchiveRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowRepositoryArchiveRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ShowRepositoryArchiveRequest
    : public ModelBase
{
public:
    ShowRepositoryArchiveRequest();
    virtual ~ShowRepositoryArchiveRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryArchiveRequest members

    /// <summary>
    /// 仓库的uuid
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 下载的压缩包格式
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


protected:
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string format_;
    bool formatIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRepositoryArchiveRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryArchiveRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowRepositoryArchiveRequest_H_
