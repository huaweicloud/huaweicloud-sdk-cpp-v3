
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_UpdateVocabularyRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_UpdateVocabularyRequest_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/PutUpdateVocabReq.h>

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
class HUAWEICLOUD_SIS_V1_EXPORT  UpdateVocabularyRequest
    : public ModelBase
{
public:
    UpdateVocabularyRequest();
    virtual ~UpdateVocabularyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVocabularyRequest members

    /// <summary>
    /// 被更新的热词表id。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PutUpdateVocabReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PutUpdateVocabReq& value);


protected:
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    PutUpdateVocabReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateVocabularyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateVocabularyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_UpdateVocabularyRequest_H_
