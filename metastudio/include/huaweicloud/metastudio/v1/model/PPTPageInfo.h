
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PPTPageInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PPTPageInfo_H_


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
/// PPT图片元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PPTPageInfo
    : public ModelBase
{
public:
    PPTPageInfo();
    virtual ~PPTPageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PPTPageInfo members

    /// <summary>
    /// **参数解释**： 页面编号。 **约束限制**： 不涉及
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// **参数解释**： 页面对应图片文件ID。 **约束限制**： 不涉及 **取值范围**： 字符长度1-64位 **默认取值**： 不涉及
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// **参数解释**： 页面对应图片文件ID **约束限制**： 不涉及 **取值范围**： 字符长度0-2048位 **默认取值**： 不涉及。
    /// </summary>

    std::string getPageContent() const;
    bool pageContentIsSet() const;
    void unsetpageContent();
    void setPageContent(const std::string& value);


protected:
    int32_t pageNo_;
    bool pageNoIsSet_;
    std::string fileId_;
    bool fileIdIsSet_;
    std::string pageContent_;
    bool pageContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PPTPageInfo_H_
