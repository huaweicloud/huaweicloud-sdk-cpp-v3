
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PPTAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PPTAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PPTPageInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PPT资产元数据信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PPTAssetMeta
    : public ModelBase
{
public:
    PPTAssetMeta();
    virtual ~PPTAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PPTAssetMeta members

    /// <summary>
    /// **参数解释**： PPT是否需要自动解析。 **约束限制**： 部分过于复杂的PPT或压缩比过高的PPT可能无法解析。 超过50页PPT仅转换50页 转换的图片无法保证完全还原，需要自行确认。 **取值范围**： * true: 自动解析 * false: 无需解析
    /// </summary>

    bool isAutoAnalysis() const;
    bool autoAnalysisIsSet() const;
    void unsetautoAnalysis();
    void setAutoAnalysis(bool value);

    /// <summary>
    /// **参数解释**： PPT解析状态。 **约束限制**： 不涉及 **取值范围**： * INITIALIZE：初始 * WAITING：等待 * CONVERTING：解析中 * FAILED：失败 * SUCCEEDED：成功 * CANCELED：取消  **默认取值**： 不涉及
    /// </summary>

    std::string getPptAnalysisStatus() const;
    bool pptAnalysisStatusIsSet() const;
    void unsetpptAnalysisStatus();
    void setPptAnalysisStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// **参数解释**： PPT页面总数。 **约束限制**： 不涉及
    /// </summary>

    int32_t getPageCount() const;
    bool pageCountIsSet() const;
    void unsetpageCount();
    void setPageCount(int32_t value);

    /// <summary>
    /// PPT页面图片。
    /// </summary>

    std::vector<PPTPageInfo>& getPages();
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(const std::vector<PPTPageInfo>& value);


protected:
    bool autoAnalysis_;
    bool autoAnalysisIsSet_;
    std::string pptAnalysisStatus_;
    bool pptAnalysisStatusIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    int32_t pageCount_;
    bool pageCountIsSet_;
    std::vector<PPTPageInfo> pages_;
    bool pagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PPTAssetMeta_H_
