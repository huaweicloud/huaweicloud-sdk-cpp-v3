
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabularyResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabularyResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  ShowVocabularyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVocabularyResponse();
    virtual ~ShowVocabularyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVocabularyResponse members

    /// <summary>
    /// 调用成功返回热词表ID，调用失败时无此字段。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 调用成功返回热词表名，调用失败时无此字段。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 调用成功返回热词表描述，调用失败时无此字段。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 调用成功返回热词表语言类型，调用失败时无此字段。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 调用成功返回热词列表，调用失败时无此字段。
    /// </summary>

    std::vector<std::string>& getContents();
    bool contentsIsSet() const;
    void unsetcontents();
    void setContents(const std::vector<std::string>& value);


protected:
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::vector<std::string> contents_;
    bool contentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabularyResponse_H_
