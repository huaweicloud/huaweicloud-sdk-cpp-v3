
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListEndpointsDetailsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListEndpointsDetailsResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/EndpointList.h>
#include <huaweicloud/codeartspipeline/v2/model/ErrorInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListEndpointsDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEndpointsDetailsResponse();
    virtual ~ListEndpointsDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEndpointsDetailsResponse members

    /// <summary>
    /// 
    /// </summary>

    ErrorInfo getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ErrorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    EndpointList getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const EndpointList& value);

    /// <summary>
    /// 状态值
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    ErrorInfo error_;
    bool errorIsSet_;
    EndpointList result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListEndpointsDetailsResponse_H_
