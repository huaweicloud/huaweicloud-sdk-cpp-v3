
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateNewBranchResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateNewBranchResponse_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/AddProtectResponse.h>
#include <string>
#include <huaweicloud/codehub/v3/model/Error.h>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CreateNewBranchResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateNewBranchResponse();
    virtual ~CreateNewBranchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNewBranchResponse members

    /// <summary>
    /// 
    /// </summary>

    Error getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Error& value);

    /// <summary>
    /// 
    /// </summary>

    AddProtectResponse getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const AddProtectResponse& value);

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
    AddProtectResponse result_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateNewBranchResponse_H_
