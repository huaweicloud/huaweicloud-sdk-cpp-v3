
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_AddProtectedInstanceNicResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_AddProtectedInstanceNicResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  AddProtectedInstanceNicResponse
    : public ModelBase, public HttpResponse
{
public:
    AddProtectedInstanceNicResponse();
    virtual ~AddProtectedInstanceNicResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddProtectedInstanceNicResponse members

    /// <summary>
    /// 成功返回jobId信息
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_AddProtectedInstanceNicResponse_H_
