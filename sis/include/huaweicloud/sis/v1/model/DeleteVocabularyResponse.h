
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_DeleteVocabularyResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_DeleteVocabularyResponse_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_SIS_V1_EXPORT  DeleteVocabularyResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteVocabularyResponse();
    virtual ~DeleteVocabularyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteVocabularyResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_DeleteVocabularyResponse_H_
