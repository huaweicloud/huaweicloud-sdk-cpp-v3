
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdDocumentRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdDocumentRequestBody_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  IdDocumentRequestBody
    : public ModelBase
{
public:
    IdDocumentRequestBody();
    virtual ~IdDocumentRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdDocumentRequestBody members

    /// <summary>
    /// 该参数与url二选一。  图片的Base64编码，要求单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于100px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF。 
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 该参数与image二选一。  单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于100px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF。 图片的url路径，目前支持： Image URL. Currently, the following URLs are supported: - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权。 &gt; 说明: - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 证件签发国家或地区代码，命名遵循ISO-3166 3位代码。可选值。支持填写1个或多个国家/地区。指定参数后，服务只识别指定国家/地区的卡证，如留空，则识别所有地区卡证。建议国家/地区固定或有限范围的情况下填写。支持国家/地区列表见表1国家/地区和证件列表。 
    /// </summary>

    std::vector<std::string>& getCountryRegion();
    bool countryRegionIsSet() const;
    void unsetcountryRegion();
    void setCountryRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 证件类型。可选值。支持填写1种或多种证件。指定参数后，服务只识别指定类型的卡证，如留空，默认识别所有类型卡证，建议已知证件类型的情况下填写。支持证件类型如下： - PP: passport，国际护照。 - DL: driving license，驾驶证。 - ID: identification card，各国颁发的身份证类型证件，比如身份证、选民卡、社保卡等。 
    /// </summary>

    std::vector<std::string>& getIdType();
    bool idTypeIsSet() const;
    void unsetidType();
    void setIdType(const std::vector<std::string>& value);

    /// <summary>
    /// 控制是否返回portrait_image（证件中的人像图片），True代表需要返回，False代表不需要。 
    /// </summary>

    bool isReturnPortraitImage() const;
    bool returnPortraitImageIsSet() const;
    void unsetreturnPortraitImage();
    void setReturnPortraitImage(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::vector<std::string> countryRegion_;
    bool countryRegionIsSet_;
    std::vector<std::string> idType_;
    bool idTypeIsSet_;
    bool returnPortraitImage_;
    bool returnPortraitImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdDocumentRequestBody_H_
