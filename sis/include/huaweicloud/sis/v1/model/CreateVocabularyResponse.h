
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_CreateVocabularyResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_CreateVocabularyResponse_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_SIS_V1_EXPORT  CreateVocabularyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVocabularyResponse();
    virtual ~CreateVocabularyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVocabularyResponse members

    /// <summary>
    /// 调用成功返回热词表ID，调用失败时无此字段。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);


protected:
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_CreateVocabularyResponse_H_
