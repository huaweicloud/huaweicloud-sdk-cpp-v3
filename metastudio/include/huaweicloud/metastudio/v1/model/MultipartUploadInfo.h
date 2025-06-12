
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MultipartUploadInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MultipartUploadInfo_H_


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
/// 训练视频已上传分片信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MultipartUploadInfo
    : public ModelBase
{
public:
    MultipartUploadInfo();
    virtual ~MultipartUploadInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MultipartUploadInfo members

    /// <summary>
    /// 分片编号
    /// </summary>

    std::string getPartNumber() const;
    bool partNumberIsSet() const;
    void unsetpartNumber();
    void setPartNumber(const std::string& value);

    /// <summary>
    /// 分片文件标识
    /// </summary>

    std::string getEtag() const;
    bool etagIsSet() const;
    void unsetetag();
    void setEtag(const std::string& value);


protected:
    std::string partNumber_;
    bool partNumberIsSet_;
    std::string etag_;
    bool etagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MultipartUploadInfo_H_
