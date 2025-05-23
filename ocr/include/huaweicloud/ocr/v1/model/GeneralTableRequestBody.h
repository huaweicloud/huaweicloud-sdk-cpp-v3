
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableRequestBody_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  GeneralTableRequestBody
    : public ModelBase
{
public:
    GeneralTableRequestBody();
    virtual ~GeneralTableRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralTableRequestBody members

    /// <summary>
    /// 与url二选一。  图片的Base64编码，要求单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于15px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF格式。  图片文件Base64编码字符串，[点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)](tag:hc)[点击[这里](https://support.huaweicloud.com/intl/zh-cn/ocr_faq/ocr_01_0032.html)](tag:hk)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一。  单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于15px，最长边不超过8192px，支持JPEG、JPG、PNG、BMP、TIFF格式。 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，[详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。](tag:hc)[详情参见[配置OBS访问权限](https://support.huaweicloud.com/intl/zh-cn/api-ocr/ocr_03_0132.html)。](tag:hk) &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 返回文本块坐标及单元格坐标信息，可选值如下所示： - true：返回文本块和单元格坐标 - false：不返回  &gt; 说明： - 如果未传入该参数时默认为false，即不返回。 
    /// </summary>

    bool isReturnTextLocation() const;
    bool returnTextLocationIsSet() const;
    void unsetreturnTextLocation();
    void setReturnTextLocation(bool value);

    /// <summary>
    /// 返回单字符的坐标信息，可选值包括： - true：返回单字符的坐标 - false：不返回  未传入该参数时默认为false，即不返回。如果此参数为true时，return_text_loaction必须为true 
    /// </summary>

    bool isReturnCharLocation() const;
    bool returnCharLocationIsSet() const;
    void unsetreturnCharLocation();
    void setReturnCharLocation(bool value);

    /// <summary>
    /// 是否返回置信度的开关，可选值包括： - true：返回置信度 - false：不返回置信度  &gt; 说明： - 如果未传入该参数，系统默认为“false”，即不返回置信度。 
    /// </summary>

    bool isReturnConfidence() const;
    bool returnConfidenceIsSet() const;
    void unsetreturnConfidence();
    void setReturnConfidence(bool value);

    /// <summary>
    /// 是否返回表格转换Microsoft Excel的base64编码字段。可选值包括： - true：返回&#39;excel&#39;字段，表示xlsx格式的表格识别结果的base64编码 - false：不返回。默认为false  &gt; 说明： - 对返回的Excel编码，可用Python函数 base64.b64decode解码后保存为.xlsx文件。 
    /// </summary>

    bool isReturnExcel() const;
    bool returnExcelIsSet() const;
    void unsetreturnExcel();
    void setReturnExcel(bool value);

    /// <summary>
    /// 可选值包括： - true：返回透视变换矩阵 - false：不返回  未传入该参数时默认为false，即不返回透视变换矩阵。 
    /// </summary>

    bool isReturnRectificationMatrix() const;
    bool returnRectificationMatrixIsSet() const;
    void unsetreturnRectificationMatrix();
    void setReturnRectificationMatrix(bool value);

    /// <summary>
    /// 可选值包括： - true：输入图像仅包含有线表格，仅进行有线表格识别。 - false: 输入图像可能包含无线表格，同时进行有线表格与无线表格识别。  未传入该参数时默认为false，即同时进行有线表格与无线表格识别。当确认输入仅包含有线表格时，该参数设为true可达到更优识别效果。 
    /// </summary>

    bool isWithBorders() const;
    bool withBordersIsSet() const;
    void unsetwithBorders();
    void setWithBorders(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool returnTextLocation_;
    bool returnTextLocationIsSet_;
    bool returnCharLocation_;
    bool returnCharLocationIsSet_;
    bool returnConfidence_;
    bool returnConfidenceIsSet_;
    bool returnExcel_;
    bool returnExcelIsSet_;
    bool returnRectificationMatrix_;
    bool returnRectificationMatrixIsSet_;
    bool withBorders_;
    bool withBordersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_GeneralTableRequestBody_H_
