
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByFileRequestBody_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByFileRequestBody_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  CompareFaceByFileRequestBody
    : public ModelBase
{
public:
    CompareFaceByFileRequestBody();
    virtual ~CompareFaceByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareFaceByFileRequestBody members

    /// <summary>
    /// 本地图片文件，图片不能超过8MB。上传文件时，请求格式为multipart。
    /// </summary>

    HttpContent getImage1File() const;
    bool image1FileIsSet() const;
    void unsetimage1File();
    void setImage1File(const HttpContent& value);

    /// <summary>
    /// 本地图片文件，图片不能超过8MB。上传文件时，请求格式为multipart。
    /// </summary>

    HttpContent getImage2File() const;
    bool image2FileIsSet() const;
    void unsetimage2File();
    void setImage2File(const HttpContent& value);


protected:
    HttpContent image1File_;
    bool image1FileIsSet_;
    HttpContent image2File_;
    bool image2FileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByFileRequestBody_H_
