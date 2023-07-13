
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabularyRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabularyRequest_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Request Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  ShowVocabularyRequest
    : public ModelBase
{
public:
    ShowVocabularyRequest();
    virtual ~ShowVocabularyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVocabularyRequest members

    /// <summary>
    /// 热词表id。
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
public:
    ShowVocabularyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVocabularyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabularyRequest_H_
