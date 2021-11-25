
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_DeleteVocabularyRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_DeleteVocabularyRequest_H_

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
class HUAWEICLOUD_SIS_V1_EXPORT  DeleteVocabularyRequest
    : public ModelBase
{
public:
    DeleteVocabularyRequest();
    virtual ~DeleteVocabularyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteVocabularyRequest members

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
    DeleteVocabularyRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteVocabularyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_DeleteVocabularyRequest_H_
