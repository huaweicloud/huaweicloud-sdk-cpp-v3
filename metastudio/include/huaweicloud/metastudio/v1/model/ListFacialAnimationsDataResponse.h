
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListFacialAnimationsDataResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListFacialAnimationsDataResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListFacialAnimationsDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFacialAnimationsDataResponse();
    virtual ~ListFacialAnimationsDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFacialAnimationsDataResponse members

    /// <summary>
    /// csv文件下载地址
    /// </summary>

    std::string getCsvFileDownloadUrl() const;
    bool csvFileDownloadUrlIsSet() const;
    void unsetcsvFileDownloadUrl();
    void setCsvFileDownloadUrl(const std::string& value);

    /// <summary>
    /// 任务的状态。 * PROCESSING：处理中 * SUCCEED：成功 * FAILED：失败
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 失败任务描述
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string csvFileDownloadUrl_;
    bool csvFileDownloadUrlIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListFacialAnimationsDataResponse_H_
