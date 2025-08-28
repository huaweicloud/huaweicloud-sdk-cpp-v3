
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDocumentSegmentReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDocumentSegmentReq_H_


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
/// 修改文档分段信息请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateDocumentSegmentReq
    : public ModelBase
{
public:
    UpdateDocumentSegmentReq();
    virtual ~UpdateDocumentSegmentReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDocumentSegmentReq members

    /// <summary>
    /// 文档ID。
    /// </summary>

    std::string getDocumentId() const;
    bool documentIdIsSet() const;
    void unsetdocumentId();
    void setDocumentId(const std::string& value);

    /// <summary>
    /// 文档分段文本ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 分段序号
    /// </summary>

    int32_t getTextIndex() const;
    bool textIndexIsSet() const;
    void unsettextIndex();
    void setTextIndex(int32_t value);

    /// <summary>
    /// 文档分段文本。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);


protected:
    std::string documentId_;
    bool documentIdIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t textIndex_;
    bool textIndexIsSet_;
    std::string text_;
    bool textIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDocumentSegmentReq_H_
