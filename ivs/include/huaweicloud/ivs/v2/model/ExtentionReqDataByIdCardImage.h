
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_ExtentionReqDataByIdCardImage_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_ExtentionReqDataByIdCardImage_H_


#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  ExtentionReqDataByIdCardImage
    : public ModelBase
{
public:
    ExtentionReqDataByIdCardImage();
    virtual ~ExtentionReqDataByIdCardImage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtentionReqDataByIdCardImage members

    /// <summary>
    /// 身份证人像面图像数据，使用base64编码，要求base64编码后大小不超过4M。图像各边的像素大小在300到4000之间，支持JPG格式。
    /// </summary>

    std::string getIdcardImage1() const;
    bool idcardImage1IsSet() const;
    void unsetidcardImage1();
    void setIdcardImage1(const std::string& value);

    /// <summary>
    /// 身份证国徽面图像数据，使用base64编码，要求base64编码后大小不超过4M。图像各边的像素大小在300到4000之间，支持JPG格式。
    /// </summary>

    std::string getIdcardImage2() const;
    bool idcardImage2IsSet() const;
    void unsetidcardImage2();
    void setIdcardImage2(const std::string& value);


protected:
    std::string idcardImage1_;
    bool idcardImage1IsSet_;
    std::string idcardImage2_;
    bool idcardImage2IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_ExtentionReqDataByIdCardImage_H_
