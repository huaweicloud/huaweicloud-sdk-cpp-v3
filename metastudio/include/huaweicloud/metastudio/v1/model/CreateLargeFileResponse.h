
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateLargeFileResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateLargeFileResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateLargeFileResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateLargeFileResponse();
    virtual ~CreateLargeFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLargeFileResponse members

    /// <summary>
    /// 文件ID。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// 文件分段上传URL。
    /// </summary>

    std::vector<std::string>& getUploadUrls();
    bool uploadUrlsIsSet() const;
    void unsetuploadUrls();
    void setUploadUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string fileId_;
    bool fileIdIsSet_;
    std::vector<std::string> uploadUrls_;
    bool uploadUrlsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateLargeFileResponse_H_
