
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecyclingJobResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecyclingJobResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/RecyclingJobs_result.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRecyclingJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecyclingJobResponse();
    virtual ~ListRecyclingJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecyclingJobResponse members

    /// <summary>
    /// 状态
    /// </summary>

    bool isSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(bool value);

    /// <summary>
    /// 消息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrCode() const;
    bool errCodeIsSet() const;
    void unseterrCode();
    void setErrCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecyclingJobs_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const RecyclingJobs_result& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    bool success_;
    bool successIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string errCode_;
    bool errCodeIsSet_;
    RecyclingJobs_result result_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecyclingJobResponse_H_
