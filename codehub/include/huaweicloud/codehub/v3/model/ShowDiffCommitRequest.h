
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowDiffCommitRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowDiffCommitRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowDiffCommitRequest
    : public ModelBase
{
public:
    ShowDiffCommitRequest();
    virtual ~ShowDiffCommitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDiffCommitRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// commit id，仓库的branch名或tag名
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);


protected:
    int32_t repoId_;
    bool repoIdIsSet_;
    std::string sha_;
    bool shaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDiffCommitRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDiffCommitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowDiffCommitRequest_H_
