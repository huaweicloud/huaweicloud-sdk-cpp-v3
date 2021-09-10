
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ExtraInfoList_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ExtraInfoList_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  ExtraInfoList
    : public ModelBase
{
public:
    ExtraInfoList();
    virtual ~ExtraInfoList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtraInfoList members

    /// <summary>
    /// 表示key值，可能是qq, wechat, alipay及bank等。 
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// 表示value值，对应qq, wechat, alipay及bank等的账号。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 对应item关联的额外信息，为bank时第一个默认为户名，第二个为开户行，为alipay时第一个默认为账号名。 
    /// </summary>

    std::vector<std::string>& getNote();
    bool noteIsSet() const;
    void unsetnote();
    void setNote(const std::vector<std::string>& value);


protected:
    std::string item_;
    bool itemIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::vector<std::string> note_;
    bool noteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ExtraInfoList_H_
