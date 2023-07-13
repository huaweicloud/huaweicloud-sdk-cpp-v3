
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PutUpdateVocabReq_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PutUpdateVocabReq_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PutUpdateVocabReq
    : public ModelBase
{
public:
    PutUpdateVocabReq();
    virtual ~PutUpdateVocabReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PutUpdateVocabReq members

    /// <summary>
    /// 热词表名，不可重复。内容限制为字母，数字，下中划线和井号，长度不超过32字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 热词表描述，长度不超过255字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 热词表语言类型。 language取值范围： chinese_mandarin  汉语普通话
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 支持中英混编热词，单个热词只能由英文字母和unicode编码的汉字组成，不能有其他符号，包括空格。  单词库支持热词数上限1024。 单个热词长度上限32字节。
    /// </summary>

    std::vector<std::string>& getContents();
    bool contentsIsSet() const;
    void unsetcontents();
    void setContents(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::vector<std::string> contents_;
    bool contentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PutUpdateVocabReq_H_
