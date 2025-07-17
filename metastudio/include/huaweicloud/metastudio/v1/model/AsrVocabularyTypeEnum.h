
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyTypeEnum_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyTypeEnum_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AsrVocabularyTypeEnum
: public ModelBase
{
public:
    AsrVocabularyTypeEnum();
    virtual ~AsrVocabularyTypeEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eAsrVocabularyTypeEnum 
    {
        AsrVocabularyTypeEnum_MOBVOI,
    };

    eAsrVocabularyTypeEnum getValue() const;
    void setValue(eAsrVocabularyTypeEnum const value);

protected:
    eAsrVocabularyTypeEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyTypeEnum_H_
