
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitsResponse_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v3/model/CommitInfo.h>
#include <huaweicloud/codehub/v3/model/Error.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListCommitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCommitsResponse();
    virtual ~ListCommitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommitsResponse members

    /// <summary>
    /// 
    /// </summary>

    Error getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Error& value);

    /// <summary>
    /// 提交列表
    /// </summary>

    std::vector<CommitInfo>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<CommitInfo>& value);

    /// <summary>
    /// 响应状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    Error error_;
    bool errorIsSet_;
    std::vector<CommitInfo> result_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitsResponse_H_
