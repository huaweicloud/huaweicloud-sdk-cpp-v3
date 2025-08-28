
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentSegmentInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentSegmentInfo_H_


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
/// 文档分段信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DocumentSegmentInfo
    : public ModelBase
{
public:
    DocumentSegmentInfo();
    virtual ~DocumentSegmentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DocumentSegmentInfo members

    /// <summary>
    /// 分段序号
    /// </summary>

    int32_t getTextIndex() const;
    bool textIndexIsSet() const;
    void unsettextIndex();
    void setTextIndex(int32_t value);

    /// <summary>
    /// 分段文本ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 分段文本标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 分段文本内容
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);


protected:
    int32_t textIndex_;
    bool textIndexIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string text_;
    bool textIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentSegmentInfo_H_
